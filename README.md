# Introducing Reason to an existing React Project
One of the hardest things about trying out new tools is that they don't always play well with your
existing code, or if they do it takes a lot of time and effort to make it happen.

[Reason](https://github.com/facebook/reason) happens to be extremely easy to integrate into an existing React app with the help of [reason-reason](https://github.com/reasonml/reason-react)

In this README I am going to attempt to convey how I added Reason to an existing app created by [create-react-app](https://github.com/facebookincubator/create-react-app).
The code in this project is an "existing codebase" with Reason implemented.

I don't want to dive too deep into the different tools used to set this up, mostly because I don't have
a lot of them, but instead want to focus on the process of introducing Reason into a React app.

## Step 1 - BuckleScript Config
[BuckleScript](https://github.com/bloomberg/bucklescript) is "a backend for the OCaml compiler which emits JavaScript". It
is what turns our Reason code into JavaScript we can import into our React code.

We will run BuckleScript in our terminal, it will read our code and turn it into JavaScript. In order to point it in the
right direction we will need to create a `bsconfig.json` file. This is similar to `webpack.config.js` or `.babelrc` files.
It merely configures BuckleScript.

In the root of your project create a file named `bsconfig.json`.

I borrowed most of this `bsconfig.json` file from [Cheng Lou](https://github.com/chenglou)'s [reason-react-example](https://github.com/chenglou/reason-react-example)

```json
  {
    "name" : "introduce-reason",
    "reason" : { "react-jsx" : true },
    "bs-dependencies": ["reason-react", "reason-js"],
    "sources": [
      {
        "dir": "src",
      }
    ],
  }
```


Step 1 - add bsconfig.json
Step 1 - add reason-react, reason-js, bs-platform
Step 1 - add buckle npm scripts
Step 1 - run `$ npm run buckle:up`
Step 1 - combiles, makes a lib folder, nothing happens
Step 1 - add re component
Step 1 - inspect the lib folder and check out that compiled component
Step 1 - import re component
