#include <bits/stdc++.h>

using namespace std;

class Cashier
{
 public:
  int customerNumber;
  int checkoutSpeed;
  int timeOfNextCheckout;
};
class Compare
{
 public:
  bool operator() (Cashier a, Cashier b)
  {
    if(a.timeOfNextCheckout == b.timeOfNextCheckout)
    {
      return a.customerNumber > b.customerNumber;
    }
    return a.timeOfNextCheckout > b.timeOfNextCheckout;
  }
};

int main()
{
  priority_queue<Cashier, vector<Cashier>, Compare> minQ;
  int numberOfCustomers;
  int numberOfCashiers;
  int customerNumber = 1;
  Cashier c;
  cin >> numberOfCustomers >> numberOfCashiers;
  for(int i = 0; i < numberOfCashiers; i++)
  {
    if(customerNumber <= numberOfCustomers)
    {
      c = Cashier();
      c.customerNumber = customerNumber++;
      cin >> c.checkoutSpeed;
      c.timeOfNextCheckout = c.checkoutSpeed;
      minQ.push(c);
    }
  }
  stringstream output;
  while(!minQ.empty())
  {
    c = minQ.top();
    minQ.pop();
    output << c.customerNumber << " ";
    if(customerNumber <= numberOfCustomers)
    {
      c.customerNumber = customerNumber++;
      c.timeOfNextCheckout += c.checkoutSpeed;
      minQ.push(c);
    }
  }
  string out = output.str();
  cout << out.substr(0, out.size() - 1) << endl;
  return 0;
}
