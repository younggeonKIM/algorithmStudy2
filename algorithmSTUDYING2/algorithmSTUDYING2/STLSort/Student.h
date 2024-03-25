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


//Student students[] = {
//		Student("김영건", 90),
//		Student("사토", 81),
//		Student("나영", 91),
//		Student("종명", 60),
//		Student("영민", 92)
//};
//sort(students, students + 5);
//for (int i = 0; i < 5; i++) {
//	cout << students[i].name << ' ';
//}

