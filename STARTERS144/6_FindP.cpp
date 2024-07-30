#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        long long n, l, r;
        cin >> n >> l >> r;

        long long sum=0, j=1;
        while(sum<l){
            sum+=j;
            if(sum<l) j++;
        }
        sum-=(l-1);

        int arr[n], k=0;
        for(int i=1;i<=j;i++){
            if(i!=sum) arr[k++]=i;
        }

        //greedy
        for(int i=n;i>=j;i--) arr[k++]=i;

        arr[n-1]=sum;

        for(int i=0;i<n;i++) cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}