#include<iostream>
using namespace std;
int main()
{
    int up=0,lo=0,i;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
        {
            lo++;
        }
    }
    if(up<lo)
    {
        for(i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
}
