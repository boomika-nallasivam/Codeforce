#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i=0 ; i<t ; i++){
        string s;
        cin >> s;
        
        int sum = (s[0]-'0')+(s[1]-'0')+(s[2]-'0');
        
        int sum1 = (s[3]-'0')+(s[4]-'0')+(s[5]-'0');
        
        if(sum == sum1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
