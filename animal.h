#pragma once
#include <string>
using namespace std;

class Animal
{
public:
	Animal();
	~Animal(){}

	virtual string Name() = 0;
	virtual string Type() = 0;
	virtual string Class() = 0;
	virtual string Famly() = 0;

};

class Dog:public Animal
{
public:

	Dog(const string &name_, const string &type_, const string &class_, const string &famly_)
		:name_("Rex"), type_("pets"), class_("mammals"), famly_("dog family"){}
	~Dog(){}

	string Name();
	string Type();
	string Class();
	string Famly();

private:

	string name_;
	string type_;
	string class_;
	string famly_;
};

class Cat: public Animal
{
public:

	Cat(const string &name_, const string &type_, const string &class_, const string &famly_)
		:name_("Mimi"), type_("pets"), class_("mammals"), famly_("cat famly"){}
	~Cat(){}

	string Name();
	string Type();
	string Class();
	string Famly();

private:

	string name_;
	string type_;
	string class_;
	string famly_;
};

class Lion:public Animal
{
public:

	Lion(const string &name_, const string &type_, const string &class_, const string &famly_)
		:name_("Simba"), type_("pets"), class_("mammals"), famly_("cat famly") {}
	~Lion(){}

	string Name();
	string Type();
	string Class();
	string Famly();

private:

	string name_;
	string type_;
	string class_;
	string famly_;
};