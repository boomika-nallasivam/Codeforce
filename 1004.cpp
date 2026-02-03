#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long d;

    cin >> n >> d;

    vector<long long> x(n);

    for(int i = 0; i < n; i++)
        cin >> x[i];

    int count = 2; 

    for(int i = 0; i < n - 1; i++) {
        long long gap = x[i+1] - x[i];

        if(gap == 2 * d)
            count += 1;
        else if(gap > 2 * d)
            count += 2;
    }

    cout << count;

    return 0;
}
