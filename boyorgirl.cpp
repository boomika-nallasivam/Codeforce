#include <bits/stdc++.h>
using namespace std;
int main(){
    string c;
    cin >> c;
    set<char> st(c.begin() , c.end());
    if(st.size() % 2 ==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}