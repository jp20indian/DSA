
// C++ program to generate n-bit Gray codes
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> solution(int n)
{
    int i,j;
    vector<string> res;

    res.push_back("0");
    res.push_back("1");

    for(i=2;i<(1<<n);i=i*2)
    {
        for(j=i-1;j>=0;j--)
        {
            res.push_back(res[j]);
        }

        for(j=0;j<i;j++)
        {
            res[j]="0"+res[j];
        }

        for(j=i;j<2*i;j++)
        {
            res[j]="1"+res[j];
        }  
    }

    return res;
    
}

vector<string> solution1(int n)
{
    if(n==1)
    return {"0","1"};

    vector<string> rec_ans=solution(n-1),main_ans;

    for(int i=0;i<rec_ans.size();i++)
    {
        string s=rec_ans[i];
        main_ans.push_back("0"+s);
    }

    for(int i=rec_ans.size()-1;i>=0;i--)
    {
         string s=rec_ans[i];
        main_ans.push_back("1"+s);
    }

    return main_ans;

}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    vector<string> ans=solution1(n);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}