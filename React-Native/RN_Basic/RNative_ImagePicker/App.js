/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {
  Platform,
  PermissionsAndroid,
  SafeAreaView,
  StyleSheet,
  ScrollView,
  View,
  Text,
  StatusBar,
  Image,
  Button,
  DrawerLayoutAndroidComponent,
} from 'react-native';
import ImagePicker from 'react-native-image-picker';
import Contacts from 'react-native-contacts';

class App extends Component {
  // state = {
  //   avatar: '',
  // };

  // addImage = () => {
  //   ImagePicker.showImagePicker(
  //     {
  //       title: 'Choose Your Photo',
  //       takePhotoButtonTitle: 'Take a Pretty One',
  //       chooseFromLibraryButtonTitle: 'Select an Old one',
  //       cancelButtonTitle: 'Just go back',
  //     },
  //     response => {
  //       this.setState({avatar: response.uri});
  //     },
  //   );
  // };

  state = {
    myContacts: [],
  };

  async requestContactPermission() {
    if (Platform.OS === 'ios') {
      console.warn('iOS');
      return true;
    } else {
      console.warn('Android');

      const granted = await PermissionsAndroid.requestMultiple([
        PermissionsAndroid.PERMISSIONS.WRITE_CONTACTS,
        PermissionsAndroid.PERMISSIONS.READ_CONTACTS,
      ]);
      if (
        granted['android.permission.READ_CONTACTS'] ===
          PermissionsAndroid.RESULTS.GRANTED &&
        granted['android.permission.WRITE_CONTACTS'] ===
          PermissionsAndroid.RESULTS.GRANTED
      ) {
        return true;
      } else {
        return false;
      }
    }
  }

  getContacts = () => {
    this.requestContactPermission().then(didGetPermission => {
      if (didGetPermission) {
        Contacts.getAll((err, contacts) => {
          if (err) {
            throw err;
          }
          this.setState({
            myContacts: contacts,
          });
        });
      } else {
        alert('no permission');
      }
    });
  };

  addContacts = () => {
    this.requestContactPermission().then(didGetPermission => {
      if (didGetPermission) {
        const newContact = {
          emailAddress: [
            {
              label: 'work',
              email: 'aaa@example.com',
            },
          ],
          familyName: 'Son',
          givenName: 'HeungMin',
          phoneNumbers: [
            {
              label: 'mobile',
              number: '(010) 1111-1111',
            },
          ],
        };
        Contacts.addContact(newContact, err => {
          if (err) {
            throw err;
          }
          this.getContacts();
        });
      } else {
        alert('no permission');
      }
    });
  };

  openForm = () => {
    const newContact = {
      emailAddress: [
        {
          label: 'work',
          email: 'aaa@example.com',
        },
      ],
      familyName: 'ccccc',
      givenName: 'ddddd',
      phoneNumbers: [
        {
          label: 'mobile',
          number: '(010) 1111-1111',
        },
      ],
    };
    Contacts.openContactForm(newContact, err => {
      if (err) console.warn(err);
    });
  };

  render() {
    return (
      <View style={styles.container}>
        {/* <Text>Hello</Text> */}
        {/* <Image source={{uri: this.state.avatar}} style={styles.avatar} /> */}
        {/* <Button title="Add an Image" onPress={() => this.addImage()} /> */}
        {this.state.myContacts.map((item, idx) => (
          <Text key={idx}>
            {item.givenName} {item.familyName}
          </Text>
        ))}
        <Button title="Load Contacts" onPress={() => this.getContacts()} />
        <Button title="Add Contacts" onPress={() => this.addContacts()} />
        <Button title="Open Form" onPress={() => this.openForm()} />
      </View>
    );
  }
}
const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#e4ab26',
  },
  avatar: {
    width: '100%',
    height: 400,
  },
});

export default App;
