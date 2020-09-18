/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {Dimensions, Platform, StyleSheet, View, Text} from 'react-native';

import Animone from './src/Animation01';
import AnimTwo from './src/Animation02';
import Supertext from './src/utils/supertext';

import DeviceInfo from 'react-native-device-info';

class App extends Component {
  functionA = () => {
    if (Dimensions.get('window').fontScale === 1) {
      console.warn('Good');
    } else {
      console.warn('Error!! The Font Scale nERROR');
    }
  };
  checkSupprot = () => {
    if (Platform.OS === 'ios') {
      return !(Platform.Version < 13.7);
    } else {
      return !(Platform.Version < 27);
    }
  };

  render() {
    // console.warn(Dimensions.get('screen'));
    // console.warn(Dimensions.get('window'));
    // console.warn(Platform.Version);
    console.warn(DeviceInfo.getBrand());
    console.warn(DeviceInfo.isTablet());
    return (
      <View style={styles.container}>
        {this.functionA()}
        {this.checkSupprot() ? (
          <Supertext
            style={
              // {backgroundColor: 'red'}
              styles.div
            }>
            {/* this is my template2 */}
            {Platform.OS === 'ios'
              ? ' this is my ios phone'
              : 'this is my android phone'}
          </Supertext>
        ) : (
          <Text>Sorry. your Phone is not being supported by the app</Text>
        )}
        {/* <Animone /> */}
        {/* <AnimTwo /> */}
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#bbb',
    alignItems: 'center',
    justifyContent: 'center',
    paddingTop: 50,
  },
  div: {
    ...Platform.select({
      ios: {
        backgroundColor: 'yellow',
      },
      android: {
        backgroundColor: 'red',
      },
    }),
  },
});

export default App;
