#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    p=1;
    for(int i=1;i<=n;i++)
    {
        p*=i;
    }
    cout<<p<<endl;
    cout<<endl<<"Hello, Word!"<<endl;
    return 0;
}