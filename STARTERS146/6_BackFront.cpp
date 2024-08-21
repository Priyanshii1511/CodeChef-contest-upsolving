#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int k=0, ck=0, ack=0, back=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='k') k++;
            
            else if(s[i]=='c' && k){
                ck++;
                k--;
            }
            
            else if(s[i]=='a' && ck){
                ack++;
                ck--;
            }
            
            else if(s[i]=='b' && ack){
                back++;
                ack--;
            }
        }
        
        int f=0, fr=0, fro=0, fron=0, front=0;
        for(int i=0;i<n;i++){
            if(s[i]=='f') f++;
            
            else if(s[i]=='r' && f){
                fr++;
                f--;
            }
            
            else if(s[i]=='o' && fr){
                fro++;
                fr--;
            }
            
            else if(s[i]=='n' && fro){
                fron++;
                fro--;
            }
            
            else if(s[i]=='t' && fron){
                front++;
                fron--;
            }
        }
        
        int ans=n, toAdd=0;
        while(back){
            back--;
            ans-=4;
            toAdd++;
            
            if(toAdd && ack){
                toAdd--;
                ack--;
                back++;
                ans++;
            }
            
            else if(toAdd>=2 && ck){
                toAdd-=2;
                ck--;
                back++;
                ans+=2;
            }
            
            else if(toAdd>=3 && k){
                toAdd-=3;
                k--;
                back++;
                ans+=3;
            }
            
            else if(toAdd>=4){
                toAdd-=4;
                back++;
                ans+=4;
            }
        }
        ans+=toAdd;
        
        toAdd=0;
        while(front){
            front--;
            ans-=5;
            toAdd++;
            
            if(toAdd && fron){
                toAdd--;
                fron--;
                front++;
                ans++;
            }
            
            else if(toAdd>=2 && fro){
                toAdd-=2;
                fro--;
                front++;
                ans+=2;
            }
            
            else if(toAdd>=3 && fr){
                toAdd-=3;
                fr--;
                front++;
                ans+=3;
            }
            
            else if(toAdd>=4 && f){
                toAdd-=4;
                f--;
                front++;
                ans+=4;
            }
            
            else if(toAdd>=5){
                toAdd-=5;
                front++;
                ans+=5;
            }
        }
        ans+=toAdd;
        
        cout << ans << endl;
    }
    
    return 0;
}
