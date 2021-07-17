#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        //Wrong approach by me
        // int count=0;
        // for (int i = 0; i < n; )
        // {
        //     i = i+arr[i];
        //     count++;
        // }
        // return count;
        int jumps = 0, farthest = 0, currEnd = 0;
        for (int i = 0; i < n - 1; i++)
        {
            farthest = max(farthest, i + arr[i]);
            if (farthest >= n - 1)
                return 1 + jumps;

            if (i == farthest)
                return -1;

            if (i == currEnd)
            {
                jumps++;
                currEnd = farthest;
            }
        }
        return jumps;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
}