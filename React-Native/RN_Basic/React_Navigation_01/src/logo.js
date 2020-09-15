/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {StyleSheet, View, Text, Button, Image} from 'react-native';

import LogoIcon from './assets/pics/home_icon.png';

class Logo extends Component {
  render() {
    return <Image style={{width: 40, height: 40}} source={LogoIcon} />;
  }
}

export default Logo;
