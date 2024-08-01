#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    int a[n];
	    for(int i=0;i<n;i++) cin >> a[i];
	    
	    bool close=true;
	    int ans=0;
	    
	    for(int i=0;i<n;i++){
	        if(a[i]<=d && close) continue;
	        else if(a[i]>d && !close) continue;
	        close=!close;
	        ans++;
	    }
	    
	    cout << ans << endl;
	}
	
	return 0;
}
