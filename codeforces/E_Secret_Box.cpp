#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, z;
        long long k;
        cin >> x >> y >> z >> k;

        int max_positions = 0;
        for (int a = 1; a <= x; ++a) {
            if (k % a != 0) continue; 
            long long remaining = k / a;
            for (int b = 1; b <= y; ++b) {
                if (remaining % b != 0) continue; 
                long long c = remaining / b;
                if (c <= z) { 
                    int positions = (x - a + 1) * (y - b + 1) * (z - c + 1);
                    max_positions = max(max_positions, positions);
                }
            }
        }
        
        cout << max_positions << endl;
    }
    
    return 0;
}
