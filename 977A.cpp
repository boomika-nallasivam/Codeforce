#include <iostream>
using namespace std;

int main() {
    int num , b;
    cin >> num >> b;
    for(int i=0 ; i<b ; i++){
        int n = num%10;
        if(n==0){
            num = num/10;
        }
        else{
            num-=1;
        }
    }
    cout << num << endl;
    return 0;
}
