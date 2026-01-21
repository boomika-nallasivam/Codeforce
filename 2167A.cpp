#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=0 ; i<n ; i++){
        int n1 , n2 , n3 , n4;
        cin >> n1 >> n2 >> n3 >> n4;
        if((n1 == n2) && (n2 == n3) && (n3 == n4)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
    
    
    return 0;
}
