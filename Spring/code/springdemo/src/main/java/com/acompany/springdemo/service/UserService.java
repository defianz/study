package com.acompany.springdemo.service;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.acompany.springdemo.dao.UserRepository;
import com.acompany.springdemo.model.User;

@Service
public interface UserService{
	
//	@Autowired
//	private UserRepository userRepository;
//	
//	public Map<String, String> getMessage(){
//		Map<String, String> res = new HashMap<>();
//		res.put("greet", "HelloWorld");
//		return res;
//	}

	public List<User> getAllUsers() throws Exception;
}
