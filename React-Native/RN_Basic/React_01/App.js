/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {View, Text, StyleSheet, Button} from 'react-native';
import PropsChild from './propsChild';

class App extends Component {
  state = {
    sampleText: 'Hello Wolrd!!!',
    sampleBoolean: false,
    sampleNum: 0,
  };

  inputText = () =>
    this.state.sampleBoolean ? (
      <Text>sampleBoolean is true</Text>
    ) : (
      <Text>sampleBoolean is false</Text>
    );

  Click = () => {
    this.setState({sampleBoolean: !this.state.sampleBoolean});
  };

  changeState = () => {
    if (!this.state.sampleBoolean) {
      this.setState({sampleText: 'Text Chagned', sampleBoolean: true});
    } else {
      this.setState({sampleText: 'Hello Wolrd!!!', sampleBoolean: false});
    }
  };

  onAdd = () => {
    this.setState(prevstate => ({
      sampleNum: prevstate.sampleNum + 1,
    }));
  };

  render() {
    return (
      <View style={styles.background}>
        {/* <Text> {this.state.sampleText} </Text> */}
        {this.inputText()}
        <Button onPress={this.Click} title="Press Me" />
        <Text onPress={this.changeState}>{this.state.sampleText}</Text>
        <Text onPress={this.onAdd}>{this.state.sampleNum}</Text>
        <PropsChild
          sampleText={this.state.sampleText}
          changeState={this.changeState}
        />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  background: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});

export default App;
