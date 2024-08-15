#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int w[n], rs=0;
        for(int i=0;i<n;i++){
            cin >> w[i];
            rs+=w[i]; //sum of all walls' heights 
        }
        
        int ls=0, ans=0;
        for(int i=0;i<n;i++){
            ls+=w[i]; //adding in left sum
            rs-=w[i]; //subtracting from right sum
            
            if(w[i]==0){ 
                if(ls==rs) ans+=2; //can be pushed in both directions 
                else if(ls==rs+1 || ls+1==rs) ans+=1; //only in greater height direction
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
