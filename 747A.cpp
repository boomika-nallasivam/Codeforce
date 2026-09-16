#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = sqrt((double)n);
    while (a > 0 && n % a != 0) a--;
    if (a == 0) a = 1;
    cout << a << " " << n / a << endl;
    return 0;
}
