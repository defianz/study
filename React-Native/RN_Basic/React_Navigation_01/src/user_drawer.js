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
import PictogramHome from './assets/pics/home_icon.png';

class DrawerUserScreen extends Component {
  drawerStyle = () => {
    this.props.navigation.setOptions({
      drawerIcon: () => (
        <Image source={PictogramHome} style={{width: 40, height: 40}} />
      ),
    });
  };
  render() {
    this.drawerStyle();
    return (
      <View style={styles.user}>
        <Text>DrawerUserScreen</Text>
        <Button
          title="To Home Screen"
          onPress={() => {
            this.props.navigation.navigate('Home');
          }}
        />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  user: {flex: 1, alignItems: 'center', justifyContent: 'center'},
});

export default DrawerUserScreen;
