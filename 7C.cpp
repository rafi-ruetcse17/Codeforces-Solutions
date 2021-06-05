#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll egcd(ll a,ll b,ll &x, ll &y)
{
    if(a==0LL)
    {
        x = 0, y =1;
        return b;
    }

    ll x1,y1;
    ll d = egcd(b%a,a,x1,y1);

    x = y1-(b/a)*x1;
    y = x1;

    return d;
}
int main()
{
    ll a,b,c;
    cin >> a>> b >> c;
    c*=-1;

    ll x,y;
    ll g = egcd(a,b,x,y);

    if(c%g!=0)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << x*(c/g) << ' ' << y*(c/g) << endl;
}
