#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n ;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i] ;
    }
    
    int min1 = *min_element(v.begin(),v.end());
    int max1 = *max_element(v.begin(),v.end());
    int mi , ma;
    for(int i=0 ; i<n ; i++){
        if(v[i]==max1){
            ma = i;
            break;
        }
    }
    for(int i=n-1 ; i>=0 ; i--){
        if(v[i]==min1){
            mi = i;
            break;
        }
    }
    int count = ma+(n-1-mi);
    if(ma>mi){
        count--;
    }
    cout << count << endl;
    
    
    
    return 0;
}
