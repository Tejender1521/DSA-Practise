#include <bits/stdc++.h>

using namespace std;
//My Approach
int main()
{
    int k = 3;
    int arr[6] = {7, 10, 4, 3, 20, 15};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    cout << arr[2];
}





// Others Approach
int partition(int arr[], int low, int high)
{
    int i = -1;
    int j = 0;
    int pivot_index = low + (rand() % (high - low + 1));
    int pivot = arr[pivot_index];
    arr[pivot_index] = arr[high];
    arr[high] = pivot;

    pivot = arr[high];

    for (; j < high; ++j)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
class Solution
{
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k)
    {
        //code here
        int p_index;
        while (l <= r)
        {
            p_index = partition(arr, l, r);
            if (p_index == k - 1)
                return arr[p_index];
            else if (p_index > k - 1)
            {
                r = p_index - 1;
            }
            else if (p_index < k - 1)
            {
                l = p_index + 1;
            }
        }
        return -1;
    }
};
