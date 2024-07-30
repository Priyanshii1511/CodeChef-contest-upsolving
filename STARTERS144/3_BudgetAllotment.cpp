#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        long n, x;
        cin >> n >> x;
        long a[n];
        for(long i=0;i<n;i++) cin >> a[i];
        
        sort(a, a+n, greater<int>());
        
        long extra=0, ans=0;
        for(long i=0;i<n;i++){
            if(a[i]>=x){
                ans++;
                extra+=(a[i]-x);
            }
            else if(extra>=(x-a[i])){
                ans++;
                extra-=(x-a[i]);
            }
            else break;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
