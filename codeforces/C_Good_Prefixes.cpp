#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int c = 0;
        int y = 0, z = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) z++;
            if (a[i] == 1) y++;
        }

        if (z == n) {
            cout << 1 << endl;
            continue;
        }

        if (y == n) {
            cout << 0 << endl;
            continue;
        }

        vector<int> pres(n, 0);
        pres[0] = a[0];
        for (int i = 1; i < n; i++) {
            pres[i] = pres[i-1] + a[i];
        }

        int i = 0;
        int f=0;
        while (i < n) {
            float h = pres[i] / 2.0;
            for (int j = 0; j <= i; j++) {

                if (h == a[j] ) c++;
                if(a[j]==)
            }
            i++;
        }

        cout << c << endl;
    }
    return 0;
}
