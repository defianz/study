/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {StyleSheet, View, Text, Button} from 'react-native';

class TabUserScreen extends Component {
  render() {
    // console.warn(this.props.route);
    return (
      <View style={styles.home}>
        <Text>User Tab Screen</Text>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  home: {flex: 1, alignItems: 'center', justifyContent: 'center'},
});

export default TabUserScreen;
