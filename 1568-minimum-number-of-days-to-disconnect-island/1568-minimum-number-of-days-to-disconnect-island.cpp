class Solution
{
public:
    void dfs(vector<vector<int>> &grid, int row, int col, vector<vector<int>> &vis, int delRow[], int delCol[])
    {
        int n = grid.size();
        int m = grid[0].size();

        vis[row][col] = 1;

        for (int i = 0; i < 4; i++)
        {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && grid[nRow][nCol] == 1 && !vis[nRow][nCol])
            {
                dfs(grid, nRow, nCol, vis, delRow, delCol);
            }
        }
    }

    int num_of_island(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
       
        // Direction vectors (Up, Left, Down, Right)
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, -1, 0, 1};

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int islands = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1 && !vis[i][j])
                {
                    islands++;
                    dfs(grid, i, j, vis, delRow, delCol); 
                }
            }
        }

        return islands;
    }

    int minDays(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        // Find the initial number of islands
        int initialNumber = num_of_island(grid);

        // If the initialNumber != 1
        if (initialNumber == 0 || initialNumber > 1)
        {
            return 0; 
        }


        // Now for every sub-grid check if after removing changing 1 to 0 you can disconnect the islands.
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    
                    grid[i][j] = 0; // Change the value to zero 
                    
                    int newNumber = num_of_island(grid); // Find the new number of islands
                    
                    grid[i][j] = 1; // Convert it back to 1

                    if (newNumber != 1)
                    {
                        return 1; // If you can do it in 1 move 
                    }
                }
            }
        }

        return 2; // Anyways it is ultimatly possible in 2 moves 
    }
};