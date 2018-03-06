/*
 * solution.cpp
 * Jonathan Jones
 */
#include <bits/stdc++.h>

using namespace std;

struct thing
{
    long price;
    int index;
};

bool compare(const thing a, const thing b)
{
    return a.price > b.price;
}

long minimumLoss(vector <long> price) {
    vector<thing> list = vector<thing>(price.size());
    for(unsigned int i = 0; i < price.size(); i++)
    {
        list[i].price = price[i];
        list[i].index = i;
    }
    sort(list.begin(), list.end(), compare);

    long min = LONG_MAX;
    long loss;
    for(unsigned int i = 0; i < list.size() - 1; i++)
    {
        if(list[i].index < list[i + 1].index)
        {
            loss = list[i].price - list[i + 1].price;
            if(loss < min && loss != 0)
            {
                min = loss;
            }
        }
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    vector<long> price(n);
    for(int price_i = 0; price_i < n; price_i++){
       cin >> price[price_i];
    }
    long result = minimumLoss(price);
    cout << result << endl;
    return 0;
}
