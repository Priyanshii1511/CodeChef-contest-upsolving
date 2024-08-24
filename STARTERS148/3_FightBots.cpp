#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, bx, by;
        cin >> n >> bx >> by;
        string s;
        cin >> s;
        
        int ax=0, ay=0;
        int flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R') ax++;
            else if(s[i]=='L') ax--;
            else if(s[i]=='U') ay++;
            else if(s[i]=='D') ay--;
            
            int d=abs(bx-ax) + abs(by-ay);
            
            if(d<=(i+1) && d%2==(i+1)%2){
                cout << "Yes" << endl;
                flag=1;
                break;
            }
        }
        
        if(!flag) cout << "No" << endl;
    }
    
    return 0;
}
