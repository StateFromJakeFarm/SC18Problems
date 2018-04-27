#include <bits/stdc++.h>

using namespace std;

int main()
{
  int distance;
  int dogSpeed;
  int foxSpeed;
  int spacing;
  int waitTime;
  cin >> distance >> dogSpeed >> foxSpeed >> spacing >> waitTime;

  int totalTime = 0;
  int timeToNextStop = spacing; 
  int tempDistance = distance;
  while(distance > 0)
  {
    if(timeToNextStop == 0)
    {
      totalTime += waitTime;
      distance += waitTime * foxSpeed;
      if(distance >= tempDistance)
      {
        cout << "Never" << endl;
        return 0;
      }
      tempDistance = distance;
      timeToNextStop = spacing;
    }
    distance -= dogSpeed - foxSpeed;
    totalTime++;
    timeToNextStop--;
  }
  cout << totalTime << endl;
}
