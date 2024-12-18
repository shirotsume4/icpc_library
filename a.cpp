
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define ov4(a, b, c, d, name, ...) name
#define rep3(i, a, b, c) for(ll i = (a); i < (b); i += (c))
#define rep2(i, a, b) rep3(i, a, b, 1)
#define rep1(i, n) rep2(i, 0, n)
#define rep0(n) rep1(aaaaa, n)
#define rep(...) ov4(__VA_ARGS__, rep3, rep2, rep1, rep0)(__VA_ARGS__)
#define per(i, a, b) for(ll i = (a)-1; i >= (b); i--)
#define fore(e, v) for(auto&& e : v)
#define all(a) begin(a), end(a)
#define si(a) (int)(size(a))
#define lb(v, x) (lower_bound(all(v), x) - begin(v))
#define eb emplace_back

template<typename T, typename S> bool chmin(T& a, const S& b) { return a > b ? a = b, 1 : 0; }
template<typename T, typename S> bool chmax(T& a, const S& b) { return a < b ? a = b, 1 : 0; }

const int INF = 1e9 + 100;
const ll INFL = 3e18 + 100;

#define i128 __int128_t

struct _ {
   _() { cin.tie(0)->sync_with_stdio(0), cout.tie(0); }
} __;

// monotone 行列の各行について、最小値を取る場所とその値を返す
template<typename T, typename F> vector<pair<int, T>> monotone_minima(int h, int w, const F& f) {
   vector<pair<int, T>> dp(h, pair(-1, T()));
   auto rec = [&](auto&& rec, int u, int d, int l, int r) {
      if(u > d) return;
      int mid = u + d >> 1;
      auto& [idx, mi] = dp[mid];
      idx = l, mi = f(mid, l);
      rep(i, l + 1, r + 1) if(chmin(mi, f(mid, i))) idx = i;
      rec(rec, u, mid - 1, l, idx);
      rec(rec, mid + 1, d, idx, r);
   };
   rec(rec, 0, h - 1, 0, w - 1);
   return dp;
}

int main(){
    int n, m;
    cin >> n, m;
    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    auto f = [&](int i, int j) { return a[i] + b[j]; };
}