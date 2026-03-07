#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;

	cin >> n >> m;

	unordered_set<int> bulbChecker;

	while(n--){
		int bulbCount;
		cin >> bulbCount;

		while(bulbCount--){
			int y;
			cin >> y;
			bulbChecker.insert(y);
		}
	}

	cout << (bulbChecker.size() == m ? "YES" : "NO") << endl; 

	return 0;
}