/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import 'react-native-gesture-handler';
import React, {Component} from 'react';
import {StyleSheet, View, Text, Button} from 'react-native';

class UserScreen extends Component {
  headerStyle = () => {
    this.props.navigation.setOptions({
      title: 'Customizing',
      headerStyle: {
        backgroundColor: 'blue',
      },
      headerTintColor: 'yellow',
      headerTitleStyle: {
        fontWeight: 'bold',
        color: 'green',
      },
      headerBackTitle: 'BACK',
      headerRight: () => (
        <Button
          title="Go Back"
          onPress={() => {
            this.props.navigation.navigate('Home');
          }}
          color="red"
        />
      ),
    });
  };

  render() {
    this.headerStyle();
    const {params} = this.props.route;
    const userIdx = params ? params.userIdx : null;
    const userName = params ? params.userName : null;
    const userLastName = params ? params.userLastName : null;

    return (
      <View style={styles.user}>
        <Text>UserScreen</Text>
        <Button
          title="To Home Screen"
          onPress={() => {
            this.props.navigation.navigate('Home');
          }}
        />
        <Text> User Idx : {JSON.stringify(userIdx)}</Text>
        <Text> User Name : {JSON.stringify(userName)}</Text>
        <Text> User LastName : {JSON.stringify(userLastName)}</Text>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  user: {flex: 1, alignItems: 'center', justifyContent: 'center'},
});

export default UserScreen;
