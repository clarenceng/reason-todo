type todo = {
  label: string
}
type state = {
  counter: int,
  todos: array(todo)
}
type action =
  | Increment

let component = ReasonReact.reducerComponent("Todo");
let make = (_children) => {
  {
    ...component,
    initialState: () => {
      todos: [|{label: "none"}|], 
      counter: 0
    },
    reducer: (action, state) =>
      switch (action) {
      | Increment => ReasonReact.Update({...state, counter: state.counter + 1})
      },
    render: self =>
      <div>
        <p>(ReasonReact.string("Number of Todos:" ++ string_of_int(self.state.counter)))</p>
        <button onClick=(_event => self.send(Increment))>
          (ReasonReact.string("increment"))
        </button>
      </div>,
  }
};
