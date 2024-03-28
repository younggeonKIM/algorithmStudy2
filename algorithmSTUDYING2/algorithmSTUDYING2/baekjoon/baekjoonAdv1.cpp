#include <iostream>
#include <algorithm>

using namespace std;

//문제
//알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
//
//길이가 짧은 것부터
//길이가 같으면 사전 순으로
//단, 중복된 단어는 하나만 남기고 제거해야 한다.

//입력
//첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20, 000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다.주어지는 문자열의 길이는 50을 넘지 않는다.
//
//출력
//조건에 따라 정렬하여 단어들을 출력한다.

string a[20000];
int n;

bool compare(string a, string b) {
	// 길이가 짧은 순서대로 정렬하는 조건을 우선.
	if (a.length() < b.length()) {
		// 길이가 짧으면 우선순위가 더 높음.
		return 1;
	}
	else if (a.length() > b.length()) {
		// 길이가 더 길면 우선순위가 낮음.
		return 0;
	}
	// 길이가 같은 경우 
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