package com.acompany.springdemo.controller;

import com.acompany.springdemo.model.User;
import com.acompany.springdemo.service.UserService;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/users")
public class UserController {
	
	@Autowired
	private UserService userService;
	
	@GetMapping("")
	public List<User> getAllUsers() throws Exception{
		return userService.getAllUsers();
	}
	
	@GetMapping("/userid")
	public User getUserByUserid(Integer userid) {
		return userService.getUserById(userid);
	}
	
	@PostMapping("")
	public User registUser() {
		User user= TODO();
		userService.registUser(user);
	}
	
	@PutMapping("/userid")
	public void modifyUser(String userid) {
		User user = TODO();
		userService.modifyUser(userid,user);
	}
	
	@DeleteMapping("/userid")
	public void removeUser(String userid) {
		userService.removeUser(userid);
	}
	
}
