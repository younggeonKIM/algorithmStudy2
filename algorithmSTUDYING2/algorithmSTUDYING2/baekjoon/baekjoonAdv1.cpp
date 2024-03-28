#include <iostream>
#include <algorithm>

using namespace std;

//����
//���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� ���ǿ� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//���̰� ª�� �ͺ���
//���̰� ������ ���� ������
//��, �ߺ��� �ܾ�� �ϳ��� ����� �����ؾ� �Ѵ�.

//�Է�
//ù° �ٿ� �ܾ��� ���� N�� �־�����. (1 �� N �� 20, 000) ��° �ٺ��� N���� �ٿ� ���� ���ĺ� �ҹ��ڷ� �̷���� �ܾ �� �ٿ� �ϳ��� �־�����.�־����� ���ڿ��� ���̴� 50�� ���� �ʴ´�.
//
//���
//���ǿ� ���� �����Ͽ� �ܾ���� ����Ѵ�.

string a[20000];
int n;

bool compare(string a, string b) {
	// ���̰� ª�� ������� �����ϴ� ������ �켱.
	if (a.length() < b.length()) {
		// ���̰� ª���� �켱������ �� ����.
		return 1;
	}
	else if (a.length() > b.length()) {
		// ���̰� �� ��� �켱������ ����.
		return 0;
	}
	// ���̰� ���� ��� 
	else {
		return a < b;
	}
}

int baekAdv1(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, compare);
	for (int i = 0; i < n; i++) {
		if (i > 0 && a[i] == a[i - 1]) {
			continue;
		}
		else {
			cout << a[i] << '\n';
		}
	}
	return 0;
}