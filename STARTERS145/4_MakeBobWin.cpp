#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        cout << min(n, 2-s[0]-s[n-1]+'0'+'0') << endl;
    }
    
    return 0;
}
