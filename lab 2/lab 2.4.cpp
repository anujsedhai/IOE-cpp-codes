/*Write a function that passes two temperatures by reference and sets the larger of the two
numbers to 100 by using return by reference*/

#include<iostream>
using namespace std;
int &ma(int &,int &);
int main()
{
    int t1,t2;
    t1=95;
    t2=94;
    int &a=t1;
    int &b=t2;
    cout<<"Previous value of t1 and t2 are:\t"<<t1<<'\t'<<t2<<endl;
    ma(a,b)=100;
    cout<<"after value of t1 and t2 are:\t"<<t1<<'\t'<<t2<<endl;


}
int &ma(int &x,int &y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
