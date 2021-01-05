#include<bits/stdc++.h>

using namespace std;


class student{

 public:
int id ;
double gpa;


void display()
{
    cout<<id<<endl<<gpa<<endl;

}

student(int x, double y)
{
    id =x;
    gpa=y;
}




};


int main()
{
    student sajib(10,2.33);

    sajib.display();


}
