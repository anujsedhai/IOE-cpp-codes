/*@Question:Compare the two object that contains integer values that demonstrate the overloading of
            equality (==), less than (<), greater than (>), not equal (!=),greater than or equal to (>=) and less
            than or equal to(<=) operators.
@Author: Anuj Sedhai
@BCT 075 batch, Thapathali campus
@written on 7/1/2020
*/


#include<iostream>
using namespace std;
class op
{
    int num;
public:
    op(int i)
    {
        num=i;
    }
    void operator == (op o2)
    {
        cout<<"For "<<num<<" == "<<o2.num<<endl;
        if(num==o2.num)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    void operator < (op o2)
    {
        cout<<"For "<<num<<" < "<<o2.num<<endl;
        if(num<o2.num)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    void operator > (op o2)
    {
        cout<<"For "<<num<<" > "<<o2.num<<endl;
        if(num>o2.num)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    void operator != (op o2)
    {
        cout<<"For "<<num<<" != "<<o2.num<<endl;
        if(num!=o2.num)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    void operator >= (op o2)
    {
        cout<<"For "<<num<<" >= "<<o2.num<<endl;
        if(num>=o2.num)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    void operator <= (op o2)
    {
        cout<<"For "<<num<<" <= "<<o2.num<<endl;
        if(num<=o2.num)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }

};
int main()
{
    op o1(1),o2(2);
    o1==o2;
    o1>o2;
    o1<o2;
    o1!=o2;
    o1>=o2;
    o1<=o2;
}
