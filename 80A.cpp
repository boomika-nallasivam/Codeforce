#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m;
    cin >> n >> m;
    int c=0, c1=0;
    for(int i=1 ; i<=n ; i++){
        if(n%i==0) c++;
    }
    for(int i=1 ; i<=m ; i++){
        if(m%i==0) c1++;
    }
    if(c==2 && c1==2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
    
    return 0;
}
