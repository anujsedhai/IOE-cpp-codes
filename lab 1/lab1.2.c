#include<stdio.h>
#include<string.h>
int main()

{
    char sent[] ="idea without execution is worthless";
    int i=0;
    while(*(sent+i)!='\0')
    {

        if((*(sent+i)=='c')!=1)
            i=i+1;
        else
            break;
    }
    printf("\n'c' letter is in %d position",++i);
}
