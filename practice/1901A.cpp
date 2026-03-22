#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, x;
		cin >> n >> x;

		vector<int> a(n);
		int maxDiff = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(i == 0) maxDiff = a[i];
			else maxDiff = max(maxDiff, a[i] - a[i-1]);
		}

		maxDiff = max(maxDiff, 2 * (x - a[n-1]));

		cout << maxDiff << endl;
	}

	return 0;
}