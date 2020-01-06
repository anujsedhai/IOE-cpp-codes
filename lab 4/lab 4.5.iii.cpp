/*@Question:Write a program that illustrate the following relationship and comment the relationships
            iii) non_const_object.non_const_mem_function
@Author: Anuj Sedhai
@BCT 075 batch, Thapathali campus
@written on 18/12/2019
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
    void add()
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
    const cls1 o1(3,4);
    o1.add();
    o1.show();
}
