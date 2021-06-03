#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[10];
int main()
{
    arr[0]=1;
    for(ll i=1;i<=5;i++)
        arr[i]= arr[i-1]*26;
    ll n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        ll cnt =0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='C')
                cnt=1;
        }
        if(s[0]=='R'&&(s[1]>='0'&&s[1]<='9')&&cnt==1)
        {
            ll r= 0LL;
            ll id =1LL;
            while(s[id]!='C')
            {
                r= r*10+(s[id++]-'0');
                //id++;
            }

            ll c = 0LL;
            id++;
            while(id<s.size())
            {
                c= c*10+(s[id++]-'0');
                //id++;
            }

            //cout << r << " " << c << endl;

            vector<ll>v;

            while(c>0)
            {
                if(c%26==0)
                v.push_back(26);
                else
                v.push_back(c%26);
                //cout << c << endl;
                if(c%26==0)
                    c= c/26-1;
                else
                    c= c/26;

            }

            for(ll i=v.size()-1;i>=0;i--)
            {
                //cout << v[i] << endl;
                printf("%c",v[i]+64);
            }

            cout << r << "\n";
        }

        else
        {
            ll r=0LL,c=0LL;
            //cout << r << c << endl;
            vector<ll>v;
            ll id = s.size()-1;
            while(s[id]>='0'&&s[id]<='9')
            {
                v.push_back(s[id--]-'0');
            }

            for(ll i=v.size()-1;i>=0;i--)
                r = r*10+v[i];
            ll i=0;
            while(id>=0)
            {
                c+= arr[i++]*(s[id--]-64);
            }

            cout << 'R' << r << 'C'<< c << "\n";


        }
    }
}
