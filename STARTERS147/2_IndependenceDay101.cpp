#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int o, w, g;
        cin >> o >> w >> g;
        
        if(o>w+g+1 || w>o+g+1 || g>o+w+1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}
