#include<iostream>
using namespace std;

int main()
{


    int i,n,key,a[100];
    cout<<"Enter how many elements in the arry =";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key = ";
    cin>>key;

    int mid,l,h;
    l=0;
    h=n-1;

    mid=(l+h)/2;

    while(l<=h){

    if(key>a[mid])

        l=mid+1;

    else if(key==a[mid])
    {

        cout<<"Key is found and its position is "<<mid+1;
        break;
    }
    else


            h=mid-1;
             mid=(l+h)/2;



    }

    if(l>h)
    {
        cout<<"Key is not found";
    }
}
