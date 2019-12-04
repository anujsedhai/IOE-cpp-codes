/*Write a program to set a structure to hold a date (mm,dd and yy), assign values to the
members of the structure and print out the values in the format 11/28/2004 by function. Pass
the structure to the function*/

#include<iostream>
using namespace std;
struct miti
{
    int dd,mm,yy;
};
void disp(miti);

int main()
{
    miti m;
    m.dd=10;
    m.mm=15;
    m.yy=2019;
    disp(m);
}
void disp(miti d)
{
    cout<<d.mm<<'/'<<d.dd<<'/'<<d.yy<<endl;
}


