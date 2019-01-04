#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<alloc.h>
struct node{
int data;
struct node *next;
}*START=NULL,*ptr,*par,*temp;
int p;
void insert(int d){
temp=(struct node *)malloc(sizeof(struct node));
temp->data=d;
temp->next=NULL;
if(START==NULL)
START=temp;
else{
p=0;
ptr=START;
while(ptr->next!=NULL){
p++;
ptr=ptr->next;
}
ptr->next=temp;
p=p+2;
}
}
void josephus(int num){
int n=p;
ptr=START;
par=START;
par=ptr;
while(n>1){
for(int i=1;i<num-1;i++){
ptr=ptr->next;
if(ptr->next==NULL){
ptr->next=START;
}
}
while(par->next!=ptr){
par=par->next;
if(par->next==NULL)
par->next=START;
}
par->next=ptr->next;
n--;
}
cout<<"The winner is : "<<par->data;
}
void main(){
clrscr();
int d,s,choice;
char yn;
do{
cout<<"1-Insert\n2-Josephus\nEnter the choice\n";
cin>>choice;
switch(choice){
case 1:
cout<<"Enter data\n";
cin>>d;
break;
case 2:
cout<<"Enter positions\n";
cin>>s;
break;
}
cout<<"Do you want more?(y/n)\n";
fflush(stdin);
cin>>yn;
}while(yn=='y');
getch();
}