#include<iostream>
using namespace std;

int main()
{

    int i,j,r,c,ac[100][100],total_resource[100],maximum[100][100],need[100][100],av[10];
    //r=no of row,c=no of column ,ac=alocation time,av=available

    cout<<"Enter how many process : ";
    cin>>r; //No of process is =no of row;

    cout<<"No of column : ";
    cin>>c;

    cout<<" "<<endl;
    cout<<"Enter allocation elements : "<<endl;
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
           cin>>ac[i][j] ;

        }
    }
    cout<<" "<<endl;
    cout<<"Enter Maximum elements : "<<endl;
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
           cin>>maximum[i][j] ;

        }
    }
    cout<<" "<<endl;

    cout<<" Enter Total resource value : ";
    for(j=0;j<c;j++)
    {

        cin>>total_resource[j];
    }
    cout<<" "<<endl;

    cout<<" Enter aviable value : ";
    for(j=0;j<c;j++)
    {

        cin>>av[j];
    }

    cout<<" "<<endl;

    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
           need[i][j]=0;

        }
    }



    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
           need[i][j]=maximum[i][j]-ac[i][j];

        }
    }




    cout<<"need is :  "<<endl;
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
           cout<<" "<<need[i][j];

        }

        cout<<" "<<endl;
    }


cout<<" "<<endl;

    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
           if(need[i][j]<=av[j])
           {
                av[j]+=ac[i][j];
                ac[i][j]=0;
           }

        }
    }


    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
           if(need[i][j]<=av[j])
           {
                av[j]+=ac[i][j];

           }

        }
    }
    cout<<" "<<endl;

    cout<<"Total available = ";
    for(j=0;j<c;j++)
    {

        cout<<" "<<av[j];
    }

    cout<<" "<<endl;

    for(j=0;j<c;j++)
    {

        if(av[j]<=total_resource[j])
            cout<<" satisfied";

        else
            cout<<"Deadlocks";
    }

}
