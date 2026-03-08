#include<bits/stdc++.h>
using namespace std;

int main(){
	int count = 0;
	int n, d;
	cin >> n >> d;

	vector<int> soldierHeights(n);
	for(int i = 0; i < n; i++){
		cin >> soldierHeights[i];
	}

	for(int i = 0; i < soldierHeights.size(); i++){
		for(int j = i+1; j < soldierHeights.size(); j++){
			if(abs(soldierHeights[i] - soldierHeights[j]) <= d) count++;
		}
	}

	cout << count*2 << endl;
	return 0;
}