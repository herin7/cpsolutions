#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,m;
    cin >> n >> m;
    string x;
    string s;
    char temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        x.push_back(temp);
    }
    // char temp;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }
    if(x.size() < s.size()){
        cout << -1 << endl;
        return;
    }
    
    int ops = 0;
    while(ops <= 5)
    {
        if(x.find(s) != string::npos){
            cout << ops << endl;
            return;
        }
        else{
            ops++;
            x.append(x);   
        }

    }
    
  
    cout << -1 << endl;
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
