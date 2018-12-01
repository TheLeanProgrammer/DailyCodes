/**
 * REVERSING A STRING
 * author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com> 
 * github: https://github.com/razdeep
 */
#include<iostream>

using namespace std;

string strRev(const string& s)
{
    static string temp=s;
    int k=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        temp[k++]=s[i];
    }
    return temp;
}

int main()
{
    string s="Hello";
    string rev=strRev(s);
    cout<<rev<<endl;
    return 0;
}
