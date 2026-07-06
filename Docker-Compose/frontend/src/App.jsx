import { useState, useEffect } from 'react'
import axios from "axios"

function App() {
  const [users, setUsers] = useState([])

  useEffect(() => {
    axios.get("/api/users")
      .then(response => {
        setUsers(response.data)
      })
      .catch(error => {
        console.error("Failed to fetch users:", error)
      })
  }, [])

  return (
    <div className="app">
      <h1>Users</h1>
      {users.map(user => (
        <li key={user.id}>{user.name}</li>
      ))}
    </div>
  )
}

export default App
