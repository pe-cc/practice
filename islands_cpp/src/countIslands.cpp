
#include "../inc/countIslands.hpp"

CIslandCounter::CIslandCounter(vector< vector<int> >& binaryMatrix)
{
    M = binaryMatrix;
}

int CIslandCounter::rows()
{
    return M.size();
}

int CIslandCounter::cols()
{
    return M[0].size();
}

int CIslandCounter::getIslands() 
{
  int islands = 0;

  for(int i = 0; i < rows(); i++) {
    for(int j = 0; j < cols(); j++) {
      if(M[i][j] == 1) {
        markIslands(rows(), cols(), i, j);
        islands++;
      }
    }
  }

  return islands;
}

void CIslandCounter::markIslands(int rows, int cols, int i, int j) {
  queue<pair<int,int>> q;
  q.push(make_pair(i, j));
  while(!q.empty()) {
    auto item = q.front();
    q.pop();
    int x = item.first;
    int y = item.second;
    if(M[x][y] == 1) {
      M[x][y] = -1;
      pushIfValid(q, rows, cols, x - 1, y - 1);
      pushIfValid(q, rows, cols, x - 1, y);
      pushIfValid(q, rows, cols, x - 1, y + 1);
      pushIfValid(q, rows, cols, x, y - 1);
      pushIfValid(q, rows, cols, x, y + 1);
      pushIfValid(q, rows, cols, x + 1, y - 1);
      pushIfValid(q, rows, cols, x + 1, y);
      pushIfValid(q, rows, cols, x + 1, y + 1);
    }
  }
}

void CIslandCounter::pushIfValid(queue<pair<int,int>>& q, int rows, int cols, int x, int y) {
  if(x >= 0 && x < rows && y >= 0 && y < cols) {
    q.push(make_pair(x, y));
  }
}
