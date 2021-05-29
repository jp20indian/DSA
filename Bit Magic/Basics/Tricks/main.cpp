#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int g,p,a[10];
        cin>>g>>p;
        for(int i=0;i<10;i++)
        cin>>a[i];

        // for(int i=0;i<10;i++)
        // cout<<a[i];

        int count=0,sum=0,total=0;
        total=p*(10-p);

        while(total!=0)
        {
            
        }

        // for(int i=9;i>=g;--i)
        // {
        //    // sum=sum+a[i];
        //    // cout<<" i = "<<i<<" "<<"a[i] =  "<<a[i]<<" ";
        //    int t=a[i];
        //    while(p!=0)
        //    {
        //        t=t-p;
        //        p=p-1;
        //    }

        // }

         //count=sum/p;

        cout<<count<<endl;
    }
    
}