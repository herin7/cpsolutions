#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    char arr[10][10];
    int score = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            char temp;
            cin >> temp;
            arr[i][j] = temp;
            if(temp == 'X'){
                if(i == 0 || j == 0 || i == 9 || j == 9) score+=1;
                else if(i == 1 || j == 1 || i == 8 || j == 8)score+=2;
                else if(i == 2 || j == 2 || i == 7 || j == 7)score+=3;
                else if(i == 3 || j == 3 || i == 6 || j == 6)score+=4;
                else score+=5;
            }
        }
    }
    cout << score <<"\n";
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
