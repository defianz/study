
package com.acompany.springdemo.dao;
import com.acompany.springdemo.model.User;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.stereotype.Repository;

@Repository
public class UserRepository {
	
	public static List<User> users;
	
	static {
		users = new ArrayList<>();
		users.add(new User(100, "Kim"));
		users.add(new User(200, "lee"));
		users.add(new User( 300, "choi"));
		users.add(new User( 400, "park"));
		users.add(new User( 500, "kwon"));
		users.add(new User( 600, "hwang"));
	}
	public Map<String,String> getMessage(){
		Map<String,String> res = new HashMap<>();
		res.put("greet","HelloWorld");
		return res;
	}
	
	public List<User> getAllUser(){
		System.out.println("사용자 전체보기::repository..");
		return users;
	}
	
	public User getUserByUserid(Integer userid) {
		System.out.println("사용자 상세보기::repository..");
		return users.stream().filter(user->user.getUserid()==userid)
				.findAny()
				.orElse(new User(0,"no user"));
	}
	
	public User insertUser(User user) {
		System.out.println("사용자 등록 :: repository..");
		
		users.add(user);
		return user;
	}
	
	public void updateUser(User user) {
		System.out.println("사용자 수정::repository");
		users.stream().filter(item->item.getUserid() == user.getUserid())
		.findAny().orElse(new User(0, "no User")).setUsername(user.getUsername());
	}
	
	public void deleteUser(Integer userid) {
		System.out.println("사용자 삭제::repository");
		users.removeIf(user -> user.getUserid() == userid);
	}
}
