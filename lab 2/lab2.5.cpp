/*Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the
employee salary. Use inline function to display the net payment to the employee by the company.*/

#include<iostream>
using namespace std;
float net(int);
int main()
{
    cout<<"Enter your salary:\t"<<endl;
    int s;
    cin>>s;
    cout<<net(s);

}
inline float net(int a)
{
    return(a-(a*0.1));
}
