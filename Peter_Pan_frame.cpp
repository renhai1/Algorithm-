#include<bits/stdc++.h>
/*�˵á��˿�� �µϿ��*/
using namespace std;

int main()
{
    string word;
    cin>>word;
    int len=word.length();
    char *words=new char[len];
    strcpy(words,word.c_str());
    int label=0;
    //��һ��
    for(int i=1;i<=len;i++)
    {
        if(i%3==0)
        {
            cout<<"..*.";
        }else
        {
            cout<<"..#.";
        }
        if(i==len)
        {
            cout<<"."<<endl;
        }

    }
    //�ڶ���
    for(int j=1;j<=2*len;j++)
    {
        if(j%5==0||j%6==0)
        {
            cout<<".*";
        }else
        {
            cout<<".#";
        }
        if(j==2*len)
        {
            cout<<"."<<endl;
        }
    }
    //������
    for(int l=1;l<=2*len;l++)
    {
        if(l%5==0||l%7==0)
        {
            cout<<"*.";
        }else
        {
            if(l%2==0)
            {
                cout<<words[label]<<".";
                label++;

            }else
            {
                cout<<"#.";

            }

        }
        if(l==2*len&&l%6==0)
        {
            cout<<"*"<<endl;
        }else if(l==2*len)
        {
            cout<<"#"<<endl;

        }
    }
    //�ڶ���
    for(int j=1;j<=2*len;j++)
    {
        if(j%5==0||j%6==0)
        {
            cout<<".*";
        }else
        {
            cout<<".#";
        }
        if(j==2*len)
        {
            cout<<"."<<endl;
        }
    }
//��һ��
    for(int i=1;i<=len;i++)
    {
        if(i%3==0)
        {
            cout<<"..*.";
        }else
        {
            cout<<"..#.";
        }
        if(i==len)
        {
            cout<<"."<<endl;
        }

    }
    return 0;
}
