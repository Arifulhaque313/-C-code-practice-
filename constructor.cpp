#include<iostream>
using namespace std;

class student

{
    public:
    int id ;
    char name;


    student(int x, char y)
    {
        id =x;
        name=y;

        cout<<"name is "<<name<<"id is ="<<id;
    }
};



int main()

{
    student sajib(1,'a');

}
