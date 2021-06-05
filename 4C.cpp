#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(mp.find(s)==mp.end())
        {
            cout << "OK\n";
            mp[s]++;
        }
        else
        {
            int x = mp[s];
            int  y=x;
            mp[s]++;
            string ss;
            while(y)
            {
                ss+= (y%10)+'0';
                y/=10;
            }
            reverse(ss.begin(),ss.end());
            s+=ss;
            while(1)
            {
                if(mp.find(s)==mp.end())
                {
                    cout << s << "\n";
                    mp[s]++;
                    break;
                }
                else
                {
                    x= mp[s];
                    y = x;
                    mp[s]++;
                    ss.clear();
                    while(y)
                    {
                        ss+= (y%10)+'0';
                        y/=10;
                    }
                    reverse(ss.begin(),ss.end());
                    s+=ss;
                }
            }

        }
    }
}
