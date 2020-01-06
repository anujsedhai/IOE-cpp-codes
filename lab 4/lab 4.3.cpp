/*@Question:Write a class that can store Department ID and Department Name with constructors to
            initialize its members. Write destructor member in the same class and display the message
            "Object n goes out of the scope". Your program should be made such that it should show the
            order of constructor and destructor invocation.
@Author: Anuj Sedhai
@BCT 075 batch, Thapathali campus
@written on 18/12/2019
*/

#include<iostream>
using namespace std;
class depart
{
    string depart_id,depart_name;
    int c=0;
    public:
    depart(string id,string name)
    {
        depart_id=id;
        depart_name=name;
        c++;
        cout<<"Object"<<c<<" created"<<endl;

    }
    ~depart()
    {
        cout<<"Object"<<c<<" goes out of scope"<<endl;
        c--;
    }
};
int main()
{
    depart d1("A35","Computer"),d2("A36","Mechanical"),d3("A37","Architecture");
}
