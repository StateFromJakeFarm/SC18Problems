/*
 * Solution based largely on comments found here:
 *  https://www.hackerrank.com/challenges/kingdom-division/forum
 */

#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adjList;
vector<int> parentList;
vector<bool> visited;
long long cache[100001][2][2];
long long bilSeven = 1000000007;


void DFS(int cur)
{
    visited[cur] = true;
    for(unsigned int i = 0; i < adjList[cur].size(); i++)
    {
        if(!visited[adjList[cur][i]])
        {
            parentList[adjList[cur][i]] = cur;
            DFS(adjList[cur][i]);
        }
    }
}

bool isLeaf(int node)
{
    for(unsigned int i = 0; i < adjList[node].size(); i++)
    {
        if(adjList[node][i] != parentList[node])
        {
            return false;
        }
    }
    return true;
}

long long solve(int node, bool color, bool parentMatches)
{
    if(cache[node][color][parentMatches] != -1)
    {
        return cache[node][color][parentMatches];
    }
    if(isLeaf(node))
    {
        if(parentMatches)
        {
            return cache[node][color][parentMatches] = 1;
        }
        else
        {
            return cache[node][color][parentMatches] = 0;
        }
    }
    
    long long ans = 1;
    long long valid;
    long long invalid = 1;
    int child;
    for(unsigned int i = 0; i < adjList[node].size(); i++)
    {
        child = adjList[node][i];
        if(child == parentList[node])
        {
            continue;
        }
        valid = solve(child, !color, false);
        invalid *= valid;
        invalid %= bilSeven;
        valid += solve(child, color, true);
        ans *= valid;
        ans %= bilSeven;  
    }
    
    if(!parentMatches)
    {
        ans -= invalid;
        ans += bilSeven;
        ans %= bilSeven;
    }
    return cache[node][color][parentMatches] = ans;
}

int main() {
    int n;
    cin >> n;
    adjList = vector<vector<int> >(n + 1, vector<int>());
    parentList = vector<int>(n + 1, -1);
    visited = vector<bool>(n + 1, false);
    for(int i = 0; i <= n; i++)
    {
        cache[i][0][0] = cache[i][0][1] = cache[i][1][0] = cache[i][1][1] = -1;
    }
    int u, v;
    for(int i = 1; i < n; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    DFS(1);
    cout << (solve(1, true, false) * 2) % bilSeven << endl;
    return 0;
}

