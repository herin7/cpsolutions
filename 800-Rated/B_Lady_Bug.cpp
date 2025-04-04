#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    ll s1 = 0,s2 = 0;
    for(int i = 0; i < n;i++){
        if(i%2 == 0){
            s1 += (a[i] - '0');
            s2 += (b[i] - '0');
               }
        else{
            s1 += (b[i] - '0');
            s2 += (a[i] - '0');
        }
    }    
    ll blimit1 = n / 2;
    ll blimit2 = (n + 1) / 2;
    if(s1 <= blimit1 && s2 <= blimit2){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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
