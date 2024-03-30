#include <iostream>
#include <algorithm>

using namespace std;

//문제
//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 수의 개수 N(1 ≤ N ≤ 10, 000, 000)이 주어진다.둘째 줄부터 N개의 줄에는 수가 주어진다.이 수는 10, 000보다 작거나 같은 자연수이다.
//
//출력
//첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

//int N;
//int dat[10000000];
//
//int a[10000];
//
//int baekAdv3(void) {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> dat[i];
//	}
//	for (int i = 0; i < 10000; i++) {
//		a[i] = 0;
//	}
//	for (int i = 0; i < N; i++) {
//		if (dat[i] <= 10000) {
//			a[dat[i] - 1]++;
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (a[i] == 0) {
//			continue;
//		}
//		else {
//			for (int j = 0; j < a[i]; j++) {
//
//				cout << i+1 << '\n';
//			}
//		}
//	}
//	return 0;
	int N;
	int a[10001];

	int baekAdv3(void) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			int dat;
			cin >> dat;
			a[dat-1]++;
		}



		for (int i = 0; i < N; i++) {
			while (a[i] != 0) {
				cout << i+1 << '\n';
				a[i]--;
			}
		}
		return 0;
	}
