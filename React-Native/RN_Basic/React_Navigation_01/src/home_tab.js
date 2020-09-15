/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {StyleSheet, View, Text, Button} from 'react-native';

class TabHomeScreen extends Component {
  render() {
    return (
      <View style={styles.home}>
        <Text>Home Tab Screen</Text>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  home: {flex: 1, alignItems: 'center', justifyContent: 'center'},
});

export default TabHomeScreen;
