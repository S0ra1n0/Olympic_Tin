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

int Recursive_Fibo(int n) {
    if (n < 0) {
        return -1;
    } elif (n == 0 || n == 1 || n == 2) {
        return n;
    } else {
        return Recursive_Fibo(n - 1) + Recursive_Fibo(n - 2);
    }
}

int Recursive_Lucas(int n) {
    if (n < 0) {
        return -1;
    } elif (n == 1) {
        return 1;
    } elif (n == 0) {
        return 2;
    } else {
        return Recursive_Lucas(n - 1) + Recursive_Lucas(n - 2);
    }
}

void simple_Dp_Fibo() {
    cout << "[simple_Dp_Fibo]" << el
    int n;
    cout << "Input the first n numbers in Fibo sequence: ";
    cin >> n;
    ll a[n];
    a[0] = 0;
    a[1] = 1;
    frs(i, 2, n) {
        a[i] = a[i-1] + a[i-2];
    }
    cout << "First " << n << " numbers of Fibo sequence: ";
    frs(i, 0, n) {
        cout << a[i] << " ";
    }
    cel
}

void simple_Dp_Lucas() {
    cout << "[simple_Dp_Lucas]" << el
    int n;
    cout << "Input the first n numbers in Lucas sequence: ";
    cin >> n;
    ll a[n];
    a[0] = 2;
    a[1] = 1;
    frs(i, 2, n) {
        a[i] = a[i-1] + a[i-2];
    }
    cout << "First " << n << " numbers of Lucas sequence: ";
    frs(i, 0, n) {
        cout << a[i] << " ";
    }
    cel
}

void advance_Dp_Fibo() {
    cout << "[advance_Dp_Fibo]" << el
    int n;
    cout << "Input the first n numbers in Fibo sequence: ";
    cin >> n;
    int i = 0, F = 1, last_F = 0;
    cout << "First " << n << " numbers of Fibo sequence: ";
    while (i < n) {
        if (i == 0) {cout << last_F << " "; ++i; continue;}
        elif (i == 1) {cout << F << " "; ++i; continue;}
        
        F += last_F;
        last_F = F - last_F;
        cout << F << " ";
        ++i;
    }
    cel
}

void advance_Dp_Lucas() {
    cout << "[advance_Dp_Lucas]" << el
    int n;
    cout << "Input the first n numbers in Lucas sequence: ";
    cin >> n;
    int i = 0, F = 1, last_F = 2;
    cout << "First " << n << " numbers of Lucas sequence: ";
    while (i < n) {
        if (i == 0) {cout << last_F << " "; ++i; continue;}
        elif (i == 1) {cout << F << " "; ++i; continue;}
        
        F += last_F;
        last_F = F - last_F;
        cout << F << " ";
        ++i;
    }
    cel
}

SORAI {
    //Sanic_speed
    /// a
    
    // (i)
    /*
    int f, l;
    cout << "[Recursive_Fibo]" << el
    cout << "Input the i-th number of Fibo sequence: ";
    cin >> f;
    cout << "The number in position " << f << " of the Fibo sequence is: ";
    cout << Recursive_Fibo(f) << el
    cout << "[Recursive_Lucas]" << el
    cout << "Input the i-th number of Lucas sequence: ";
    cin >> l;
    cout << "The number in position " << l << " of the Lucas sequence is: ";
    cout << Recursive_Lucas(l) << el
    // (ii)
    simple_Dp_Fibo();
    simple_Dp_Lucas();
    //(iii)
    advance_Dp_Fibo();
    advance_Dp_Lucas();
    */
    ///b
    
    
    ///c
    cout << "[Fixed Fibo and Lucas sequence with 2 const alpha(u0), beta(u1) and 2 const coefficient]" << el
    int a, b, alpha, beta, n;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input alpha: ";
    cin >> alpha;
    cout << "Input beta: ";
    cin >> beta;
    cout << "Input the first n numbers in Fixed sequence: ";
    cin >> n;
    cout << "First " << n << " numbers of Fixed sequence: ";
    int i = 0;
    while (i < n) {
        if (i == 0) {cout << alpha << " "; ++i; continue;}
        elif (i == 1) {cout << beta << " "; ++i; continue;}
        
        int temp = beta;
        beta = beta*a + b*alpha;
        alpha = temp;
        cout << beta << " ";
        ++i;
    }
    cel
}
/**
     /\__/\
    ( • 3• )
    / >♥️<\
**/
