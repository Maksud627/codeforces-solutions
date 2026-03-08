#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> camelPos;
	vector<int> spitDis;
	while(n--){
		int x, d;
		cin >> x >> d;
		
		camelPos.push_back(x);
		spitDis.push_back(d);
	}

	for(int i = 0; i < camelPos.size(); i++){
		for(int j = 0; j < camelPos.size(); j++){
			if(i != j){
				if(camelPos[i] + spitDis[i] == camelPos[j] && camelPos[j] + spitDis[j] == camelPos[i]){
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}

	cout << "NO" << endl;

	return 0;
}