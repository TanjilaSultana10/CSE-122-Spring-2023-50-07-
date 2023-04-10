/*Imagine a publishing company that markets both book and audiocassette
versions of its works. Create a class publication that stores the title (a
string) and price (type float) of a publication. From this class derive two
classes: book, which adds a page count (type int), and tape, which adds a
playing time in minutes (type float). Each of these three classes should
have a getData() function to get its data from the user at the keyboard, and
a putData() function to display its data.
Write a main program to test the book and tape classes by creating
instances of them, asking the user to fill in data with getData(), and then
displaying the data with putData().*/
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
