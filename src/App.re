/* [%bs.raw {|require('./App.css')|}];
[@bs.module] external logo : string = "./logo.svg"; */
let component = ReasonReact.statelessComponent("App");

let handleClick = (_event, _self) => Js.log("clicked!");

let make = (~message, _children) => {
  ...component,
  render: _self =>
    <div onClick=(_self.handle(handleClick))>
      (ReasonReact.string(message))
      <Todo />
    </div>,
};
