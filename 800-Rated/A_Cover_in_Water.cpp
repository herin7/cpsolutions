#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool isthree = false;
    int tc = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '.' && i + 1 < n && s[i+1] == '.' && i+2<n && s[i+2] == '.'){
            isthree = true;
            break;
        }
        if (s[i] == '.')
        {
            tc++;
        }
        
    }
    if(isthree) {
        cout << 2 << endl;
    }
    else
        cout<<tc <<endl;
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
