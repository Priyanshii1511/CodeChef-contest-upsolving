#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int truth, doubt;
        cin >> truth >> doubt;
        
        if(truth>doubt) cout << doubt*2 +1 << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}
