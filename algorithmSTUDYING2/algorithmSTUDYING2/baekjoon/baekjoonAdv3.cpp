#include <iostream>
#include <algorithm>

using namespace std;

//����
//N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ���� ���� N(1 �� N �� 10, 000, 000)�� �־�����.��° �ٺ��� N���� �ٿ��� ���� �־�����.�� ���� 10, 000���� �۰ų� ���� �ڿ����̴�.
//
//���
//ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.

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
