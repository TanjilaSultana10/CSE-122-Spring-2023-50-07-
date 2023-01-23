#include<iostream>
using namespace std;
int main()
{
int A;
cin>>A;
if (A>=80)
cout<<"mark is A+";
else if (A>=75 && A<80)
cout<<"mark is A";
else if (A>=70 && A<75)
cout<<"mark is A-";
else if (A>=65 && A<70)
cout<<"mark is B+";
else if (A>=60 && A<65)
cout<<"mark is B";
else if (A>=55 && A<60)
cout<<"mark is B-";
else if(A>=50 && A<55)
cout<<"mark is C+";
else if (A>=45 && A<50)
cout<<"mark is C";
else if (A>=40 && A<45)
cout<<"mark is D";
else
cout<<"mark is F";
return 0;
}
