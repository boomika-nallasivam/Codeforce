#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int c=0, c1=0;
    for(int i=0 ; i<n ; i++){
        int a , b;
        cin >> a >> b;
        if(a<b) c1++;
        else if(a>b) c++;
    }
    if(c > c1) cout << "Mishka" << endl;
    else if(c < c1) cout << "Chris" << endl;
    else if(c == c1) cout << "Friendship is magic!^^" << endl;
    
    return 0;
}
