#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int res = 0;
    for (int  i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        res ^= temp;
    }
    //n is even
    if(n%2 == 0 && res == 0){
        cout << 1 << endl;
    }
    else if(n%2 == 0 && res!= 0){
        cout << -1 << endl;
    }
    else{
        cout << res << endl;
    }
    // 1) x does not matter if E = 0
    // 2) if E!=0 than x = -1;
    
    //n is odd => one "x" exists
    // x = res

    

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
