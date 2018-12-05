<<<<<<< HEAD
/*
* FIZZBUZZ
* author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com> 
* github: https://github.com/razdeep
*/
=======
/**
 * FIZZBUZZ
 * author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com> 
 * github: https://github.com/razdeep
 */
>>>>>>> master

#include<iostream>

using namespace std;

int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
<<<<<<< HEAD
        if( (i%5==0) && (i%3==0) )
=======
        if(i%15 == 0)
>>>>>>> master
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%5 == 0)
        {
            cout<<"Buzz"<<endl;
        }
        else if(i%3 == 0)
        {
            cout<<"Fizz"<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
