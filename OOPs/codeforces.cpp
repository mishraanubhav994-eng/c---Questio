#include <iostream>
#include <algorithm>

using namespace std;

typedef __int128_t int128;

long long get_gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long extended_gcd(long long a, long long b, long long &x, long long &y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    long long x1, y1;
    long long g = extended_gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return g;
}

void solve() {
    long long L, p, q, du, dv;
    if (!(cin >> L >> p >> q >> du >> dv)) return;

    int128 rhs = (int128)p * dv - (int128)q * du;
    if (rhs % L != 0) {
        cout << -1 << "\n";
        return;
    }

    long long t_val = (long long)(rhs / L);
    long long g = get_gcd(du, dv);

    if (t_val % g != 0) {
        cout << -1 << "\n";
        return;
    }

    long long a = dv / g;
    long long b = du / g;
    long long target = t_val / g;

    long long k0, m0_neg;
    extended_gcd(a, b, k0, m0_neg);

    int128 k = (int128)k0 * target;
    int128 m = -(int128)m0_neg * target;

    int128 dk = (1 - k + b - 1) / b;
    if (1 - k <= 0) dk = (1 - k) / b;
    
    int128 dm = (1 - m + a - 1) / a;
    if (1 - m <= 0) dm = (1 - m) / a;

    int128 n = max(dk, dm);
    k += n * b;
    m += n * a;

    while (k % 2 != 0 && m % 2 != 0) {
        k += b;
        m += a;
    }

    long long res_k = (long long)k;
    long long res_m = (long long)m;

    long long ans = (res_k - 1) + (res_m - 1) + (res_k + res_m) / 2;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}