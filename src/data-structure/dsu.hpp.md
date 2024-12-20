---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/data-structure/dsu.hpp\"\n\nclass unionfind {\n   private:\n\
    \   ll N;\n   vector<ll> P;\n   vector<ll> S;\n   ll root(ll now) {\n      if(now\
    \ != P[now]) P[now] = root(P[now]);\n      return P[now];\n   }\n\n   public:\n\
    \   /*1-indexed*/\n   unionfind(ll n) {\n      N = n;\n      P = vector<ll>(N\
    \ + 1);\n      for(ll i = 1; i <= N; i++) P[i] = i;\n      S = vector<ll>(N +\
    \ 1, 1);\n   }\n   /*a,b\u3092\u9023\u7D50\u3059\u308B*/\n   void merge(ll a,\
    \ ll b) {\n      a = root(a);\n      b = root(b);\n      if(S[a] <= S[b]) {\n\
    \         P[b] = a;\n         S[a] += S[b];\n      } else {\n         P[a] = b;\n\
    \         S[b] += S[a];\n      }\n   }\n   /*a,b\u306E\u9023\u7D50\u5224\u5B9A\
    */\n   bool same(ll a, ll b) {\n      a = root(a);\n      b = root(b);\n     \
    \ return a == b;\n   }\n   /*a\u9023\u7D50\u6210\u5206\u306Esize\u3092\u8FD4\u3059\
    */\n   ll size(ll a) { return S[root(a)]; }\n   /*\u5168\u3066\u306E\u9023\u7D50\
    \u6210\u5206\u3092\u5217\u6319*/\n   vector<vector<ll>> groups(void) {\n     \
    \ map<ll, vector<ll>> m;\n      vector<vector<ll>> ret;\n      for(ll i = 1; i\
    \ <= N; i++) m[root(i)].push_back(i);\n      for(auto e : m) ret.push_back(e.second);\n\
    \      return ret;\n   }\n};\n"
  code: "\nclass unionfind {\n   private:\n   ll N;\n   vector<ll> P;\n   vector<ll>\
    \ S;\n   ll root(ll now) {\n      if(now != P[now]) P[now] = root(P[now]);\n \
    \     return P[now];\n   }\n\n   public:\n   /*1-indexed*/\n   unionfind(ll n)\
    \ {\n      N = n;\n      P = vector<ll>(N + 1);\n      for(ll i = 1; i <= N; i++)\
    \ P[i] = i;\n      S = vector<ll>(N + 1, 1);\n   }\n   /*a,b\u3092\u9023\u7D50\
    \u3059\u308B*/\n   void merge(ll a, ll b) {\n      a = root(a);\n      b = root(b);\n\
    \      if(S[a] <= S[b]) {\n         P[b] = a;\n         S[a] += S[b];\n      }\
    \ else {\n         P[a] = b;\n         S[b] += S[a];\n      }\n   }\n   /*a,b\u306E\
    \u9023\u7D50\u5224\u5B9A*/\n   bool same(ll a, ll b) {\n      a = root(a);\n \
    \     b = root(b);\n      return a == b;\n   }\n   /*a\u9023\u7D50\u6210\u5206\
    \u306Esize\u3092\u8FD4\u3059*/\n   ll size(ll a) { return S[root(a)]; }\n   /*\u5168\
    \u3066\u306E\u9023\u7D50\u6210\u5206\u3092\u5217\u6319*/\n   vector<vector<ll>>\
    \ groups(void) {\n      map<ll, vector<ll>> m;\n      vector<vector<ll>> ret;\n\
    \      for(ll i = 1; i <= N; i++) m[root(i)].push_back(i);\n      for(auto e :\
    \ m) ret.push_back(e.second);\n      return ret;\n   }\n};"
  dependsOn: []
  isVerificationFile: false
  path: src/data-structure/dsu.hpp
  requiredBy: []
  timestamp: '2024-12-20 00:57:51+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/data-structure/dsu.hpp
layout: document
redirect_from:
- /library/src/data-structure/dsu.hpp
- /library/src/data-structure/dsu.hpp.html
title: src/data-structure/dsu.hpp
---
