#include<iostream>
#include <string>
#include"문제1.h"
using namespace std;

CStudent::CStudent() {}
CStudent::CStudent(string name, string ID, string major, string grade)
{
	name_ = name; ID_ = ID; major_ = major; grade_ = grade;
}
void CStudent::ShowData()
{
	cout << "이름: " << name_ << " 학번: " << ID_ << " 학과: " << major_ << " 학년: " << grade_ << endl;
}