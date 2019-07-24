type state = {test: bool};

let setup = (env) => {
  Reprocessing.Env.size(
    ~width=300,
    ~height=300,
    env,
  );
  {test: true};
};

let draw = (state, env) => {
  Reprocessing.Draw.background(Reprocessing.Utils.color(~r=42, ~g=224, ~b=149, ~a=255), env);
  state;
};
