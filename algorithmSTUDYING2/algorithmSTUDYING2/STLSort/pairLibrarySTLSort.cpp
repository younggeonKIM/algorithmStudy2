#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int stl2Sorting(void) {
	vector<pair<int, string>> v;
	v.push_back(pair<int, string>(90, "����"));
	v.push_back(pair<int, string>(83, "����"));
	v.push_back(pair<int, string>(29, "����"));
	v.push_back(pair<int, string>(91, "ġ��"));
	v.push_back(pair<int, string>(100, "����"));
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' ';
	}

	return 0;
}