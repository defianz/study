/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {
  SafeAreaView,
  StyleSheet,
  ScrollView,
  View,
  Text,
  StatusBar,
  Animated,
  Easing,
  Button,
} from 'react-native';

class AnimOne extends Component {
  constructor() {
    super();
    this.state = {
      mySquare: new Animated.Value(1),
    };
  }

  runAnimation = () => {
    // Animated.spring(this.mySquare, {
    Animated.timing(this.state.mySquare, {
      toValue: 0,
      duration: 2000,
      delay: 1500,
      //   easing: Easing.elastic(3),
    }).start();
  };

  render() {
    return (
      <View>
        <Animated.View
          style={
            {
              opacity: this.state.mySquare,
              transform: [
                {
                  rotateX: this.state.mySquare.interpolate({
                    inputRange: [0, 0.5, 1],
                    outputRange: ['0deg', '180deg', '360deg'],
                  }),
                },
                {
                  translateX: this.state.mySquare.interpolate({
                    inputRange: [0, 0.5, 1],
                    outputRange: [300, 150, 0],
                  }),
                },
              ],
              //   top: this.state.mySquare.interpolate({
              //     inputRange: [0, 1],
              //     outputRange: [700, 0],
              //   }),
            }
            // {left: this.mySquare.x, top: this.mySquare.y}
            // {this.state.mySquare.getLayout()} //
          }>
          <View style={styles.square} />
        </Animated.View>
        <Animated.Text
          style={{
            fontSize: this.state.mySquare.interpolate({
              inputRange: [0, 0.5, 1],
              outputRange: [40, 30, 20],
            }),
            color: this.state.mySquare.interpolate({
              inputRange: [0, 0.5, 1],
              outputRange: ['red', 'green', 'blue'],
            }),
          }}>
          <Text>Animated Effects</Text>
        </Animated.Text>
        <Button title="Animation Start" onPress={this.runAnimation} />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  square: {
    width: 100,
    height: 100,
    backgroundColor: 'skyblue',
  },
});

export default AnimOne;
