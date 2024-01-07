#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    // mp.insert({"sakib al hasan",75});
    // mp.insert({"tamim iqval",19});
    // mp.insert({"habib",100});
    // mp.insert({" shamim",79});
    //anner ther waya
    // cout<<mp["habib"]<<endl;
    mp["habib"]=100;
    mp["shide"]=200;//o(logn);
    mp["rakib"]=10;
    if(mp.count("habib"))
    {
        cout<<"Ase";
    }
    else
    {
        cout<<"NI";
    }
    for(auto it=mp.begin();it !=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    // for(auto it=mp.begin();it !=mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // return 0;
}