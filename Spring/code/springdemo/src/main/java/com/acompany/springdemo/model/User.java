package com.acompany.springdemo.model;



/**
 * @author salmon
 *
 */
public class User {
	private Integer userid;
	private String username;
	
	public User(int userid, String username) {
		// TODO Auto-generated constructor stub
		this.userid= userid;
		this.username = username;
	}

	public Integer getUserid() {
		return userid;
	}
	
	public void setUserid(Integer userid) {
		this.userid = userid;
	}
	
	public String getUsername() {
		return username;
	}
	
	public void setUsername(String username) {
		this.username = username;
	}

	@Override
	public String toString() {
		return "User [userid=" + userid + ", username=" + username + "]";
	}
	
	
	
}
