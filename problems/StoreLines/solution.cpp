/*
 * solution.cpp
 * Jonathan Jones
 */

#include <iostream>
#include <climits>
#include <string>
#include <sstream>

struct Cashier
{
  int customerNumber;
  int checkoutSpeed;
  int timeOfNextCheckout;
};

int main()
{
  int numberOfCustomers;
  int numberOfCashiers;
  int currentCustomer = 1;

  std::cin >> numberOfCustomers;
  std::cin >> numberOfCashiers;
 
  Cashier * A = new Cashier[numberOfCashiers];
  for(int i = 0; i < numberOfCashiers; i++)
  {
    std::cin >> A[i].checkoutSpeed;
    if(currentCustomer <= numberOfCustomers)
    {
      A[i].customerNumber = currentCustomer;
      currentCustomer++;
      A[i].timeOfNextCheckout = A[i].checkoutSpeed;
    }
    else
    {
      A[i].customerNumber = -1;
      A[i].timeOfNextCheckout = INT_MAX;
    }
  }
  
  Cashier * nextToFinish;
  std::stringstream outputBuffer;
  while(true)
  {
    nextToFinish = &A[0];
    for(int i = 1; i < numberOfCashiers; i++)
    {
      if(A[i].timeOfNextCheckout < nextToFinish->timeOfNextCheckout)
      {
        nextToFinish = &A[i];
      }
      else if(A[i].timeOfNextCheckout == nextToFinish->timeOfNextCheckout &&
                A[i].customerNumber < nextToFinish->customerNumber)
      {
        nextToFinish = &A[i];
      }
    }
    if(nextToFinish->timeOfNextCheckout == INT_MAX)
    {
      break;
    }
    outputBuffer << nextToFinish->customerNumber << " ";
    if(currentCustomer <= numberOfCustomers)
    {
      nextToFinish->customerNumber = currentCustomer;
      currentCustomer++;
      nextToFinish->timeOfNextCheckout += nextToFinish->checkoutSpeed;
    }
    else
    {
      nextToFinish->customerNumber = -1;
      nextToFinish->timeOfNextCheckout = INT_MAX;
    }
  }
  std::string output = outputBuffer.str();
  std::cout << output.substr(0, output.size() - 1) << std::endl;

}
