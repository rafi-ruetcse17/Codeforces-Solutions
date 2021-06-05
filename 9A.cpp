#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int n=6, m = max(a,b);
    m = n-m+1;
    int gcd = __gcd(n,m);
    cout << m/gcd << "/" << n/gcd << endl;
}
