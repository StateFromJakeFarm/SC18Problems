/*
 * solution.cpp
 * Jonathan Jones
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector <unsigned int> largestPermutation(unsigned int k, vector <unsigned int> arr) {
    unordered_map<unsigned int,unsigned int> overwritten;
    unordered_map<unsigned int,unsigned int>::const_iterator got;
    for(unsigned int i = 0; i < arr.size(); i++)
    {
        got = overwritten.find(arr[i]);
        while(got != overwritten.end())
        {
            arr[i] = got->second;
            overwritten.erase(got);
            got = overwritten.find(arr[i]);
        }
        if(k > 0 && arr[i] != arr.size() - i)
        {
            k--;
            overwritten.insert({arr.size() - i, arr[i]});
            arr[i] = arr.size() - i;
        }
    }
    return arr;
}

int main() {
    unsigned int n;
    int k;
    cin >> n >> k;
    vector<unsigned int> arr(n);
    for(unsigned int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <unsigned int> result = largestPermutation(k, arr);
    for (unsigned int i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
