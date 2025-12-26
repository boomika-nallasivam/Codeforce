#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    
    for(int i=0 ; i<n ; i++){
       int num;
       cin >> num;
       int sum = 0;
       while(num!=0){
           
           int m = num%10;
           sum += m;
           num = num/10;
       }
       cout << sum << endl;
    }
    
    return 0;
}
