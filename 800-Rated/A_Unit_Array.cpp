#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int pos = 0,neg = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1){
            pos++;
        }
        else{
            neg++;
        }
    }

    if(pos >= neg && (neg % 2 == 0)){
        cout << 0 << endl;
        return;
    }
    else{
        int ops = 0;
        while(pos < neg || neg % 2 != 0){
            neg-=1;
            pos+=1;
            ops++;
        }
        cout << ops << endl;
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
