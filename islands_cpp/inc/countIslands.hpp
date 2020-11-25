#ifndef COUNTISLANDS_HPP
#define COUNTISLANDS_HPP

#include <iostream>
#include <queue>
using namespace std;

class CIslandCounter
{
    private:
        vector< vector<int>> M;
        void markIslands(int, int, int, int);
        void pushIfValid(queue<pair<int,int>>&, int, int, int, int);
    public:
        CIslandCounter(vector< vector<int> >&);
        int getIslands();
        int rows();
        int cols();
};

#endif // COUNTISLANDS_HPP
