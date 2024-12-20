pair<vector<ll>, vector<int>> Dijkstra(int s, const vector<vector<pair<int, int>>>& graph) {
    int n = graph.size();
    vector<ll> dist(n, INF);      // 最短距離
    vector<int> bef(n, -1);       // 経路を保存する配列
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> hq; // 優先度付きキュー

    dist[s] = 0;
    bef[s] = s;
    hq.push({0, s});

    while (!hq.empty()) {
        ll c = hq.top().first;
        int now = hq.top().second;
        hq.pop();

        // 現在の距離がすでに最短距離より大きければスキップ
        if (c > dist[now]) continue;

        // 隣接ノードを更新
        for (const auto& edge : graph[now]) {
            int to = edge.first;
            ll cost = edge.second;
            if (dist[now] + cost < dist[to]) {
                dist[to] = dist[now] + cost;
                bef[to] = now;
                hq.push({dist[to], to});
            }
        }
    }

    return {dist, bef};
}

// 経路の復元
vector<pair<int, int>> DijkstraRest(const vector<int>& bef, int t) {
    vector<pair<int, int>> ret;
    int now = t;
    while (bef[now] != now) {
        ret.push_back({bef[now], now});
        now = bef[now];
    }
    reverse(ret.begin(), ret.end());
    return ret;
}