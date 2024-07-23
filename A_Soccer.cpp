#include <iostream>
#include <vector>
using namespace std;

bool isPossible(long long x1,long long y1,long long x2,long long y2) {
    if (x1 > y1) {
        return (x2 - x1) >= (y2 - y1);
    } 
    else if (y1 > x1) {
        return (y2 - y1) >= (x2 - x1);
    }
    return false; 
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (isPossible(x1, y1, x2, y2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
