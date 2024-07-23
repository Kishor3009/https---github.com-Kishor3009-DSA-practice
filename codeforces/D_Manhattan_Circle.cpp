#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));  // Use char to store elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        vector<pair<int, int>> mp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '#') mp.push_back({i+1, j+1});
            }
        }

        int size = mp.size();
        if(size==1){
            cout << mp[0].first << " " << mp[0].second << endl;
        }
        else {
            int middle_index = size / 2;  
            cout << mp[middle_index].first << " " << mp[middle_index].second << endl;
        }
    }
    return 0;
}
