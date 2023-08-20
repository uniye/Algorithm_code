#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

class MazeMaker
{
public:
    int longesPath(vector<string> maze, int _iStartRow, int _iStartCol, vector<int> moveRow, vector<int> moveCol)
    {
        int iMax = 0;
        int iWidth = maze[0].size(), iHeight = maze.size();
        int iBoard[50][50];
        for (int i = 0; i < iHeight; i++)
        {
            for (int j = 0; j < iWidth; j++)
            {
                iBoard[i][j] = -1;
            }
        }
        iBoard[_iStartRow][_iStartCol] = 0;
        queue<int> queueX;
        queue<int> queueY;
        queueX.push(_iStartCol);
        queueY.push(_iStartRow);

        while (queueX.size() > 0)
        {
            int iX = queueX.front(),
                iY = queueY.front();
            queueX.pop();
            queueY.pop();

            for (int i = 0; i < moveRow.size(); i++)
            {
                int iNextX = iX + moveCol[i], iNextY = iY + moveRow[i];
                if ((0 <= iNextX) && (iNextX < iWidth) && (0 <= iNextY) 
                    && (iNextY < iHeight) && (iBoard[iNextY][iNextX] == -1) 
                    && (maze[iNextY].substr(iNextX, 1) == "."))
                {
                    iBoard[iNextY][iNextX] = iBoard[iY][iX] + 1;
                    queueX.push(iNextX);
                    queueY.push(iNextY);
                }
            }
        }
        for (int i = 0; i < iHeight; i++)
        {
            for (int j = 0; j < iWidth; j++)
            {
                if ((maze[i].substr(j, 1) == ".") && (iBoard[i][j] == -1))
                    return -1;
                iMax = max(iMax, iBoard[i][j]);
            }
        }
        return iMax;
    }
};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> maze = { "X.X","...","XXX","X.X"};
    int iStartRow(0), iStartCol(1), iResult(0);
    vector<int> moveRow = { 1,0,-1,0 };
    vector<int> moveCol = { 0,1,0,-1 };

    MazeMaker MM;

    iResult = MM.longesPath(maze, iStartRow, iStartCol, moveRow, moveCol);

    cout << iResult;

    return 0;
}

