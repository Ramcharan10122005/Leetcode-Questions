class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0, y = 0, d = 0, res = 0;
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; 
        unordered_map<int, unordered_map<int, bool>> obstacleMap;
        for (const auto& obs : obstacles) {
            obstacleMap[obs[0]][obs[1]] = true;
        }

        for (int c : commands) {
            if (c == -1) {
                d = (d + 1) % 4;
            } else if (c == -2) {
                d = (d + 3) % 4;  
            } else {
                int dx = directions[d].first;
                int dy = directions[d].second;
                for (int i = 0; i < c; ++i) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (obstacleMap.find(nx) != obstacleMap.end() && obstacleMap[nx].find(ny) != obstacleMap[nx].end()) {
                        break;
                    }
                    x = nx;
                    y = ny;
                    res = max(res, x * x + y * y);
                }
            }
        }
        return res;
    }
};
