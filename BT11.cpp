#include<bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define Sanic_speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Ret return 0;
#define ret return;
#define all(x) x.begin(), x.end()
#define el "\n";
#define elif else if
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define pops pop_back
#define cYES cout << "YES" << "\n";
#define cNO cout << "NO" << "\n";
#define cYes cout << "Yes" << "\n";
#define cNo cout << "No" << "\n";
#define cel cout << "\n";
#define frs(i, a, b) for(int i = a; i < b; ++i)
#define fre(i, a, b) for(int i = a; i <= b; ++i)
#define wh(t) while (t--)
#define SORAI int main()
using namespace std;
typedef unsigned long long ull;

const int M = 1000000007;

void solve() {
    ll ans = 0, n, k, i = 1;
    cin >> n >> k;
    deque<ll> a;
    a.pf(n);
    a.pf(0);
    while (i <= k) {
        for (int j = 1; j <= i; ++j) {
            a[0] += a[j]*j;
            a[0] %= M;
        }
        a.pf(0);
        ++i;
    }
    fre(j, 1, i) {
        ans += a[j];
        ans %= M;
    }
    cout << ans << el
}

SORAI {
    Sanic_speed
    int t; cin >> t;
    wh(t) {solve();}
}
/**
     /\__/\
    ( • 3• )
    / >♥️<\
**/
