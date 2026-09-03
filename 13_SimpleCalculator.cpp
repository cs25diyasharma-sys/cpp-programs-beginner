#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int n1,n2,result;
char op;
cout<<"Enter any two numbers";
cin>>n1>>n2;
switch(op)
{
case '+':
result=n1+n2;
cout<<"Sum"<<result;
break;
case'-':
result=n1-n2;
cout<<"Difference:"<<result;
break;
case'*':
result=n1*n2;
cout<<"Product:"<<result;
break;
case'/':
result=n1/n2;
cout<<"Remainder:"<<result;
break;
default:
cout<<"Invalid Input";
break;
}
getch();
return 0;
}