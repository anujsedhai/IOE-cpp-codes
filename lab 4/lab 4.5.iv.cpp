/*@Question:Write a program that illustrate the following relationship and comment the relationships
            iv) non_const_object.const_mem_function
@Author: Anuj Sedhai
@BCT 075 batch, Thapathali campus
@written on 18/12/2019
@NOTE:The program will not compile because the add() function is a constant function but in it's definition, the function is changing
      the value of sum (i.e data member) of the object which is calling the function.
*/
#include<iostream>
using namespace std;
class cls1
{
    int a,b,sum;
public:
    cls1(int x, int y)
    {
        a=x;
        b=y;
        sum=0;
    }
    void add() const
    {
        sum=a+b;
    }
    void show()
    {
        cout<<"Sum = "<<sum<<endl;
    }
};
int main()
{
    cls1 o1(3,4);
    o1.add();
    o1.show();
}

