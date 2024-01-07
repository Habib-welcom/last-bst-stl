#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentense;
    getline(cin,sentense);
    string worde;
    stringstream ss(sentense);
    map<string,int>mp;
    while (ss>>worde)
    {
        mp[worde]++;
    }
    // for(auto it=mp.begin();it!=mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<mp["I"]<<endl;
    return 0;
}