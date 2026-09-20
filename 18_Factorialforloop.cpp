#include<iostream.h>
#include<conio.h>
int main()
{
int n,i,fact;
clrscr();
cout<<"Enter any number:";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
getch();
return 0;
}