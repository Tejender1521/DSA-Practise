#include <bits/stdc++.h>

using namespace std;
//This is a python approach very lite and nice
// class Solution:
//     def merge(self, arr1, arr2, n, m): 
//         arr1[:]=sorted(arr1+arr2)
//         arr2.clear()


class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        int j = 0, i = n - 1;
        while (j < m && i > -1 && arr2[j] < arr1[i])
            swap(arr2[j++], arr1[i--]);
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (int i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }

        for (int i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
}