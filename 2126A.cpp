#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        
        int c = n;
        while(n!=0){
            int rem = n%10;
            c = min(c , rem);
            n=n/10;
        }
        cout << c << "\n";
    }
    return 0;
}
