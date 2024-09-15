#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1,2,4,4,4,5,5,5,5,5};
    int counter = 0;
    int maxi = 0;
    for (int i = 0; i < 9; i ++)
    {
        if (arr[i] == arr[i+1])
        {
            counter++;

        }
        else
        {
            maxi = counter;
            counter  = 0;
        }
    }
    cout<<max(maxi,counter)+1;
}
