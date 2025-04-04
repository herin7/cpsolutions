#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int m = 0,tempm = 0;
    for(int i = 0; i < n;i++){
        
        int temp;
        cin >> temp;
        if(temp == 0){
            tempm++;
        }
        else{
            tempm = 0;
        }
        m = max(m,tempm);

    }
    cout << m << endl;
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
