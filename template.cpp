#include <bits/stdc++.h>
using namespace std;

/* =======================
   🧠 Type Aliases
   ======================= */
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;

using pii = pair<int,int>;
using pll = pair<ll,ll>;

template<typename T>
using vec = vector<T>;

/* =======================
   ⚡ Fast IO
   ======================= */
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

/* =======================
   📌 Constants
   ======================= */
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

/* =======================
   🔧 Utility Macros
   ======================= */
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

/* =======================
   🛠 Debug (disable for submission)
   ======================= */
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

/* =======================
   🧮 Common Functions
   ======================= */

// Modular exponentiation
ll modpow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// GCD (C++17 has std::gcd)
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

// LCM
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

/* =======================
   🎯 Solve Function
   ======================= */
void solve() {
    // Your solution here
}

/* =======================
   🚀 Main
   ======================= */
int main() {
    fastio();

    int t = 1;
    cin >> t;   // comment this line if single test case

    while (t--) {
        solve();
    }

    return 0;
}