#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool valid = true;

	vector<string> paper;

	while(n--){
		string letters;
		cin >> letters;

		paper.push_back(letters);
	}

	char diagonalChar = paper[0][0];
	char nondiagChar = paper[0][1];

	n = paper.size();

	if(diagonalChar == nondiagChar) valid = false;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j || i+j == n - 1){
				if(paper[i][j] != diagonalChar) valid = false;
			}
			else {
				if(paper[i][j] != nondiagChar) valid = false;
			}
		}
	}

	cout << (valid ? "YES" : "NO") << endl;


	return 0;
}