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
	// 정렬 기준은 '점수가 작은 순서'
	bool operator <(Student &student) {
		return this->score < student.score;
	}
};

