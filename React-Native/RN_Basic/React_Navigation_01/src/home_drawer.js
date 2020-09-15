/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import 'react-native-gesture-handler';
import React, {Component} from 'react';
import {StyleSheet, View, Text, Button, Image} from 'react-native';

class DrawerHomeScreen extends Component {
  render() {
    return (
      <View style={styles.home}>
        <Text>Home Screen</Text>
        <Button
          title="To User Screen"
          onPress={() => {
            this.props.navigation.navigate('User');
          }}
        />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  home: {flex: 1, alignItems: 'center', justifyContent: 'center'},
});

export default DrawerHomeScreen;
