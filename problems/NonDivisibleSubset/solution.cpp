#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size;
    int k;
    cin >> size >> k;
    vector<int> array (k,0);
    int temp;
    for(int i = 0; i < size; i++)
    {
        cin >> temp;
        temp = temp % k;
        array[temp]++;
    }
    int count = 0;
    if(array[0] > 0)
    {
        count++;
    }
    if(!(k &  1))
    {
        if(array[k / 2] > 0)
        {
            count++;
        }
        for(int i = 1; i < (k / 2); i++)
        {
            count += array[i] > array[k - i] ? array[i] : array[k - i];
        }
    }
    else
    {
        for(int i = 1; i <= (k / 2); i++)
        {
            count += array[i] > array[k - i] ? array[i] : array[k - i];
        }
    }
    cout << count << endl;
}
