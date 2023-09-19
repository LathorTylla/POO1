#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person();
	~Person();

	string getName()
	{
		return nombre;
	}

	int getAge()
	{
		return edad;
	}

	void setName(string name);


	void setAge(int age);
	
private:

	string nombre;
	int edad;
};
