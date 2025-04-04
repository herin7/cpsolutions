#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,x,k;
    cin >> n >> k>> x;
    if(x != 1){
        
            cout << "YES\n";
            cout << n << endl;

            for(int i = 0;i < n;i++){
                cout << 1 << " ";
        }
        cout << endl;

    }
    else{
        if(k == 1 || (k == 2 && n %2 == 1)){
            cout << "NO\n";
            return;
        }
        else{
            cout << "YES\n";
            if(n%2 == 0){
                cout << n/2 << endl;
                for (int i = 0; i < n/2; i++) cout << 2 << " ";
                cout << endl;
                
            }
            else{
                    cout << (n-3)/2 + 1 << endl;
                    for(int i = 0; i < (n-3)/2 ;i++) cout << 2 <<" ";
                    cout << 3 <<" ";
                    cout << endl;

            }
            
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
