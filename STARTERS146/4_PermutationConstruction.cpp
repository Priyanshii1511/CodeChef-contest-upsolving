#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        //alternating sequences
        if(n%2==0){ //for even
            int x=1, y=(n/2)+1;
            for(int i=0;i<n/2;i++){
                cout << x << " " << y << " ";
                x++;
                y++;
            }
        }
        
        else{ //for odd
            int x=1, y=(n/2)+2;
            for(int i=0;i<n/2;i++){
                cout << x << " " << y << " ";
                x++;
                y++;
            }
            cout << x;
        }
        
        cout << endl;
    }
    
    return 0;
}
