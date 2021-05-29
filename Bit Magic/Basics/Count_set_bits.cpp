#include<iostream>
using namespace std;

int naive1(int n)
{
    int res=0;
    while(n!=0)
    {
        if(n%2!=0)
        res++;
        n/=2;
    }

    return res;
}

int naive(int n)
{
    int res=0;

    while(n!=0)
    {
    res=res+(n&&1);
    n=n>>1;
    }

    return res;
}

int Brian_kerningam_Algo(int n)
{
    unsigned int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }

    return count;
}

int look_up_table_method(int n)
{
    int table[256];
    for(int i=1;i<256;i++)
    table[i]=(i&1)+table[i/2];

    int res=table[n&255];
    n=n>>8;
    res=res+table[n&255];
    n>>8;
    res=res+table[n&255];
    n>>8;
    res=res+table[n&255];
    
    return res;

}

int main()
{
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    cout<<"naive methoda : "<<naive(n)<<endl<<"naive1 methoda : "<<naive1(n)<<endl<<"Brian Kerningham Method : "<<Brian_kerningam_Algo(n)<<endl<<"Look Up Table Method : "<<look_up_table_method(n)<<endl;
}