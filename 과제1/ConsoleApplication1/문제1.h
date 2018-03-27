#pragma once
#include<iostream>
#include <string>
using namespace std;
class CStudent
{
public:
	CStudent();
	CStudent(string name, string ID, string major, string grade);
	string name_;
	string ID_;
	string major_;
	string grade_;
	void ShowData();
};