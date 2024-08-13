#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int s[16];
        unordered_map<int, int> pos;
        for(int i=0;i<16;i++){
            cin >> s[i];
            pos[s[i]]=i;
        }
        
        sort(s, s+16);
        
        vector<int> ans(16);
        for(int i=0;i<16;i++){
            if(i<1) ans[pos[s[i]]]=0;
            else if(i<3) ans[pos[s[i]]]=1;
            else if(i<7) ans[pos[s[i]]]=2;
            else if(i<15) ans[pos[s[i]]]=3;
            else ans[pos[s[i]]]=4;
        }
        
        for(int i=0;i<16;i++) cout << ans[i] << " ";
        cout << endl;
    }
    
    return 0;
}
