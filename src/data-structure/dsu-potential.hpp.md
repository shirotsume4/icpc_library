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
  bundledCode: "#line 1 \"src/data-structure/dsu-potential.hpp\"\nclass dsup{\nprivate:\n\
    \    ll N;\n    vector<ll>P;/*\u89AA\u30CE\u30FC\u30C9*/\n    vector<ll>S;/*\u9023\
    \u7D50\u6210\u5206\u306E\u30B5\u30A4\u30BA*/\n    vector<type>W;/*\u91CD\u307F\
    */\n    pair<ll,type> root(ll now){\n        if(now!=P[now]){\n            pair<ll,type>ret=root(P[now]);\n\
    \            P[now]=ret.first;\n            W[now]+=ret.second;\n        }\n \
    \       return {P[now],W[now]};\n    }\npublic:\n    /*1-indexed*/\n    dsup(ll\
    \ n){\n        N=n;\n        P=vector<ll>(N+1);\n        for(ll i=0;i<=N;i++)P[i]=i;\n\
    \        S=vector<ll>(N+1,1);\n        W=vector<type>(N+1,0);\n    }\n    /*a+w=b\u3068\
    \u3057\u3066\u9023\u7D50\u3059\u308B*/\n    bool merge(ll a,ll b,type w){\n  \
    \      root(a);root(b);\n        w+=W[a]-W[b];\n        a=P[a];b=P[b];\n     \
    \   if(a==b)return w==0;\n        if(S[a]<=S[b]){\n            P[b]=a;\n     \
    \       S[a]+=S[b];\n            W[b]=w;\n        }else{\n            P[a]=b;\n\
    \            S[b]+=S[a];\n            W[a]-=w;\n        }\n        return 1;\n\
    \    }\n    /*a,b\u306E\u9023\u7D50\u5224\u5B9A*/\n    bool same(ll a,ll b){\n\
    \        a=root(a).first;b=root(b).first;\n        return a==b; \n    }\n    /*a\u9023\
    \u7D50\u6210\u5206\u306Esize\u3092\u8FD4\u3059*/\n    ll size(ll a){return S[root(a).first];}\n\
    \    /*\u5168\u3066\u306E\u9023\u7D50\u6210\u5206\u3092\u5217\u6319(1-indexed)*/\n\
    \    vector<vector<ll>> groups(void){\n        map<ll,vector<ll>>m;\n        vector<vector<ll>>ret;\n\
    \        for(ll i=1;i<=N;i++)m[root(i).first].push_back(i);\n        for(auto\
    \ e:m)ret.push_back(e.second);\n        return ret;\n    }\n    /*id\u306Epotential\u3092\
    \u6C42\u3081\u308B*/\n    type get_p(ll id){return root(id).second;}\n};\n"
  code: "class dsup{\nprivate:\n    ll N;\n    vector<ll>P;/*\u89AA\u30CE\u30FC\u30C9\
    */\n    vector<ll>S;/*\u9023\u7D50\u6210\u5206\u306E\u30B5\u30A4\u30BA*/\n   \
    \ vector<type>W;/*\u91CD\u307F*/\n    pair<ll,type> root(ll now){\n        if(now!=P[now]){\n\
    \            pair<ll,type>ret=root(P[now]);\n            P[now]=ret.first;\n \
    \           W[now]+=ret.second;\n        }\n        return {P[now],W[now]};\n\
    \    }\npublic:\n    /*1-indexed*/\n    dsup(ll n){\n        N=n;\n        P=vector<ll>(N+1);\n\
    \        for(ll i=0;i<=N;i++)P[i]=i;\n        S=vector<ll>(N+1,1);\n        W=vector<type>(N+1,0);\n\
    \    }\n    /*a+w=b\u3068\u3057\u3066\u9023\u7D50\u3059\u308B*/\n    bool merge(ll\
    \ a,ll b,type w){\n        root(a);root(b);\n        w+=W[a]-W[b];\n        a=P[a];b=P[b];\n\
    \        if(a==b)return w==0;\n        if(S[a]<=S[b]){\n            P[b]=a;\n\
    \            S[a]+=S[b];\n            W[b]=w;\n        }else{\n            P[a]=b;\n\
    \            S[b]+=S[a];\n            W[a]-=w;\n        }\n        return 1;\n\
    \    }\n    /*a,b\u306E\u9023\u7D50\u5224\u5B9A*/\n    bool same(ll a,ll b){\n\
    \        a=root(a).first;b=root(b).first;\n        return a==b; \n    }\n    /*a\u9023\
    \u7D50\u6210\u5206\u306Esize\u3092\u8FD4\u3059*/\n    ll size(ll a){return S[root(a).first];}\n\
    \    /*\u5168\u3066\u306E\u9023\u7D50\u6210\u5206\u3092\u5217\u6319(1-indexed)*/\n\
    \    vector<vector<ll>> groups(void){\n        map<ll,vector<ll>>m;\n        vector<vector<ll>>ret;\n\
    \        for(ll i=1;i<=N;i++)m[root(i).first].push_back(i);\n        for(auto\
    \ e:m)ret.push_back(e.second);\n        return ret;\n    }\n    /*id\u306Epotential\u3092\
    \u6C42\u3081\u308B*/\n    type get_p(ll id){return root(id).second;}\n};"
  dependsOn: []
  isVerificationFile: false
  path: src/data-structure/dsu-potential.hpp
  requiredBy: []
  timestamp: '2024-12-20 09:56:26+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/data-structure/dsu-potential.hpp
layout: document
redirect_from:
- /library/src/data-structure/dsu-potential.hpp
- /library/src/data-structure/dsu-potential.hpp.html
title: src/data-structure/dsu-potential.hpp
---
