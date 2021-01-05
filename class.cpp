#include<iostream>
using namespace std;

class student{
 public:
 int id;
 double gpa;

 void display()
 {
     cout<<id<<" "<<gpa<<endl;
 }

 void setvalue(int x,double y)
 {
     id=x;
     gpa=y;
 }

};

int main()
{
    student sajib, sipon;

    sajib.setvalue(10,3.89);
    sajib.display();



    sipon.setvalue(11,3.85);
    sipon.display();


}
