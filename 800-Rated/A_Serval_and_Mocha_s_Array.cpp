#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define mod 1000000007
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
void solve()
{
    int n;
    cin >> n;
    vi x;
    for (int i = 0; i < n;i++)
    {
        
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    bool t = false;
    for(int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {   
            if(gcd(x[i],x[j]) <= 2){
                t = true;
            }
        }
        
    }
    if(t) cout << "Yes\n";
    else cout << "No\n";
    
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
