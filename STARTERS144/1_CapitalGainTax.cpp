#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x, y;
    cin >> x >> y;

    if(x>y) cout << "DECREASED";
    else if(x<y) cout << "INCREASED";
    else cout << "SAME";
    
    return 0;
}