#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k,x;
    cin >> n >> k >> x;
    vector<int> z(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> z[i];
        // sum+=z[i];
        
    }
    if(n == 1 && z[0] >= x){
         cout << 0 << endl;
         return;
    }
    int h = z.size()-1;
    int c;
    for (int i = h; i >=0;i--)
    {
        /* code */
        sum+=z[i];
        if(sum >= x){
            c = n - (i + 1);
            break;
        }
    }
    cout << (n*k)-c << endl;
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
