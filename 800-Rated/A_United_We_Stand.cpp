#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll mx = *max_element(arr.begin(),arr.end());
    vector<ll> b,c;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != mx){
            b.push_back(arr[i]);
        }
        else{
            c.push_back(arr[i]);
        }
    }
    if(b.empty() || c.empty()){
        cout << -1 << endl;
        return;
    }
    else{
        cout << b.size() << " " << c.size() << endl;
        for (auto it : b)
        {
            cout << it << " ";
        }
        cout << endl;
        for(auto it : c){
            cout << it << " ";
        }
        cout << endl;
        
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
