#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,x,k;
    cin >> x >> k;
    if( x < k){
        cout << 1 << "\n";
        cout << x << "\n";
        return;
    }
    else if( x >= k){
        if(x % k != 0){
            cout << 1 << endl << x << endl;
        }
        else{
            cout << 2 << endl;
            cout << 1 << " "<< x - 1 <<endl;
        }
    }

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
