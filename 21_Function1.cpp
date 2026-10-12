#include<iostream.h>
#include<conio.h>
int add();

int main()
{
clrscr();
add();
getch();
return 0;
}

int add()
{
int a,b,c;
cout<<"Enter any two numbers:"<<a<<b;
c=a+b;
cout<<"Sum="<<c;
return c;
}