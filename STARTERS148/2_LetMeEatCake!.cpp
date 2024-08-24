#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        
        int ans=0;
        while(a!=b){
            if(a>b){
                ans+=(ceil(a/2.0));
                a-=(ceil(a/2.0));
            }
            else{
                ans+=(ceil(b/2.0));
                b-=(ceil(b/2.0));
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
