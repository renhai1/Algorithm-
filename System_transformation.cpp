#include<bits/stdc++.h>
using namespace std;
int main()
{
    string number1;//���������
    int scale;//����
    cin>>scale>>number1;
    int len=number1.length();
    int* number2=new int[len];
    //���ַ���ת��Ϊ��������
    for(int i=0;i<len;i++)
    {
        int x;
        stringstream ss;
        ss << number1.substr(i,1);
        ss >> x;
        number2[i]=x;
    }

    //���ոߴ��ݵ��״��ݵ�˳�����
    int t=0;
    for(int j=len-1;j>=0;j--)
    {
        if(number2[t]!=0)
        {
            cout<<number2[t]<<"*"<<scale<<"^"<<j;

        }
        bool flag=true;
        for(int k=t+1;k<len;k++)
        {
            if(number2[k]!=0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
           return 0;
        }
        if(number2[t]!=0&&j>0)
        {
            cout<<"+";
        }
        t++;
    }
    return 0;
}
