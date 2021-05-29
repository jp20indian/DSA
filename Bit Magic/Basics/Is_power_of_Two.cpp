#include<bits/stdc++.h>
using namespace std;

bool naive(int n)
{   
    if(n==0)
    return false;

    while(n!=1)
    {
        if(n%2!=0)
        return false;

        n=n>>1;
    }

    return true;
}

int log_method(int n)
{
    if(n==0)
    return false;

    return (floor(log2(n))==ceil(log2(n)));

}

int efficient(int n)
{
    if(n==0)
    return false;

    return((n&(n-1))==0);
}

int main()
{
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    cout<<"Naive : "<<naive(n)<<endl<<"Log method : "<<log_method(n)<<endl<<"efficient : "<<efficient(n)<<endl;
}