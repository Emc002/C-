class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int, vector<int>> adj;
        for (const auto& edge : edges) {
            adj[edge[0]].emplace_back(edge[1]);
            adj[edge[1]].emplace_back(edge[0]);
        }
        return bfs(adj, start, end);
    }

private:
    bool bfs(const unordered_map<int, vector<int>>& adj,
               const int start,
               const int target) {
        queue<int> q;
        unordered_set<int> lookup;
        q.push(start);
        while (!q.empty()) {
            auto pos = q.front(); q.pop();
            if (pos == target) {
                return true;
            }
            if (!adj.count(pos)) {
                continue;
            }
            for (const auto& nei : adj.at(pos)) {
                if (lookup.count(nei)) {
                    continue;
                }
                lookup.emplace(nei);
                q.push(nei);
            }
        }
        return false;
    }
};