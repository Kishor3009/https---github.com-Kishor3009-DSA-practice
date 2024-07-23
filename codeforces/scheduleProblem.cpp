#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n=s.size();
    int a = 0, b = 0, c = 0;
    for (char ch : s) {
        if (ch == 'a') a++;
        else if (ch == 'b') b++;
        else if (ch == 'c') c++;
    }

    int maxi = max(max(a,b),c);
    int v=maxi*3;
    cout<<v-n<<endl;


    return 0;
}
