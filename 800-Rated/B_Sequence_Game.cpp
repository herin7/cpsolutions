#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> a(1);
    if(n == 1){
        cout << 1 << endl;
        cout << b[0] << endl;
        return;

    }

    a[0] = b[0];
    for (int i = 1; i < 2*n; i++)
    {
        int tbi = b[i];
        if(tbi >= b[i-1]){
            a.push_back(tbi);
        }
        else{
            int x = b[i-1] - b[i];
            while(x > b[i]) x--;
            a.push_back(x);
            a.push_back(tbi);
        }
        if(i >= n - 1 && tbi == b[n - 1]) break;
    }
    int m = a.size();
    cout << m << "\n";
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    
    
    cout << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
