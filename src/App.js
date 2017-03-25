import React, { Component } from 'react';
import logo from './logo.svg';
import Intro from '../lib/js/src/intro'
import './App.css';

class App extends Component {
  render() {
    return (
      <div className="App">
        <div className="App-header">
          <img src={logo} className="App-logo" alt="logo" />
          <h2>Welcome to React</h2>
        </div>
        <Intro.comp message="To get started, src/App.js and save to reload." />
      </div>
    );
  }
}

export default App;
