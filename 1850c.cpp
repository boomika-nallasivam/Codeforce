#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s = "";
    for(int t=0 ; t<n ; t++){
        vector<vector<char>> v(8, vector<char>(8));
        for(int i=0 ; i<8 ; i++){
            for(int j=0 ; j<8 ; j++){
                cin >> v[i][j];
                
                if(v[i][j] != '.'){
                    s+= v[i][j];
                }
            }
        }
        if(t!=n-1){
            s = s+" ";
        }
        
    }
    cout << s;
    return 0;
}


