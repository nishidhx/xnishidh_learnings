import { configureStore } from "@reduxjs/toolkit";
import counterReducer from "../slices/counterSlice"

export const store = configureStore({
    reducer: {
        counter: counterReducer
    }
})


// export type RootState = ReturnType<typeof store.getState>;
// export type AppDispatch = typeof store.dispatch;

export type AppStore = typeof store
// Infer the `RootState` and `AppDispatch` types from the store itself
export type RootState = ReturnType<AppStore['getState']>
// Inferred type: {posts: PostsState, comments: CommentsState, users: UsersState}
export type AppDispatch = AppStore['dispatch']