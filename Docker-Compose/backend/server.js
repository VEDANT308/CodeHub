import express from "express";
import cors from "cors";
import morgan from "morgan";

const app = express();

// --------------- Middleware (order matters) ---------------
app.use(cors());           // Allow cross-origin requests (needed when frontend runs on a different port)
app.use(express.json());   // Parse JSON request bodies
app.use(morgan("dev"));    // HTTP request logger

// --------------- API Routes ---------------
app.get("/api/health", (req, res) => {
  res.status(200).json({ status: "Ok" });
});

app.get("/api/hello", (req, res) => {
  res.status(200).json({
    message: "Hello World",
  });
});

app.get("/api/users", (req, res) => {
  const users = [
    { id: 1, name: "Alice" },
    { id: 2, name: "Sam" },
    { id: 3, name: "Tom" },
    { id: 4, name: "Jerry" },
  ];
  res.status(200).json(users);
});

// --------------- 404 handler for unknown API routes ---------------
app.use("/api", (req, res) => {
  res.status(404).json({ error: "Not Found" });
});

// --------------- Global error handler ---------------
app.use((err, req, res, _next) => {
  console.error(err.stack);
  res.status(500).json({ error: "Internal Server Error" });
});

// --------------- Start server ---------------
const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
  console.log(`server is running on port ${PORT}`);
});