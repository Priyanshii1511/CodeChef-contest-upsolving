#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    
    int cuboid=a*b*c;
    int cube=x*x*x;
    
    if(cuboid>cube) cout << "Cuboid";
    else if(cuboid<cube) cout << "Cube";
    else cout << "Equal";
    
    return 0;
}