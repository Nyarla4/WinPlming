#include<iostream>
#include <string>
#include"����1.h"
using namespace std;

CStudent::CStudent() {}
CStudent::CStudent(string name, string ID, string major, string grade)
{
	name_ = name; ID_ = ID; major_ = major; grade_ = grade;
}
void CStudent::ShowData()
{
	cout << "�̸�: " << name_ << " �й�: " << ID_ << " �а�: " << major_ << " �г�: " << grade_ << endl;
}