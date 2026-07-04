import { useState, useEffect } from 'react'
import axios from "axios"

function App() {
  const [user, setuser] = useState([])

  useEffect(() => {
    axios.get("/api/users")
      .then(respose => {
        setuser(respose.data)
      })
  }, [])

  return (
    <div className="app">
      <h1>User</h1>
      {user.map(user => (
        <li key={user.id}>{user.name}</li>
      ))}
    </div>
  )
}

export default App
