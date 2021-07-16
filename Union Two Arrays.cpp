#include<bits/stdc++.h>

using namespace std;
//When Union of two arrays required use set like unordered set

int solve(int a[], int n, int b[], int m)
{
    unordered_set <int> st;
        
        st.insert(a, a + n);
        st.insert(b, b + m);
        
        return st.size();
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin >> n >> m;
        int a[n],b[m];


        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        
        cout << solve(a,n,b,n);
    }
    
}