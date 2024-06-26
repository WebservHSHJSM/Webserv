#pragma once

#include "../total.hpp"

class Member;

class MemberRepository{
	private :
		std::vector<Member> member;
	public :
		MemberRepository();
		virtual ~MemberRepository();
		void addMember(std::string id, std::string password, std::string name);
		Member findById(std::string id);
		bool login(std::string id, std::string password);
		bool memberWithdrawal(std::string id, std::string password);
		void changeMember(std::string id, std::string password, std::string name);
		size_t getMemberSize();
		Member getNumMember(size_t i);
};