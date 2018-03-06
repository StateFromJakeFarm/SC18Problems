/*
 * solution.cpp
 * Jonathan Jones
 */
#include <bits/stdc++.h>

using namespace std;

struct node
{
  long value;
  int originalIndex;
  bool visited;
};

bool ascending(const node a, const node b)
{
  return a.value < b.value;
}

int countSwaps(vector<node> & map)
{
  int count = 0;
  int visitingIndex;
  int nextIndex;
  for(unsigned int i = 0; i < map.size(); i++)
  {
    visitingIndex = i;
    while(true)
    {
      map[visitingIndex].visited = true;
      nextIndex = map[visitingIndex].originalIndex;
      if(!map[nextIndex].visited)
      {
        count++;
        visitingIndex = map[visitingIndex].originalIndex;
      }
      else
      {
        break;
      }
    }
  }
  return count;
}

int lilysHomework(vector <long> arr)
{
  vector<node> map = vector<node>(arr.size());
  for(unsigned int i = 0; i < arr.size(); i++)
  {
    map[i].value = arr[i];
    map[i].originalIndex = i;
    map[i].visited = false;
  }
  int ascSwaps;
  int desSwaps;
  sort(map.begin(), map.end(), ascending);
  ascSwaps = countSwaps(map);
  
  for(unsigned int i = 0; i < map.size(); i++)
  {
    map[i].visited = false;
  }
  reverse(map.begin(), map.end());
  desSwaps = countSwaps(map);
  
  return ascSwaps < desSwaps ? ascSwaps : desSwaps;
}

int main()
{
  int n;
  cin >> n;
  vector<long> arr(n);
  for(int arr_i = 0; arr_i < n; arr_i++)
  {
    cin >> arr[arr_i];
  }
  int result = lilysHomework(arr);
  cout << result << endl;
  return 0;
}

