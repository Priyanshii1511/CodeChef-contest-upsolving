#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        
        int total=x*y, ans=0;
        while(total){
            if(total<=z) break;
            else ans++;
            
            total-=y;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}