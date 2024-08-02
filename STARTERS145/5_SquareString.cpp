#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod=1e9+7;

ll expo(ll a, ll b, ll mod){ //to compute power while considering mod
    ll res=1;
    while(b>0){
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res%mod;
}

int main() {
	// your code goes here
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        
        ll ans=0;
        for(ll i=2;i<=n;i++){
            ll temp=1;
            
            temp*=expo(2, n-i, mod); 
            temp%=mod;
            
            temp*=(i-1);
            temp%=mod;
            temp*=(i-1);
            temp%=mod;
            
            temp*=(n-i+1);
            temp%=mod;
            
            ans+=temp;
        }
        ans*=2; //the answer for 0 will be the answer for 1 as well
        ans%=mod;
        
        cout << ans << endl;
    }
    
    return 0;
}
