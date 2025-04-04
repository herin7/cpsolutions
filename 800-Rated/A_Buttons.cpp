#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(c%2 !=0){
        if( b > a){
            cout << "Second\n";
        }
        else{
            cout << "First\n";
        }
    }
    else{
        if( a > b){ 
            cout << "First\n";
        }
        else{
            cout << "Second\n";
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
