/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {
  TextInput,
  View,
  Text,
  StyleSheet,
  ScrollView,
  Button,
  Image,
} from 'react-native';
import Header from './src/header';
import Generator from './src/generator';
import NumList from './src/numlist';
import Input from './src/input';
import Picker from './src/picker';
import Android from './assets/images/androidios.png';
import Modal from './src/modal';

class App extends Component {
  state = {
    appName: 'My First App',
    random: [36, 999],
    myTextInput: 'asdfasdf',
    alphabet: ['a', 'b', 'c', 'd'],
  };

  onChagneInput = event => {
    this.setState({
      myTextInput: event,
    });
  };

  onAddRandomNum = () => {
    const randomNum = Math.floor(Math.random() * 100 + 1);
    this.setState(prevState => {
      return {
        random: [...prevState.random, randomNum],
      };
    });
  };

  onNumDelete = position => {
    const newArray = this.state.random.filter((num, index) => {
      return position !== index;
    });
    this.setState({random: newArray});
  };

  onAddTextInput = () => {
    this.setState(prevState => ({
      myTextInput: '',
      alphabet: [...prevState.alphabet, prevState.myTextInput],
    }));
  };

  render() {
    return (
      <View style={styles.mainView}>
        <Modal />
        {/* <Image style={styles.image} source={Android} resizeMode="cover" /> */}
        {/* <Image
          style={styles.image}
          source={{uri: 'https://picsum.photos/id/237/200/300'}}
          resizeMode="contain"
          onLoadEnd={() => alert('Image Loaded')}
        /> */}
        <Picker />
        {/* <Header name={this.state.appName} />
        <View>
          <Text
            style={styles.mainText}
            onPress={() => alert('text Touch Event')}>
            Hello Wolrd
          </Text>
        </View>
        {/* <View style={styles.subView}>
          <Text style={styles.mainText}>Hello World!</Text>
        </View> */}
        {/* <Generator add={this.onAddRandomNum} />

        <ScrollView
          style={{width: '100%'}}
          // onMomentumScrollBegin={() => alert('begin')}
          // onScroll={() => alert('Scrolling')}
          // onContentSizeChange={(width, height) => alert(height)}
          bounces={false}>
          <NumList num={this.state.random} delete={this.onNumDelete} />
        </ScrollView> */}
        {/* <TextInput
          value={this.state.myTextInput}
          style={styles.input}
          onChangeText={this.onChagneInput}
          multiline={true}
          maxLength={100}
          autoCapitalize={'none'}
          editable={true}
        />
        <Button title="Add Text Input" onPress={this.onAddTextInput} />

        <ScrollView style={{width: '100%'}}>
          {this.state.alphabet.map((item, idx) => (
            <Text style={styles.mainText} key={idx}>
              {item}
            </Text>
          ))}
        </ScrollView> */}
      </View>
    );
  }
}

const styles = StyleSheet.create({
  mainView: {
    backgroundColor: 'white',
    // height: '100%',
    flex: 1,
    paddingTop: 50,
    alignItems: 'center',
    // justifyContent: 'center',
  },
  subView: {
    backgroundColor: 'red',
    marginBottom: 10,
  },
  anotherSubView: {
    flex: 2,
    backgroundColor: 'yellow',
    marginBottom: 10,
    width: '100%',
    alignItems: 'center',
    justifyContent: 'center',
  },
  mainText: {
    fontSize: 20,
    fontWeight: 'normal',
    color: 'blue',
    padding: 20,
    margin: 20,
    backgroundColor: 'pink',
  },
  input: {
    width: '100%',
    backgroundColor: '#cecece',
    marginTop: 20,
    fontSize: 25,
    padding: 10,
  },
  image: {
    backgroundColor: 'red',
    width: '100%',
    height: 700,
  },
});

export default App;
