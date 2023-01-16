#include <iostream>

using namespace std;

int main()
{
    int w;
    cout<< "Enter the weight of the watermelon:";
    cin >> w;
    if(1<=w && w<=100){
    if ( w % 2 == 0 )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    }
    else
        cout << "wrong weight";
    return 0;
}

