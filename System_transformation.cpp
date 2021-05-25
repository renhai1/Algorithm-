#include<bits/stdc++.h>
using namespace std;
int main()
{
    string number1;//输入的数字
    int scale;//进制
    cin>>scale>>number1;
    int len=number1.length();
    int* number2=new int[len];
    //讲字符串转换为整型数组
    for(int i=len-1;i>=0;i--)
    {
        int x;
        stringstream ss;
        ss << number1.substr(i,1);
        ss >> x;
        number2[i]=x;
    }
    //按照高次幂到底次幂的顺序输出
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
