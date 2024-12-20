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
  bundledCode: "#line 1 \"src/graph/dijkstra.hpp\"\npair<vector<ll>, vector<int>>\
    \ Dijkstra(int s, const vector<vector<pair<int, int>>>& graph) {\n    int n =\
    \ graph.size();\n    vector<ll> dist(n, INF);      // \u6700\u77ED\u8DDD\u96E2\
    \n    vector<int> bef(n, -1);       // \u7D4C\u8DEF\u3092\u4FDD\u5B58\u3059\u308B\
    \u914D\u5217\n    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll,\
    \ int>>> hq; // \u512A\u5148\u5EA6\u4ED8\u304D\u30AD\u30E5\u30FC\n\n    dist[s]\
    \ = 0;\n    bef[s] = s;\n    hq.push({0, s});\n\n    while (!hq.empty()) {\n \
    \       ll c = hq.top().first;\n        int now = hq.top().second;\n        hq.pop();\n\
    \n        // \u73FE\u5728\u306E\u8DDD\u96E2\u304C\u3059\u3067\u306B\u6700\u77ED\
    \u8DDD\u96E2\u3088\u308A\u5927\u304D\u3051\u308C\u3070\u30B9\u30AD\u30C3\u30D7\
    \n        if (c > dist[now]) continue;\n\n        // \u96A3\u63A5\u30CE\u30FC\u30C9\
    \u3092\u66F4\u65B0\n        for (const auto& edge : graph[now]) {\n          \
    \  int to = edge.first;\n            ll cost = edge.second;\n            if (dist[now]\
    \ + cost < dist[to]) {\n                dist[to] = dist[now] + cost;\n       \
    \         bef[to] = now;\n                hq.push({dist[to], to});\n         \
    \   }\n        }\n    }\n\n    return {dist, bef};\n}\n\n// \u7D4C\u8DEF\u306E\
    \u5FA9\u5143\nvector<pair<int, int>> DijkstraRest(const vector<int>& bef, int\
    \ t) {\n    vector<pair<int, int>> ret;\n    int now = t;\n    while (bef[now]\
    \ != now) {\n        ret.push_back({bef[now], now});\n        now = bef[now];\n\
    \    }\n    reverse(ret.begin(), ret.end());\n    return ret;\n}\n"
  code: "pair<vector<ll>, vector<int>> Dijkstra(int s, const vector<vector<pair<int,\
    \ int>>>& graph) {\n    int n = graph.size();\n    vector<ll> dist(n, INF);  \
    \    // \u6700\u77ED\u8DDD\u96E2\n    vector<int> bef(n, -1);       // \u7D4C\u8DEF\
    \u3092\u4FDD\u5B58\u3059\u308B\u914D\u5217\n    priority_queue<pair<ll, int>,\
    \ vector<pair<ll, int>>, greater<pair<ll, int>>> hq; // \u512A\u5148\u5EA6\u4ED8\
    \u304D\u30AD\u30E5\u30FC\n\n    dist[s] = 0;\n    bef[s] = s;\n    hq.push({0,\
    \ s});\n\n    while (!hq.empty()) {\n        ll c = hq.top().first;\n        int\
    \ now = hq.top().second;\n        hq.pop();\n\n        // \u73FE\u5728\u306E\u8DDD\
    \u96E2\u304C\u3059\u3067\u306B\u6700\u77ED\u8DDD\u96E2\u3088\u308A\u5927\u304D\
    \u3051\u308C\u3070\u30B9\u30AD\u30C3\u30D7\n        if (c > dist[now]) continue;\n\
    \n        // \u96A3\u63A5\u30CE\u30FC\u30C9\u3092\u66F4\u65B0\n        for (const\
    \ auto& edge : graph[now]) {\n            int to = edge.first;\n            ll\
    \ cost = edge.second;\n            if (dist[now] + cost < dist[to]) {\n      \
    \          dist[to] = dist[now] + cost;\n                bef[to] = now;\n    \
    \            hq.push({dist[to], to});\n            }\n        }\n    }\n\n   \
    \ return {dist, bef};\n}\n\n// \u7D4C\u8DEF\u306E\u5FA9\u5143\nvector<pair<int,\
    \ int>> DijkstraRest(const vector<int>& bef, int t) {\n    vector<pair<int, int>>\
    \ ret;\n    int now = t;\n    while (bef[now] != now) {\n        ret.push_back({bef[now],\
    \ now});\n        now = bef[now];\n    }\n    reverse(ret.begin(), ret.end());\n\
    \    return ret;\n}"
  dependsOn: []
  isVerificationFile: false
  path: src/graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2024-12-20 09:56:26+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/graph/dijkstra.hpp
layout: document
redirect_from:
- /library/src/graph/dijkstra.hpp
- /library/src/graph/dijkstra.hpp.html
title: src/graph/dijkstra.hpp
---
