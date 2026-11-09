import express from "express"
import morgan from "morgan"

const app = express()

app.use(morgan("dev"))

app.get("/", (req, res) => {
    let sum = 0

    for (let i = 0; i < 1000000; i++) {
        sum += i
    }

    res.status(200).json({
        message: `The Hello World Number is ${sum}`
    })
})

app.listen(3000, "0.0.0.0", () => {
    console.log("The server is Running on Port 3000")
})