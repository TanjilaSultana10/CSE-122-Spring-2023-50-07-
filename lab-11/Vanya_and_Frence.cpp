#include<iostream>
using namespace std;
int main()
{
    int n,h,count1=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h)
        {
            count1+=2;
        }
        else
        {
            count1+=1;
        }
    }
    cout<<count1;
}
