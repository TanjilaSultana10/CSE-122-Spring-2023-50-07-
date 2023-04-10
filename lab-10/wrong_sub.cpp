#include<iostream>
using namespace std;
int main()
{
    int x,n,i;
    cin>>x>>n;
    for(i=0;i<n;i++)
    {
        if(x%10==0)
        {
            x=x/10;
        }
        else
        {
            x--;
        }
    }
    cout<<x;

}
