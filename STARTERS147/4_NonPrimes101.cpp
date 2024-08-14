#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){ //checking for prime
    if(num==2 || num==3) return true;
    if(num%2==0 || num%3==0) return false;
    for(int i=5 ; i*i<=num ; i+=6){
        if(num%i==0 || num%(i+2)==0) return false;
    }
    return true;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int a[n];
        int e1=-1, e2=-1, o1=-1, o2=-1;
        for(int i=0;i<n;i++){
            cin >> a[i];
            
            //store first two even and odd numbers
            if(a[i]%2==0){ //even
                if(e1==-1) e1=i;
                else if(e2==-1) e2=i;
            }
            
            else{ //odd
                if(o1==-1) o1=i;
                else if(o2==-1 && (a[i]!=1 || a[o1]!=1)) o2=i; //do not store two 1's 
            }
        }
        
        //if there are two even numbers
        if(e1!=-1 && e2!=-1) cout << e1+1 << " " << e2+1 << endl;
        
        //or if there are two odd numbers
        //except for two 1's because they add up to 2, which is prime
        else if(o1!=-1 && o2!=-1) cout << o1+1 << " " << o2+1 << endl;
        
        //if there is one odd and one even number then check for their sum
        else if(e1!=-1 && o1!=-1){
            if(!isPrime(a[e1]+a[o1])) cout << e1+1 << " " << o1+1 << endl;
            else cout << -1 << endl;
        }
        
        //if the only two numbers were two 1's
        else cout << -1 << endl;
    }
    
    return 0;
}
