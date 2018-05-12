open BsReactNative;

[@bs.module "react-native-linear-gradient"]
external reactClass : ReasonReact.reactClass = "default";

let make =
    (
      ~colors: array(string),
      ~start: option(Js.t({..}))=?,
      ~end_: option(Js.t({..}))=?,
      ~locations: option(array(float))=?,
      ~style: option(BsReactNative.Style.t)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      Js.Null_undefined.(
        {
          "colors": colors,
          "start": fromOption(start),
          "end": fromOption(end_),
          "location": fromOption(locations),
          "style": fromOption(style),
        }
      ),
    children,
  );
