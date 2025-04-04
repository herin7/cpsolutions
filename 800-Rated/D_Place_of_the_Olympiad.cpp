#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> arr(m);
    int i = 0;
    while(i < k){
        while(i < m && k >= m)
        {
            if(k >= n){
            arr[i] = n;
            k-=n;   
            }
            else{
                break;
            }

            i+=2;
        }
        i = m-1;
        while(k!=0){
            if(k <= n)
                {
                    arr[i] = k;
                    k-=k;
                }
            else{
                arr[i] = n;
                k-=n;
            }
        }
    



    }
    int mainans = 0,ans = 0;
    for (int i = 0; i < m; i++)
    {
        if(arr[i] > 0){
            ans++;
        }
        else{
            mainans = max(ans,mainans);
            ans = 0;
        }
    }
    cout << ans << endl;
    
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
