#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int solve()
{

    ll n,x;
    cin >> n >> x;
    vector<ll> arr(n,0);
    // arr.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr.push_back(x);
    n = arr.size();
    ll max_dis = LONG_MIN;
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            max_dis = max(max_dis,2*(arr[i] - arr[i - 1]));
        else
            max_dis = max(max_dis,(arr[i] - arr[i - 1]));
    }

    cout << max_dis << endl;

    return 0;
    






    // int n,x;
    // cin >> n >> x;
    // vector<int> stations(n,0);
    // stations.push_back(x);
    // for (int i = 0;i <= n - 1; i++)
    // {
    //     cin >> stations[i];
    // }
    // int mini = stations[0];
    // n = stations.size();
    // for (int i = 0; i <= n - 2; i++)
    // {
    //     if(i == n - 2) mini = max(mini,2*(stations[i + 1] - stations[i]));
    //     else mini = max(mini,stations[i + 1] - stations[i]);
    // }

    // cout << mini << endl;
    // return mini;

}
int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // input.txt
    freopen("output.txt", "w", stdout); // output.txt
#endif
    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}


