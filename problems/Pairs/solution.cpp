/*
 * solution.cpp
 * Jonathan Jones
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pairs(int k, vector <int> arr) {
    sort(arr.begin(), arr.end());
    int smallIndex = 0;
    int count = 0;
    
    for(unsigned int i = 0; i < arr.size(); i++)
    {
        while(arr[i] - arr[smallIndex] > k)
        {
            smallIndex++;
        }
        if(arr[i] - arr[smallIndex] == k)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = pairs(k, arr);
    cout << result << endl;
    return 0;
}
