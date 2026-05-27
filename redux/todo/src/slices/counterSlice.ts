import { createSlice } from "@reduxjs/toolkit"

const initialState = {
    count: 0
}

const counterSlice = createSlice({
    name: "counter",
    initialState,
    reducers: {
        incremented: (state) => {
            state.count += 1;
        },
        decremented: (state) => {
            state.count -= 1;
        },
        customIncrement: (state, action) => {
            state.count += action.payload
        }
    }
})

export const { incremented, decremented, customIncrement } = counterSlice.actions;
export default counterSlice.reducer;