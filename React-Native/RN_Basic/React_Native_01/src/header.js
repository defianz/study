/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React from 'react';
import {
  View,
  Text,
  StyleSheet,
  TouchableOpacity,
  TouchableWithoutFeedback,
} from 'react-native';

const Header = props => {
  return (
    <TouchableOpacity
      style={styles.header}
      //   onPress={() => alert('hello wolrd')}>
      //   onLongPress={() => alert('Hello Long Wolrd')}>
      //   onPressIn={() => alert('Hello Long Wolrd')}>
      onPressOut={() => alert('Hello Long Wolrd')}>
      <View>
        <Text>{props.name}</Text>
      </View>
    </TouchableOpacity>
    // <TouchableWithoutFeedback
    //     onPress={() => alert('hello wolrd')}>
    //     <View style={styles.header}>
    //       <Text>{props.name}</Text>
    //     </View>
    // </TouchableWithoutFeedback>
    // <View style={styles.header}>
    //   <Text>This is header</Text>
    //   <Text>{props.name}</Text>
    // </View>
  );
};

const styles = StyleSheet.create({
  header: {
    backgroundColor: 'pink',
    alignItems: 'center',
    padding: 5,
    width: '100%',
  },
});

export default Header;
