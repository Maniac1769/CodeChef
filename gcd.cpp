#include<iostream>
using namespace std;
int main()
{   
    int t,cnt;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        cnt=8;
        for (int i=0;i<x;i++)
        {
            int y;
            cin>>y;
            if (y!=6&&y!=13&&y!=20&&y!=27&&y!=7&&y!=14&&y!=21&&y!=28)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}