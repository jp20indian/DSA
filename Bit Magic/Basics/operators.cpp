#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter two numbers : "<<endl;
    cin>>n>>m;
    cout<<"OR = "<<(n||m)<<endl;
    cout<<"AND = "<<(n&m)<<endl;
    cout<<"LEFT SHIFT by a = 2 (multiply by 2^a): "<<endl<<"n = "<<(n<<2)<<endl<<"m = "<<(m<<2)<<endl;
    cout<<"RIGHT SHIFT by a = 2 (divide by 2^a): "<<endl<<"n = "<<(n>>2)<<endl<<"m = "<<(m>>2)<<endl;
    cout<<"NOT : "<<endl<<"n = "<<(~n)<<endl<<"m = "<<(~m)<<endl;
}