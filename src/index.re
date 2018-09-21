module App = {
  let component = ReasonReact.statelessComponent("App");

  let make = _children => {
    ...component,
    render: _self => <div> (ReasonReact.string("App")) </div>,
  };
};

ReactDOMRe.renderToElementWithId(<App />, "app");
