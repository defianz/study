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
import {NavigationContainer} from '@react-navigation/native';
import {createStackNavigator} from '@react-navigation/stack';
import {createBottomTabNavigator} from '@react-navigation/bottom-tabs';
import {
  createDrawerNavigator,
  DrawerContentScrollView,
  DrawerItemList,
  DrawerItem,
} from '@react-navigation/drawer';

import LogoTitle from './src/logo';

import HomeScreen from './src/home';
import UserScreen from './src/user';

import DrawerHomeScreen from './src/home_drawer';
import DrawerUserScreen from './src/user_drawer';
import {Linking} from 'react-native';
import PictogramHome from './src/assets/pics/home_icon.png';
import SideDrawer from './src/my_drawer';

import TabHomeScreen from './src/home_tab';
import TabUserScreen from './src/user_tab';
import TabMessageScreen from './src/message_tab';

import PictogramUser from './src/assets/pics/user.png';
import PictogramMessage from './src/assets/pics/message.png';

const Stack = createStackNavigator();
const Drawer = createDrawerNavigator();
const Tab = createBottomTabNavigator();

const TabBarIcon = (focused, name) => {
  let iconImagePath;

  if (name === 'Home') {
    iconImagePath = PictogramHome;
  } else if (name === 'User') {
    iconImagePath = PictogramUser;
  } else if (name === 'Message') {
    iconImagePath = PictogramMessage;
  }

  return (
    <Image
      style={{width: focused ? 24 : 20, height: focused ? 24 : 20}}
      source={iconImagePath}
    />
  );
};

// CustomDrawerContent = props => {
//   return (
//     <DrawerContentScrollView {...props}>
//       <DrawerItemList {...props} />
//       <DrawerItem
//         label="Help"
//         onPress={() => Linking.openURL('http://www.google.com')}
//         icon={() => <LogoTitle />}
//       />
//       <DrawerItem label="Info" onPress={() => alert('Info Window')} />
//     </DrawerContentScrollView>
//   );
// };

class App extends Component {
  // logoTitle = () => {
  //   return (
  //     <Image
  //       style={{width: 40, height: 40}}
  //       source={require('./src/assets/pics/home_icon.png')}
  //     />
  //   );
  // };

  render() {
    return (
      <NavigationContainer>
        <Tab.Navigator
          initialRouteName="Home"
          tabBarOptions={{
            activeBackgroundColor: 'skyblue',
            activeTintColor: 'blue',
            inactiveTintColor: '#fff',
            style: {
              backgroundColor: '#c6cbef',
            },
            labelPosition: 'below-icon', // beside-icon
          }}
          screenOptions={({route}) => ({
            tabBarLabel: route.name,
            tabBarIcon: ({focused}) => TabBarIcon(focused, route.name),
          })}>
          <Tab.Screen name="Home" component={TabHomeScreen} />
          <Tab.Screen name="User" component={TabUserScreen} />
          <Tab.Screen name="Message" component={TabMessageScreen} />
        </Tab.Navigator>
      </NavigationContainer>

      // <NavigationContainer>
      //   <Drawer.Navigator
      //     initialRouteName="Home"
      //     drawerType="front"
      //     drawerPosition="right"
      //     drawerStyle={{
      //       backgroundColor: '#c6cbef',
      //       width: 200,
      //     }}
      //     drawerContentOptions={{
      //       activeTintColor: 'red',
      //       activeBackgroundColor: 'skyblue',
      //     }}
      //     drawerContent={props => <SideDrawer {...props} />}>
      //     <Drawer.Screen
      //       name="Home"
      //       component={DrawerHomeScreen}
      //       options={{
      //         drawerIcon: () => (
      //           <Image source={PictogramHome} style={{width: 40, height: 40}} />
      //         ),
      //       }}
      //     />
      //     <Drawer.Screen name="User" component={DrawerUserScreen} />
      //   </Drawer.Navigator>
      // </NavigationContainer>

      // <NavigationContainer>
      //   <Stack.Navigator
      //     initialRouteName="Home"
      //     screenOptions={{
      //       headerStyle: {
      //         backgroundColor: '#a4511e',
      //       },
      //       headerTintColor: '#fff',
      //       headerTitleStyle: {
      //         fontWeight: 'bold',
      //         color: '#f3d612',
      //       },
      //     }}>
      //     <Stack.Screen
      //       name="Home"
      //       component={HomeScreen}
      //       options={{
      //         title: 'Home Screen',
      //         headerTitle: <LogoTitle />,
      //         headerRight: () => (
      //           <Button
      //             title="Info"
      //             onPress={() => alert('hi')}
      //             color="orange"
      //           />
      //         ),
      //       }}
      //     />
      //     <Stack.Screen
      //       name="User"
      //       component={UserScreen}
      //       initialParams={{
      //         userIdx: 50,
      //         userName: 'Gildong',
      //         userLastName: 'Go',
      //       }}
      //       options={{
      //         title: 'User Screen',
      //         headerStyle: {
      //           backgroundColor: 'pink',
      //         },
      //         headerTintColor: 'red',
      //         headerTitleStyle: {
      //           fontWeight: 'bold',
      //           color: 'purple',
      //         },
      //       }}
      //     />
      //   </Stack.Navigator>
      // </NavigationContainer>
    );
  }
}

export default App;
