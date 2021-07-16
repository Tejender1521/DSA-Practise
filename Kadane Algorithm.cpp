#include<bits/stdc++.h>

using namespace std;

//This algorithm is useful for largest sum of subarray problems. 
int maxSubArraySum(int a[], int n)
{
    int ans = INT_MIN;
    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        curr = curr + a[i];
        if (ans < curr)
        {
            ans = curr;
        }
        if (curr < 0)
        {
            curr = 0;
        }
    }
    return ans;
    
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}