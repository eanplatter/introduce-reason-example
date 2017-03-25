module Intro = {
  include ReactRe.Component.JsProps;
  type props = { message: string };
  let name = "Intro";
  let render { props } => <p className="App-intro"> (ReactRe.stringToElement props.message) </p>;
  type jsProps = Js.t {. message : string };
  let jsPropsToReasonProps =
    Some (
      fun jsProps => { message: jsProps##message }
    );
};

include ReactRe.CreateComponent Intro;

let createElement ::message => wrapProps { message };
