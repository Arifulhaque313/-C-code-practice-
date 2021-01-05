#include<iostream>
using namespace std;
int main()
{


    int i,n,a[100],key;
    cout<<"Enter how many elements in the array=";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key";
    cin>>key;

    int l,h,mid;

    l=0;
    h=n-1;
    mid=(l+h)/2;

    while(l<=h)
    {
        if(key>a[mid])
            l=mid+1;

        else if(key==a[mid])
        {
            cout<<"Key is found and its position is ="<<mid+1;
            break;
        }
        else
            h=mid-1;
        mid=(l+h)/2;
    }

    if(l>h)
        cout<<"Key is not found";

}
