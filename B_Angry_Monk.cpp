#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> pi(k);
        for (int i = 0; i < k; ++i) {
            cin >> pi[i];
        }
        sort(pi.begin(),pi.end());
        int op=0;
        for(int i=0;i<pi.size()-1;i++){
            op+=pi[i]+(pi[i]-1);
        }
        cout <<op<< endl;
    }

    return 0;
}
