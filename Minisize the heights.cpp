#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:

    int getMinDiff(int arr[], int n, int k)
    {
        //My wrong approach
        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i] > k)
        //     {
        //         arr[i] = arr[i] - k;
        //     }
        //     else
        //     {
        //         arr[i] = arr[i] + k;
        //     }
        // }
        // return ((*max_element(arr, arr + n)) - (*min_element(arr, arr + n)));
        



        sort(arr, arr + n); 
        int minEle,
            maxEle;                       
        int result = arr[n - 1] - arr[0]; 
                                          

        for (int i = 1; i <= n - 1; i++)
        {
            if (arr[i] >= k && arr[n - 1] >= k)
            {
                maxEle = max(arr[i - 1] + k,arr[n - 1] - k); 
                if (arr[i] - k < 0)
                    continue;
                minEle = min(arr[0] + k, arr[i] - k);

                result = min(result, maxEle - minEle);
                
            }
        }
        return result;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, n);
        cout << ans << "\n";
    }
}