#pragma once
#include<iostream>
using namespace std;


struct Teacher {
	char* fullname;
	char* speciality;
	int age;
	int id;
};

struct Director {
	char* fullname;
	char* speciality;
	int age;
	int id;
};

struct Student {

	char* fullname;
	int age;
	int count;
	int id;

};

struct Group {
	char* title;
	char* occupation;
	
	Student** students;
};

struct Academy {
	Director** directors;
	Group** groups;
	Teacher** teachers;
};

