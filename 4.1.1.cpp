#include <iostream>
using namespace std;
int cost(int v, int i, int graph[5][5])
{
    return graph[v][i];
}
int sssp(int n, int cost, int v)
{
    for (int i = 0; i < n; i++)
    {
        
    }
}

int main()
{
    int graph[][5] = {
        {0, 6, 0, 0, 0},
        {0, 0, 0, 3, 0},
        {0, 0, 0, 0, 2},
        {1, 0, 9, 0, 0},
        {5, 0, 0, 8, 0},

    };
}