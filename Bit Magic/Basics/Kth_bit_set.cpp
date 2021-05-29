#include<iostream>
using namespace std;

bool left_shift(int n,int k)
{
    k=1<<(k-1);
    if((n&k)!=0)
    return true;
    else 
    return false;
}

bool right_shift(int n,int k)
{
    n=n>>(k-1);
    if((n&1)==1) 
    return true;
    else
    return false;
}
 
 int main()
 {
     cout<<"Enter two no.s : "<<endl;
     int n,m;
     cin>>n>>m;
     cout<<"Left Shift : "<<left_shift(n,m)<<endl;
     cout<<"right shift : "<<right_shift(n,m)<<endl;
     
 }