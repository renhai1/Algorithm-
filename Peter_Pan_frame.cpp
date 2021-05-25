#include<bits/stdc++.h>
/*彼得·潘框架 温迪框架*/
using namespace std;

int main()
{
    string word;
    cin>>word;
    int len=word.length();
    char *words=new char[len];
    strcpy(words,word.c_str());
    int label=0;
    int labe11=0;
    int label2=0;
    //第一行
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
    //第二行
    for(int j=1;j<=2*len;j++)
    {
        labe11++;
        if(labe11==5)
        {
            for(int k=0;k<2;k++)
            {
                cout<<".*";
            }
            j++;
            labe11=0;
        }else
        {
            cout<<".#";
        }
        if(j==2*len)
        {
            cout<<"."<<endl;
        }
    }
    //第三行
    for(int l=1;l<=2*len;l++)
    {
        if((l-3)%2==0&&l>=4&&l%3!=0)
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
    //第二行
    for(int j=1;j<=2*len;j++)
    {
        label2++;
        if(label2==5)
        {
            for(int k=0;k<2;k++)
            {
                cout<<".*";
            }
            j++;
            label2=0;
        }else
        {
            cout<<".#";
        }
        if(j==2*len)
        {
            cout<<"."<<endl;
        }
    }
//第五行
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
