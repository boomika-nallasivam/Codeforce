#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n1 , n2 , n3;
    cin >> n1 >> n2 >> n3;
    
    int mi = min({n1,n2,n3});
    int ma = max({n1,n2,n3});
    cout << ma - mi;
    
    
    
    return 0;
}
