#include <bits/stdc++.h>
using namespace std;

int maximizeProduct(int a, int b, int c, int k) {
    int arr[3] = {a, b, c};
    sort(arr, arr + 3); 
    for (int i = 0; i < k; ++i) {
        sort(arr, arr + 3);  
        arr[0]++;
    }
    return arr[0] * arr[1] * arr[2];
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int k = 5;  

    int result = maximizeProduct(a, b, c, k);
    cout << result << endl;
    }

    return 0;
}
