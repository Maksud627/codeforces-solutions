#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int minIdx = 0;
	int maxIdx = 0;

	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 1; i < a.size(); i++){
		if(a[i] <= a[minIdx]) minIdx = i;
		if(a[i] > a[maxIdx]) maxIdx = i;
	}

	if(minIdx != n - 1 || maxIdx != 0){
		if(minIdx < maxIdx){
			cout << n - 1 - minIdx + maxIdx - 1<< endl;
		}
		else cout << n - 1 - minIdx + maxIdx << endl;
	}
	else cout << 0 << endl;

	return 0;
}