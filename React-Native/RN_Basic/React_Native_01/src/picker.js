/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {View, Text, StyleSheet, ActivityIndicator} from 'react-native';
import {Picker} from '@react-native-community/picker';
import Slider from '@react-native-community/slider';

class PickerComponent extends Component {
  state = {
    contury: 'canada',
    value: 50,
  };

  sliderValueChange = value => {
    this.setState({
      value: value,
    });
  };

  render() {
    return (
      <View style={styles.conatainer}>
        <Slider
          style={{height: 40, width: 300}}
          value={this.state.value}
          minimunValue={0}
          maximumValue={100}
          onValueChange={this.sliderValueChange}
          maximumTrackTintColor="red"
          minimumTrackTintColor="blue"
          step={1}
        />
        <Text style={styles.input}>{this.state.value}</Text>
        <ActivityIndicator
          style={{paddingTop: 200}}
          size="large"
          color="green"
          animating={true}
        />
        <Picker
          style={{height: 50, width: 250}}
          selectedValue={this.state.contury}
          onValueChange={(val, idx) => {
            this.setState({contury: val});
          }}>
          <Picker.Item label="Korea" value="korea" />
          <Picker.Item label="Canada" value="canada" />
        </Picker>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  conatainer: {
    flex: 1,
    paddingTop: 20,
    marginBottom: 200,
    alignItems: 'center',
  },
  input: {
    width: '100%',
    marginTop: 25,
    fontSize: 25,
  },
});

export default PickerComponent;
