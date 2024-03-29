#include <iostream>
#include <algorithm>

using namespace std;
//����
//�ټ��̴� ��Ÿ�� ���� ������ �ִ�.�׸��� ������ ��Ÿ�� ��� �ٸ� �ø��� ��ȣ�� ������ �ִ�.
//�ټ��̴� ��Ÿ�� ���� ã�Ƽ� ���� ����鿡�� �������ֱ� ���ؼ� ��Ÿ�� �ø��� ��ȣ ������� �����ϰ��� �Ѵ�.
//
//��� �ø��� ��ȣ�� ���ĺ� �빮��(A - Z)�� ����(0 - 9)�� �̷���� �ִ�.
//
//�ø����ȣ A�� �ø����ȣ B�� �տ� ���� ���� ������ ����.
//
//A�� B�� ���̰� �ٸ���, ª�� ���� ���� �´�.
//���� ���� ���̰� ���ٸ�, A�� ��� �ڸ����� �հ� B�� ��� �ڸ����� ���� ���ؼ� ���� ���� ������ ���� �����´�. (������ �͸� ���Ѵ�)
//���� 1, 2�� �� �������ε� ���� �� ������, ���������� ���Ѵ�.���ڰ� ���ĺ����� ���������� �۴�.
//�ø����� �־����� ��, �����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ��Ÿ�� ���� N�� �־�����.N�� 50���� �۰ų� ����.��° �ٺ��� N���� �ٿ� �ø��� ��ȣ�� �ϳ��� �־�����.
//�ø��� ��ȣ�� ���̴� �ִ� 50�̰�, ���ĺ� �빮�� �Ǵ� ���ڷθ� �̷���� �ִ�.�ø��� ��ȣ�� �ߺ����� �ʴ´�.
//
//���
//ù° �ٺ��� ���ʴ�� N���� �ٿ� ���ٿ� �ϳ��� �ø��� ��ȣ�� ������ ����� ����Ѵ�.
int number;
string dat[1000];
int sumA, sumB;

int getSum(string a) {
	int length = a.length(), sum = 0;
	for (int i = 0; i < length; i++) {
		// ������ ��쿡�� ����.
		if (a[i] - '0' <= 9 && a[i] - '0' >= 0) {
			sum += a[i] - '0';
		}
	}
	return sum;
}

bool compare(string A, string B) {
	if (A.length() < B.length()) {
		return 1;
	}
	else if (B.length() < A.length()) {
		return 0;
	} 
	else {
		int sumA = getSum(A);
		int sumB = getSum(B);
		if (sumA != sumB) {
			return sumA < sumB;
		}
		else {
			return A< B;
		}
	}
}

int baekAdv2(void) {
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> dat[i];
	}
	sort(dat, dat + number, compare);
	for (int i = 0; i < number; i++) {
		if (i > 0 && dat[i] == dat[i - 1]) {
			continue;
		}
		else {
			cout << dat[i] << '\n';
		}
	}
	return 0;
}