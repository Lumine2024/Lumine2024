#ifndef LUMINE2024_HPP
#define LUMINE2024_HPP
#include <iostream>
#include <Windows.h>
class Lumine2024{
private:
	Lumine2024(){
		std::cout<<"Hello, I'm Lumine2024, and I am"<<age<<"years old.\nWelcome to visit my homepage. You can give me some suggestions, and you may ask me some questions as well as you want.\nnThanks for your subscription!";
	}
public:
	Lumine2024(const Lumine2024& other)=delete;
	Lumine2024(Lumine2024&& other)=delete;
	Lumine2024& operator=(const Lumine2024& other) = delete;
	static int age;
	const SYSTEMTIME BirthDate({2005,8,16,12,11,16,343});
	void UpdateAge(){
		SYSTEMTIME t;
		GetLocalTime(&t);
		age=t.wYear-BirthDate.wYear;
	}
};
int Lumine2024::age=19;
#endif //lumine2024.hpp
