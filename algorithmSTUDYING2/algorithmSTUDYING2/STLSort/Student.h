#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;

	}
	// ���� ������ '������ ���� ����'
	bool operator <(Student &student) {
		return this->score < student.score;
	}
};


//Student students[] = {
//		Student("�迵��", 90),
//		Student("����", 81),
//		Student("����", 91),
//		Student("����", 60),
//		Student("����", 92)
//};
//sort(students, students + 5);
//for (int i = 0; i < 5; i++) {
//	cout << students[i].name << ' ';
//}

