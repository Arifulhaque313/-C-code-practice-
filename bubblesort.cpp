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

    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }

}
