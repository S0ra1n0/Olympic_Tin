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
    int n;
    cin >> n;
    int a[n], val[n];
    frs(i, 0, n) {cin >> a[i]; val[i] = 0;}
    int q;
    cin >> q;
    frs(i, 1, n) {
        frs(j, 0, i) {
            val[j] = max(a[i] - a[j], val[j]);
        }
    }
    int psum_val[n+1];
    psum_val[0] = 0;
    fre(i, 1, n) {
        psum_val[i] = val[i-1] + psum_val[i-1];    
    }
    wh(q) {
        int d;
        cin >> d;
        d--;
        ll ans = psum_val[n] - psum_val[d];
        cout << ans << el
    }
}

SORAI {
    Sanic_speed
    int t = 1;// cin >> t;
    wh(t) {solve();}
}
/**
     /\__/\
    ( • 3• )
    / >♥️<\
**/
