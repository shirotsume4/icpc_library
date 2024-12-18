---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"a.cpp\"\n\n#include <bits/stdc++.h>\nusing namespace std;\n\
    #define ll long long\n#define pii pair<int, int>\n#define pll pair<ll, ll>\n#define\
    \ vi vector<int>\n#define vl vector<ll>\n#define ov4(a, b, c, d, name, ...) name\n\
    #define rep3(i, a, b, c) for(ll i = (a); i < (b); i += (c))\n#define rep2(i, a,\
    \ b) rep3(i, a, b, 1)\n#define rep1(i, n) rep2(i, 0, n)\n#define rep0(n) rep1(aaaaa,\
    \ n)\n#define rep(...) ov4(__VA_ARGS__, rep3, rep2, rep1, rep0)(__VA_ARGS__)\n\
    #define per(i, a, b) for(ll i = (a)-1; i >= (b); i--)\n#define fore(e, v) for(auto&&\
    \ e : v)\n#define all(a) begin(a), end(a)\n#define si(a) (int)(size(a))\n#define\
    \ lb(v, x) (lower_bound(all(v), x) - begin(v))\n#define eb emplace_back\n\ntemplate<typename\
    \ T, typename S> bool chmin(T& a, const S& b) { return a > b ? a = b, 1 : 0; }\n\
    template<typename T, typename S> bool chmax(T& a, const S& b) { return a < b ?\
    \ a = b, 1 : 0; }\n\nconst int INF = 1e9 + 100;\nconst ll INFL = 3e18 + 100;\n\
    \n#define i128 __int128_t\n\nstruct _ {\n   _() { cin.tie(0)->sync_with_stdio(0),\
    \ cout.tie(0); }\n} __;\n\n// monotone \u884C\u5217\u306E\u5404\u884C\u306B\u3064\
    \u3044\u3066\u3001\u6700\u5C0F\u5024\u3092\u53D6\u308B\u5834\u6240\u3068\u305D\
    \u306E\u5024\u3092\u8FD4\u3059\ntemplate<typename T, typename F> vector<pair<int,\
    \ T>> monotone_minima(int h, int w, const F& f) {\n   vector<pair<int, T>> dp(h,\
    \ pair(-1, T()));\n   auto rec = [&](auto&& rec, int u, int d, int l, int r) {\n\
    \      if(u > d) return;\n      int mid = u + d >> 1;\n      auto& [idx, mi] =\
    \ dp[mid];\n      idx = l, mi = f(mid, l);\n      rep(i, l + 1, r + 1) if(chmin(mi,\
    \ f(mid, i))) idx = i;\n      rec(rec, u, mid - 1, l, idx);\n      rec(rec, mid\
    \ + 1, d, idx, r);\n   };\n   rec(rec, 0, h - 1, 0, w - 1);\n   return dp;\n}\n\
    \nint main(){\n    int n, m;\n    cin >> n, m;\n    vector<ll> a(n), b(m);\n \
    \   rep(i, n) cin >> a[i];\n    rep(i, m) cin >> b[i];\n    auto f = [&](int i,\
    \ int j) { return a[i] + b[j]; };\n}\n"
  code: "\n#include <bits/stdc++.h>\nusing namespace std;\n#define ll long long\n\
    #define pii pair<int, int>\n#define pll pair<ll, ll>\n#define vi vector<int>\n\
    #define vl vector<ll>\n#define ov4(a, b, c, d, name, ...) name\n#define rep3(i,\
    \ a, b, c) for(ll i = (a); i < (b); i += (c))\n#define rep2(i, a, b) rep3(i, a,\
    \ b, 1)\n#define rep1(i, n) rep2(i, 0, n)\n#define rep0(n) rep1(aaaaa, n)\n#define\
    \ rep(...) ov4(__VA_ARGS__, rep3, rep2, rep1, rep0)(__VA_ARGS__)\n#define per(i,\
    \ a, b) for(ll i = (a)-1; i >= (b); i--)\n#define fore(e, v) for(auto&& e : v)\n\
    #define all(a) begin(a), end(a)\n#define si(a) (int)(size(a))\n#define lb(v, x)\
    \ (lower_bound(all(v), x) - begin(v))\n#define eb emplace_back\n\ntemplate<typename\
    \ T, typename S> bool chmin(T& a, const S& b) { return a > b ? a = b, 1 : 0; }\n\
    template<typename T, typename S> bool chmax(T& a, const S& b) { return a < b ?\
    \ a = b, 1 : 0; }\n\nconst int INF = 1e9 + 100;\nconst ll INFL = 3e18 + 100;\n\
    \n#define i128 __int128_t\n\nstruct _ {\n   _() { cin.tie(0)->sync_with_stdio(0),\
    \ cout.tie(0); }\n} __;\n\n// monotone \u884C\u5217\u306E\u5404\u884C\u306B\u3064\
    \u3044\u3066\u3001\u6700\u5C0F\u5024\u3092\u53D6\u308B\u5834\u6240\u3068\u305D\
    \u306E\u5024\u3092\u8FD4\u3059\ntemplate<typename T, typename F> vector<pair<int,\
    \ T>> monotone_minima(int h, int w, const F& f) {\n   vector<pair<int, T>> dp(h,\
    \ pair(-1, T()));\n   auto rec = [&](auto&& rec, int u, int d, int l, int r) {\n\
    \      if(u > d) return;\n      int mid = u + d >> 1;\n      auto& [idx, mi] =\
    \ dp[mid];\n      idx = l, mi = f(mid, l);\n      rep(i, l + 1, r + 1) if(chmin(mi,\
    \ f(mid, i))) idx = i;\n      rec(rec, u, mid - 1, l, idx);\n      rec(rec, mid\
    \ + 1, d, idx, r);\n   };\n   rec(rec, 0, h - 1, 0, w - 1);\n   return dp;\n}\n\
    \nint main(){\n    int n, m;\n    cin >> n, m;\n    vector<ll> a(n), b(m);\n \
    \   rep(i, n) cin >> a[i];\n    rep(i, m) cin >> b[i];\n    auto f = [&](int i,\
    \ int j) { return a[i] + b[j]; };\n}"
  dependsOn: []
  isVerificationFile: false
  path: a.cpp
  requiredBy: []
  timestamp: '2024-12-18 17:19:58+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: a.cpp
layout: document
redirect_from:
- /library/a.cpp
- /library/a.cpp.html
title: a.cpp
---
