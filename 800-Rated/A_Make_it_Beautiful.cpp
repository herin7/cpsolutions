#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> x(n);
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        mini = min(x[i],mini);
        maxi = max(x[i],maxi);
    }
    if(mini == maxi) { 
        cout << "NO";
    }
    else{
        sort(x.begin(),x.end());
        cout << "YES" << endl;
        cout << maxi << " ";
        for (int i = 0; i < n-1; i++)
        {
            cout << x[i] << " ";
        }
    }
    cout << endl;

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
