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
    for(int i=len-1;i>=0;i--)
    {
        int x;
        stringstream ss;
        ss << number1.substr(i,1);
        ss >> x;
        number2[i]=x;
    }
    //���ոߴ��ݵ��״��ݵ�˳�����
    for(int j=len-1;j>0;j--)
    {
        if(number2[j]!=0)
        {
            cout<<number2[j]<<"*"<<scale<<"^"<<j<<"+";

        }
    }
    if(number2[0]!=0)
    {
        cout<<number2[0]<<"*"<<scale<<"^0";
    }
    return 0;
}
