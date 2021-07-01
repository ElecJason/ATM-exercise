#pragma once
#include <string>
class Person
{
public:
	Person(std::string aName, std::string aLastName);
	~Person();

	void SetName(std::string aName);
	void SetLastName(std::string aLastName);

	std::string GetName();
	std::string GetLastName();
private:
	std::string name;
	std::string lastName;
};

