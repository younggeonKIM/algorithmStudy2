#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int stl2Sorting(void) {
	vector<pair<int, string>> v;
	v.push_back(pair<int, string>(90, "영건"));
	v.push_back(pair<int, string>(83, "메이"));
	v.push_back(pair<int, string>(29, "수연"));
	v.push_back(pair<int, string>(91, "치연"));
	v.push_back(pair<int, string>(100, "예람"));
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' ';
	}

	return 0;
}