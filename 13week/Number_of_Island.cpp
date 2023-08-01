#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void DFS(vector<vector<char>>& grid, int i, int j) {
        int iGS = grid.size();
        int iGS0 = grid[0].size();
        if (i >= 0 && i < iGS && j >= 0 && j < iGS0 && grid[i][j] == '1') 
        {
            grid[i][j] = 0;
            DFS(grid, i - 1, j); //상
            DFS(grid, i + 1, j); //하
            DFS(grid, i, j - 1); //좌
            DFS(grid, i, j + 1); //우
        }
        else
            return;

    };
    int numIslands(vector<vector<char>>& grid) {

        if (grid.size() == 0)
            return 0;

        int iAns = 0;

        for (int i = 0; i < grid.size(); i++) 
        {
            for (int j = 0; j < grid[0].size(); j++) 
            {
                if (grid[i][j] == '1') 
                {
                    iAns++;
                    DFS(grid, i, j);
                }
            }
        }

        return iAns;
    }
};


