#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m%5==0)
    {
        cout<<m/5;
    }
    else
        cout<<(m/5)+1;
}
