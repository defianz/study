import React, { Fragment, Component } from 'react';
import PhoneList from './Components/PhoneList'
import Phone from './page/Phone';
import Home from './page/Home';
import { BrowserRouter, Route, NavLink } from 'react-router-dom';

import { Layout, Menu, Icon } from 'antd';
const { Header, Content, Footer, Sider } = Layout;


class App extends Component {

  render() {
    return (
      <BrowserRouter>
        <Fragment >
          <Layout>
            <Sider
              breakpoint="lg"
              collapsedWidth="0"
              onBreakpoint={broken => {
                console.log(broken);
              }}
              onCollapse={(collapsed, type) => {
                console.log(collapsed, type);
              }}
            >
              <div className="logo" />
              <Menu theme="dark" mode="inline" defaultSelectedKeys={['1']}>
                <Menu.Item key="1">
                  <NavLink to={'/'}>
                    <Icon type="user" />
                    Home
                  </NavLink>
                </Menu.Item>
                <Menu.Item key="2">
                  <NavLink to={'/Phone'}>
                    <Icon type="video-camera" />
                    Phone
                  </NavLink>
                </Menu.Item>
              </Menu>
            </Sider>
            <Layout>
              <Header style={{ background: '#fff', padding: 0 }} />
              <Content style={{
                margin: '24px 16px 0',
                minHeight: '800px'
              }}>
                <Route exact path="/" component={Home} />
                <Route path="/Phone" component={Phone} />
              </Content>
              <Footer style={{ textAlign: 'center' }}>hyungchul Design ©2019 Created by 김형철</Footer>
            </Layout>
          </Layout>
        </Fragment>
      </BrowserRouter>
    );
  }
}

export default App;
