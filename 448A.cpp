#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3;
    int b1, b2, b3;
    int n;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int totalCups = a1 + a2 + a3;
    int totalMedals = b1 + b2 + b3;

    int shelvesForCups = (totalCups + 4) / 5;
    int shelvesForMedals = (totalMedals + 9) / 10;

    if (shelvesForCups + shelvesForMedals <= n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
