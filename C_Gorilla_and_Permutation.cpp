#include <iostream>
#include <vector>

using namespace std;

void constructPermutation(int n, int m, int k) {
    vector<int> permutation;
    
    for (int i = k; i <= n; ++i) {
        permutation.push_back(i);
    }
    for (int i = m + 1; i < k; ++i) {
        permutation.push_back(i);
    }
    for (int i = 1; i <= m; ++i) {
        permutation.push_back(i);
    }

    // Print the permutation
    for (int i = 0; i < n; ++i) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
    
        constructPermutation(n, m, k);
    }
    
    
    return 0;
}
