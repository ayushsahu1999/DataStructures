#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<alloc.h>
struct node{
int data;
struct node *left;
struct node *right;
}*START=NULL,*ptr,*par,*temp;
void insertbst(int d)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=d;
temp->left=NULL;
temp->right=NULL;
if(START==NULL){
START=temp;
}
else{
par=NULL;
ptr=START;
while(ptr!=NULL){
if(d<ptr->data){
par=ptr;
ptr=ptr->left;
}
else{
par=ptr;
ptr=ptr->right;
}
}
}
if(d<par->data)
temp=par->left;
else
temp=par->right;
}
void preorder(struct node *p){
if(p!=NULL){
cout<<p->data;
preorder(p->left);
preorder(p->right);
}
}
void inorder(struct node *p){
inorder(p->left);
cout<<p->data;
inorder(p->right);
}
void postorder(struct node *p){
if(p!=NULL){
postorder(p->left);
postorder(p->right);
cout<<p->data;
}
}
void main(){
clrscr();
int mydata,choice;
char yn;
do{
cout<<"1-Insertion\n2-Prefix\n3-Infix\n4-Postfix\n";
cout<<"Enter the choice";
cin>>choice;
switch(choice){
case 1:
cout<<"\nEnter the data";
cin>>mydata;
insertbst(mydata);
break;
case 2:
preorder(START);
break;
case 3:
inorder(START);
break;
case 4:
postorder(START);
break;
}
cout<<"Do you want more?(y/n)";
fflush(stdin);
cin>>yn;
}
while(yn=='y'||yn=='Y');
getch();
}