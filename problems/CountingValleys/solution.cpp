#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  
  int height = 0;
  int count = 0;
  for(int i = 0; i < n; i++)
  {
    if(s[i] == 'D')
    {
      height--;
    }
    else
    {
      height++;
      if(height == 0)
      {
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
