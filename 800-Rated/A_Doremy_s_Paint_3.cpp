
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    map<ll,ll> f_map;
    for (int i = 0; i < n; i++)
    {
        f_map[arr[i]]++;
    }
    if(f_map.size() >= 3){
        cout << "No\n";
        return;
    }
    else{
        ll freq1 = f_map.begin()->second;
        ll freq2 = f_map.rbegin()->second;
        if(freq1 == freq2) {
            cout << "Yes\n";
            return;
        }
        else if(n%2 == 1 && abs(freq1 - freq2) == 1)
                {
                    cout<<"Yes\n";
                    return;
                }
        else
                {
                    cout<<"No\n";
                    return;
                }
    }
    
  return;
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
