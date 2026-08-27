import express from "express"
import morgan from "morgan"
import axios from "axios"

const app = express()

app.use(morgan("dev"))
app.use(express.json())


app.get("/", async (req, res) => {
    const respose = await axios.get("http://main-server-service/")
    res.send(respose.data)
})

app.listen(8080, (req, res) => {
    console.log("Server is Running on Port 8080 okay Buddy")
})