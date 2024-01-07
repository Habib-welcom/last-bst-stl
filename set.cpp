#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    //soapint set kore;
    //serce 
    //doplecet;

    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<endl;//dereferense;
    }
    return 0;
}