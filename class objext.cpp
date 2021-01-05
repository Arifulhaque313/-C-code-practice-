#include<iostream>
using namespace std;



    class st{
    public:
    int id ;
    int age;
    double gpa;

    void display()
    {
        cout<<"Sajibs details is="<<id<<" "<<age<<" "<<gpa<<endl;
    }


    };

int main()
{
   st sajib;

   sajib.id=10;
   sajib.age=20;
   sajib.gpa=3.88;


   sajib.display();


}
