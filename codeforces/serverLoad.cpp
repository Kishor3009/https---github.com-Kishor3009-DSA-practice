#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (ll i=a; i<b; i++)
#define per(i, a, b) for (ll i=a; i>=(b); i--)
#define pb push_back
#define all(a,n) vector<ll>a(n); for(ll j=0;j<n;j++) cin>>a[j];
#define out(a,n) for(ll i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
#define full(a) a.begin(),a.end()
#define rfull(a) a.rbegin(),a.rend()

vector<ll> optimiseSum(vector<ll> &capacity, vector<ll> &load, ll n) {
    vector<pair<ll, ll>> capacity_with_index(n);
    for (ll i = 0; i < n; i++)capacity_with_index[i] = {capacity[i], i};
    sort(capacity_with_index.begin(), capacity_with_index.end());
    sort(load.begin(), load.end(), greater<ll>());
    vector<ll> rearranged_load(n);
    for (ll i = 0; i < n; i++) {
        rearranged_load[capacity_with_index[i].second] = load[i];
    }
    return rearranged_load;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> capacity(n), load(n);
    for (ll i = 0; i < n; i++) {
        cin >> capacity[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> load[i];
    }

    vector<ll> optimalLoad = optimiseSum(capacity, load, n);
    ll totalConsumption = 0;
    vector<ll>mul(n);
    map<ll,vector<ll>>x;
    rep(i,0,n){
        x[capacity[i]].push_back(optimalLoad[i]);
    }
    for (ll i = 0; i < n; i++) {
        totalConsumption += (capacity[i]*optimalLoad[i]);
        vector<ll>c=x[capacity[i]];
        optimalLoad[i]=c[c.size()-1];
        x[capacity[i]].pop_back();
    }
    for (auto it : optimalLoad) {
        cout << it << " ";
    }
    cout << endl;
    cout << totalConsumption << endl;

    return 0;
}