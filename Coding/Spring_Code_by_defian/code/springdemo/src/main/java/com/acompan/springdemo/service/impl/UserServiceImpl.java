package com.acompan.springdemo.service.impl;

import java.util.List;

import org.springframework.stereotype.Service;

import com.acompany.springdemo.model.User;
import com.acompany.springdemo.service.UserService;

@Service
public class UserServiceImpl implements UserService{
	
	
	@Resource(name= )
	
	@Override
	public List<User> getAllUsers(){
		return this.users;
	}
	
	public static List<User> users;
	public UserServifeImpl() {
		users = new ArrayList<User>();
		
	}
}
