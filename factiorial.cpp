#include<iostream>
using namespace std;

int main()
{


    int i, n,fact=1;


    cout<<"Enter an integer number =";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"the factorial number is ="<<fact<<endl;
}

