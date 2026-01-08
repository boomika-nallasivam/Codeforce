#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int items1 = 0, cost1 = 0;
    int items2 = 0, cost2 = 0;

    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == 1) {
            items1 += b;
            cost1 += c;
        } else {
            items2 += b;
            cost2 += c;
        }
    }

    if(cost1 >= items1 * 5)
        cout << "LIVE\n";
    else
        cout << "DEAD\n";

    if(cost2 >= items2 * 5)
        cout << "LIVE\n";
    else
        cout << "DEAD\n";

    return 0;
}
