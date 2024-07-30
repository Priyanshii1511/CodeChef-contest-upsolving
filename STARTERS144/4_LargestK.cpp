#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++) mp[a[i]]++;
        
        vector<int> freq;
        for(auto i:mp) freq.push_back(i.second);
        
        sort(freq.begin(), freq.end(), greater<int>());
        
        long long ans=0, curr=0;
        for(int i=1;i<=freq.size();i++){
            curr+=freq[i-1];
            ans=max(ans, (curr/i)*i);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
