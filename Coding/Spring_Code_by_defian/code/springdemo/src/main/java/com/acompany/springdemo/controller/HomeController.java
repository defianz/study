package com.acompany.springdemo.controller;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import java.util.Map;
import java.util.HashMap;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.acompany.springdemo.service.UserService;


@RestController
@RequestMapping("/")
public class HomeController {
	
	@Autowired
	private UserService userService;
	
	@GetMapping("")
	public Map <String, String> home() {
		Map<String,String> res = this.userService.getMessage();
		return res;
	}

}
