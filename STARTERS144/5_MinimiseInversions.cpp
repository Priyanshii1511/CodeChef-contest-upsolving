#include <bits/stdc++.h>
using namespace std;

string find(int a, int b, string s){
    int cnta=0, cntb=0, n=s.length();

    for(int i=0;i<n && cnta<a;i++){
        if(s[i]=='1'){
            s[i]='0';
            cnta++;
        }
    }

    for(int i=n-1;i>=0 && cntb<b;i--){
        if(s[i]=='0'){
            s[i]='1';
            cntb++;
        }
    }

    return s;
}

int inversion(string s){
    int cnt=0, ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') cnt++;
        else ans+=cnt;
    }
    return ans;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int ans=INT_MAX;
        for(int i=0;i<=k;i++){
            int ones=i; //flip ones from the left
            int zeroes=k-i; //flip zeroes from the right
            string newString=find(ones, zeroes, s);

            int curr=inversion(newString);
            ans=min(ans, curr);
        }

        cout << ans << endl;
    }

    return 0;
}
