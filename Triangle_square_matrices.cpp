#include<bits/stdc++.h>
using namespace std;
/* 打印数字矩形和三角矩形*/
int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=pow(num,2);i++)
    {
        if(i<=9)
        {
            cout<<"0"<<i;
        }else
        {
            cout<<i;
        }
        if(i%num==0)
        {
            cout<<"\n";
        }
    }
    cout<<endl;
    int l=1;
    for(int i=1;i<=num;i++)
    {
        int label=num;
        for(int j=0;j<num-i;j++)
        {
            cout<<"  ";
            label--;

        }
        while(label>0)
        {
            if(l<=9)
        {
            cout<<"0"<<l;
             label--;
             l++;
        }else
        {
            cout<<l;
             label--;
             l++;
        }
        }
        cout<<"\n";
    }

    return 0;
}
