#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        map<int, int> pos;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(pos.find(a[i])==pos.end()) pos[a[i]]=i;
        }
        
        int ans=0;
        for(int i=1;i<=50;i++){
            if(pos.find(i)==pos.end()) continue;
            
            int ind=pos[i], sum=0;
            priority_queue<int, vector<int>, greater<int>> pq;
            for(int j=ind+1;j<n;j++){
                if(pq.size()==k-2) ans=max(ans, i+a[j]+sum);
                
                pq.push(a[j]);
                sum+=(2*a[j]);
                if(pq.size()>k-2){
                    sum-=(2*pq.top());
                    pq.pop();
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
