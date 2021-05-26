#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int num_arr;
    cin>>num_arr;
    int* num=new int[num_arr];
    for(int i=0;i<num_arr;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<num_arr;i++)
    {
        if(num[i]%2==0)
        {
            cout<<"pb wins"<<endl;
        }else
        {
            cout<<"zs wins"<<endl;
        }

    }
    delete []num;
    return 0;
}

