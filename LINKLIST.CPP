#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<alloc.h>
struct node{
int data;
struct node *next;
}*START=NULL,*temp,*ptr;
void insert(int d){
temp=(struct node *)malloc(sizeof(struct node));
temp->data=d;
temp->next=NULL;
if(START==NULL)
START=temp;
else{
ptr=START;
while(ptr->next!=NULL){
ptr=ptr->next;
}
ptr->next=temp;
}
}
void show(int p){
int i=1;
if(START==NULL)
cout<<"List is empty";
else{
ptr=START;
while(i<p&&ptr!=NULL){
ptr=ptr->next;
i++;
}
if(ptr==NULL)
cout<<"Enter the right position";
else
cout<<ptr->data<<"\n";
cout<<ptr->next->data;
}
}
void main(){
clrscr();
int mydata,choice,pos;
char yn;
do{
cout<<"1)Insert\n2)Show\nEnter your choice\n";
cin>>choice;
switch(choice){
case 1:
cout<<"Enter the data";
cin>>mydata;
insert(mydata);
break;
case 2:
cout<<"Enter the position";
cin>>pos;
show(pos);
break;
}
cout<<"Do you want more?(y/n)";
fflush(stdin);
cin>>yn;
}
while(yn=='y');
getch();
}