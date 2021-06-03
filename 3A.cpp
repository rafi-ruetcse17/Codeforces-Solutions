#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    vector<string>v;
    while(1)
    {
        string tmp;
        if(t[0]>s[0])
        {
            tmp+='R';
            s[0]++;
        }
        else if(t[0]<s[0])
        {
            tmp+='L';
            s[0]--;
        }
        if(t[1]>s[1])
        {
            tmp+='U';
            s[1]++;
        }
        else if(t[1]<s[1])
        {
            tmp+='D';
            s[1]--;
        }

        if(tmp.empty())
            break;
        v.push_back(tmp);
    }
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++)
        cout << v[i] << endl;
}
