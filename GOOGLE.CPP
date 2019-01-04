#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;
char reverse(char);
int main()
{
char s[20]="";
char s1[20]="";
cout<<"Enter String";
gets(s);
int x,y,z,i,j,q,k,n;
while(x<8)
{
i=0;q=0;x=0;
while(i<8)
{
z=0;
if(i<6)
{
if(s[i]=='-')
{
j=1;
while(j<k){
if(s[i+j]=='-')
z=z+1;
j++;
}
}
}
if(i==7)
{
if(s[i]=='-')
{
y=1;
while(y<k){
if(s[i-y]=='+'){
q=q+1;
y++;
}
}
}
if(q==k-1){
y=0;
while(y<k){
s1[i-y]=reverse(s[i-y]);
s[i-y]=s1[i-y];
y++;
}
n=n+1;
}
if(z==k-1)
{
n=n+1;
i=i+3;
y=0;
while(y<k){
s1[y]=reverse(s[y]);
s[y]=s1[y];
y++;
}
}
else
i++;
if(s[i-1]=='+')
x=x+1;
if(x==8)
break;
}
}
}
if(x==8)
cout<<n;
else
cout<<"Impossible";
return 0;
}
char reverse(char ch)
{
if(ch=='+')
{
ch='-';
return(ch);
}
else if(ch=='-')
{
ch='+';
return(ch);
}
}
