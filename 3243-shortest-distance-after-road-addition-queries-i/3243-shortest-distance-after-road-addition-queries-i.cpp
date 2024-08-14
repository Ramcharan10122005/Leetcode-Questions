class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<pair<int, int>>> adj(n);
        for (int i = 0; i < n - 1; ++i) {
            adj[i].emplace_back(i + 1, 1); 
        }

        vector<int> result;
        auto dijkstra = [&](int start, int target) {
            vector<int> dist(n, INT_MAX);
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            pq.emplace(0, start);
            dist[start] = 0;

            while (!pq.empty()) {
                int u = pq.top().second;
                int d = pq.top().first;
                pq.pop();

                if (d > dist[u]) continue;

                for (auto& edge : adj[u]) {
                    int v = edge.first;
                    int weight = edge.second;
                    if (dist[u] + weight < dist[v]) {
                        dist[v] = dist[u] + weight;
                        pq.emplace(dist[v], v);
                    }
                }
            }

            return dist[target] == INT_MAX ? -1 : dist[target];
        };

        for (const auto& q : queries) {
            int u = q[0], v = q[1];
            adj[u].emplace_back(v, 1); 
            int shortest = dijkstra(0, n - 1);
            result.push_back(shortest);
        }

        return result;
    }
};
