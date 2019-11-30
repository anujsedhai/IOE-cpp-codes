#include<stdio.h>
#include<windows.h>
struct data
{
    char name[10];
    int marks;
};
int main()
{
    int NoOfStudents=3;
    int i;
    struct data std[NoOfStudents];
    for(i=0;i<NoOfStudents;i++)
    {
        printf("Enter name for student %d:\t",i+1);
        scanf("%[^\n]s",&std[i].name);
        printf("Enter marks for C:\t");
        scanf("%d",&std[i].marks);
    }
    system("cls");
    for(i=0;i<NoOfStudents;i++)
    {
        printf("Name: %s\n",std[i].name);
        printf("Marks in C: %d\n",std[i].marks);
    }


}
