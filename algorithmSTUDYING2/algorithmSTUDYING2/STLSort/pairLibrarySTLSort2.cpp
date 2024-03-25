#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {

	if (a.second.first == b.second.first) {
		return a.second.second > b.second.second;
	}
	else {
		return a.second.first > b.second.first;
	}
}
int stl3Sorting(void) {

	vector < pair < string, pair<int, int>>> v;
	v.push_back(pair < string, pair<int, int>>("�迵��", pair<int, int>(89, 19960127)));
	v.push_back(pair < string, pair<int, int>>("��ī����", pair<int, int>(90, 19990127)));
	v.push_back(pair < string, pair<int, int>>("����", pair<int, int>(78, 19960303)));
	v.push_back(pair < string, pair<int, int>>("����", pair<int, int>(89, 19960124)));
	v.push_back(pair < string, pair<int, int>>("����", pair<int, int>(89, 19960126)));

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}
	return 0;
}
