#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
struct student{
    int number;
    string name;
    int math;
    int chinese;
    int english;
    int all_grade;
    int rank;
};
int main()
{
 int num;
 cin>>num;
if(num>=10)
{
    cout<<"Please input 1-9."<<endl;
    return 0;
}
    student student1[num];
    for(int i=0;i<num;i++)
    {
        cin>>student1[i].number;
        cin>>student1[i].name;
        cin>>student1[i].math;
        cin>>student1[i].chinese;
        cin>>student1[i].english;
        student1[i].all_grade=student1[i].math+student1[i].chinese+student1[i].english;
    }
    int large=student1[0].all_grade;
    int label1;
    int label3=0;
    while(label3<num)
    {
         for(int i=0;i<num;i++)
    {
        if(large<student1[i].all_grade)
        {
            large=student1[i].all_grade;
            label1=i;
        }
    }
        label3++;
        student1[label1].rank=label3;
        cout<<setw(4)<<student1[label1].rank;
        cout<<setw(10)<<student1[label1].number;
        cout<<setw(10)<<student1[label1].name;
        cout<<setw(5)<<student1[label1].math;
        cout<<setw(5)<<student1[label1].chinese;
        cout<<setw(5)<<student1[label1].english;
    }

    return 0;
}
