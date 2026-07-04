import express from "express"
import morgan from "morgan"

const app = express()

app.get("/api/health", (req, res) => {
    res.status(200).json({ status: "Ok" })
})


app.get("/api/hello", (req, res) => {
    res.status(200).json({
        message: "Hello World"
    })
})

app.get("/api/users", (req, res) => {
    const user = [
        { id: 1, name: "Alice" },
        { id: 2, name: "Sam" },
        { id: 3, name: "Tom" },
        { id: 4, name: "Jerry" }
    ];
    res.status(200).json(user)
})

app.listen(3000, () => {
    console.log("server is running on port 3000")
})