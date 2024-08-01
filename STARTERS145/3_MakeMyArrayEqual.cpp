#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        
        map<int, int> mp;
        for(int i=0;i<n;i++){
            if(a[i]!=0) mp[a[i]]++;
        }
        
        mp.size()==0 || mp.size()==1 ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    
    return 0;
}
