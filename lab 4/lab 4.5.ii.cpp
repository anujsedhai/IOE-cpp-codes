/*@Question:Write a program that illustrate the following relationship and comment the relationships
            ii) const_object.const_mem_function
@Author: Anuj Sedhai
@BCT 075 batch, Thapathali campus
@written on 18/12/2019
@NOTE:The program will compile because the constant object of class cls1 can invoke only constant function i.e show()
*/
#include<iostream>
using namespace std;
class cls1
{
    int a,b;
public:
    cls1(int x, int y)
    {
        a=x;
        b=y;
    }
    void show() const
    {
        cout<<"a="<<a<<"\tb="<<b<<endl;
    }
};
int main()
{
    const cls1 o1(3,4),o2(7,9);
    cout<<"For o1:\t"<<endl;
    o1.show();
    cout<<"For o2:\t"<<endl;
    o2.show();
}

