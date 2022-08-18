#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debug.h"
#endif

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

const int M = 1e9 + 7;

ll mod(ll x) { return ((x % M + M) % M);}
ll sum_mod(ll x, ll y ) { return ((x % M) + (y % M)) % M;}
ll diff_mod(ll x, ll y ) { return ((x % M) - (y % M) + M) % M;}
ll mul_mod(ll x, ll y) { return ((x % M) * (y % M)) % M;}
ll gcd (ll x , ll y) {
    //logN
    if (y == 0) return x;
    return gcd(y, x % y);
}




void dfile() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

}



void solve() {


}

int main() {
    dfile();
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}