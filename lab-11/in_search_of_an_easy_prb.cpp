#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(n>0)
    {
        cin>>i;
        if(i==1)
        {
            cout<<"HARD"<<endl;
            return 0;
        }
        n--;
    }
    cout<<"EASY"<<endl;
    return 0;
}
