#include<iostream>
#include<string>
using namespace std;

class publication
{
    string title;

    float price;

    public:

void getdata()

{
    cout<<"Enter title: ";

    cin>>title;

    cout<<"Enter price: ";

    cin>>price;
}
void putdata()
{
    cout<<"Title: "<<title<<endl;

    cout<<"Price: "<<price<<endl;
}
};
class book:public publication
{

    int page_count;

    public:

void getdata()
{
    publication::getdata();

    cout<<"Enter page count: ";

    cin>>page_count;
}
void putdata()
{
    publication::putdata();

    cout<<"Page count: "<<page_count<<endl;
}
};
class tape:public publication
{

    float play_time;

    public:

void getdata()
{
    publication::getdata();

    cout<<"Enter Play time: ";

    cin>>play_time;
}
void putdata()

{
    publication::putdata();

    cout<<"Play time: "<<play_time<<endl;
}
};

int main()
{
    book b;

    tape ta;

    cout<<"Enter Details Of Book:\n";

    b.getdata();

    cout<<"\nEnter details of Tape:\n";

    ta.getdata();

    b.putdata();

    ta.putdata();

    return 0;
}
