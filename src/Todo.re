let component = ReasonReact.statelessComponent("Todo");
let make = (_children) => {
  ...component,
  render: _self =>
    <div>
      <p>(ReasonReact.string("what?"))</p>
    </div>,
};
