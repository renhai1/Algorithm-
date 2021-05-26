#include<bits/stdc++.h>
using namespace std;
string  f(string a,string b,int len);
int main()
{
    int len;
    cin>>len;
    string a,b;
    cin>>a>>b;
    cout<<f(a,b,len)<<endl;
    return 0;
}
string  f(string a,string b,int len)
{
    string g;
    for(int i=0;i<len;i++)
    {
        g=g+min(a[i],b[i]);

    }
    return g;

}
