#include<iostream.h>
#include<conio.h>
int main()
{
clrscr;
int x,y;
cout<<"Enter first number:";
cin>>x;
cout<<"Enter second number:";
cin>>y;
if(x>y)
 {
  cout<<"x is the largest number"<<endl;
 }
else if (y>x)
 {
  cout<<"y is the largest number"<<endl;
 }
else
 {
   cout<<"Both numbers are equal";
 }
getch();
return 0;
}