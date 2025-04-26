#include<iostream>
using namespace std;

void FizzBuzz(int n)
{
    cout<<" ---FizzBuzz---("<<n<<")---"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%5 ==0)
            cout<<"FizzBuzz";
        else if(i%3 == 0)
            cout<<"Fizz";
        else if(i%5 == 0)
            cout<<"Buzz";
        else
            cout<<i;
        cout<<endl;
    }
}
int main()
{
    int fizzbuzz = 20;
    FizzBuzz(fizzbuzz);
    return 0;
}
