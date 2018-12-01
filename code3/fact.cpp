/**
 * FACTORIAL OF A NUMBER
 * author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com> 
 * github: https://github.com/razdeep
 */
#include<iostream>

using namespace std;

int factorial(int n)
{
    int s=1;
    for(int i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}

int main()
{
    int n=5;
    int answer=factorial(n);
    cout<<"Factorial is: "<<answer<<endl;
    return 0;
}
