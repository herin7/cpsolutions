#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vi x(n);
    int num2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if(x[i] == 2) num2++;
    }
    if(num2 % 2 != 0){
        cout << -1;
    }
    else if(num2 == 0){
        cout << 1;
    }
    else{
        int i = 0,ans = 0;
        while(i < n && ans != num2/2){
            if(x[i] == 2){
                ans++;
            }
            i++;  
        }
        cout << i;
    }
    cout << endl;
    
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
