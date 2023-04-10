#include<iostream>
using namespace std;
int main()
{
    int x,n,y,i;
    cin>>x>>n>>y;
    int sum=0;
    for(i=1;i<=y;i++)
    {
        sum+=i;
    }
    int d=(sum*x)-n;
    if(d<0)
        cout<<"0";
    else
        cout<<d;
}
