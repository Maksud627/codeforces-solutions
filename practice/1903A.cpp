#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin >> testcase;

    while(testcase--){
        int n, k;
        cin >> n >> k;

        bool isSorted = true;          // Bug 1 & 3 fix
        int prevVal = INT_MIN;         // Bug 1 & 2 fix

        while(n--){
            int x;
            cin >> x;
            if(x < prevVal) isSorted = false;  // Bug 3 fix: only set false
            prevVal = x;
        }

        if(k == 1){
            cout << (isSorted ? "YES" : "NO") << "\n";
        } else {
            cout << "YES\n";   // k >= 2 can always sort
        }
    }
    return 0;
}
