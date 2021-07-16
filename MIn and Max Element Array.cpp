#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {15,5,25,1,6,12,15,26,21,8};
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
           max = arr[i]; 
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
        
    }
    cout << max << " " << min;
}