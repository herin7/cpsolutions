#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int ops = 0;
    int a,b,c,d,z;
    cin >> a >> b>> c>>d;
    if(d < b)
    {
         cout << -1 << endl;
        return;
        }
    else{
        int x = d - b;
        ops+=x;
        a+=x;
        if(a < c){
            cout << -1 << endl;
            return;
        }
        else{
        z = a - c;
        ops+=z;
    }
    }
     cout << ops << endl;
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
