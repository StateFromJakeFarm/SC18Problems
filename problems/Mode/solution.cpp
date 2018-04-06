#include <bits/stdc++.h>

using namespace std;

int main()
{
  int size;
  cin >> size;
  int value;
  vector<int> numbers(1000,0);
  for(int i = 0; i < size; i++)
  {
    cin >> value;
    numbers[value]++;
  }
  int maxIndex = 0;
  int max = numbers[0];
  for(int i = 1; i < 1000; i++)
  {
    if(numbers[i] > max)
    {
      max = numbers[i];
      maxIndex = i;
    }
  }
  cout << maxIndex << endl;
}
