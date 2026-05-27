import './App.css'
import { useAppDispatch, useAppSelector } from "./hooks/reduxhooks"
import { customIncrement, decremented, incremented } from './slices/counterSlice'


function App() {
  const state = useAppSelector(state => state.counter.count)
  const dispatch = useAppDispatch()
  return (
    <div>
      <h1>count: {state}</h1>
      <div style={{
        display: "flex",
        justifyContent: "center",
        alignItems: "center",
        gap: "10px"
      }}>

      <button onClick={() => dispatch(incremented())} style={{width: "100px"}}>Increment by 1</button>
      <button onClick={() => dispatch(decremented())} style={{width: "100px"}}>decrement by 1</button>
      <button onClick={() => dispatch(customIncrement(5))} style={{width: "100px"}}>Increment by 5</button>
      </div>
    </div>
  )
}

export default App
