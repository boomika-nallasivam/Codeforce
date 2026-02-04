#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    bool yn = false;

    while(t--) {
        string s;
        int n1 , n2;
        cin >>  s >> n1 >> n2 ;
        
        
        if(n1 >= 2400 && n1 <n2){
            yn = true;
        }
    }
     if(yn){
            cout << "YES";
            
    }else{
            cout << "NO";
    }
    return 0;
}
