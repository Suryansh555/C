#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#define MAX 5 
int Stack[MAX], top=-1; 
void push() 
{ 
int ele; 
if(top<MAX-1) 
{ 
printf("Enter the value to be inserted into the stack :"); 
scanf("%d",&ele); 
Stack[++top] = ele; 
} 
else 
printf("Stack is Full"); // overflow condition 
return; 
} 
void pop() 
{ 
if(top!=-1) 
{ 
printf("the element deleted from the stack is : %d",Stack[top--]); 
} 
else 
printf("Stack is Empty"); //Underflow condition 
return; 
} 
void Palindrome() 
{ 
int i=0, len=top,flag=0,j=top; 
int stack1[5];
 
while (j!=-1) 
{ 
 stack1[i]=Stack[j]; 
 i++; 
 j--; 
} 
for (i = 0; i < len; i++) 
{ 
 if (stack1[i] != Stack[i]) 
 { flag=1; 
break; 
 } 
} 
if(flag==0) 
 printf("It is a Palindrome \n"); 
else 
 printf("It is not a palindrome"); 
} 
void display() 
{ 
int i; 
if(top==-1) 
{ 
printf("stack is empty"); 
} 
else 
{ 
printf("\nElements in the stack are \n"); 
for(i=0;i<=top;i++) 
printf("%d\n",Stack[i]); 
} 
return; 
} 
void main() 
{ 
int choice;  
while(1) 
{ 
printf("\n\n\n\t1.push...\t2.pop..\t3.palindrome...\t4.Display...\t5.Exit..."); printf("\n\n\n\tEnter Your Choice: "); 
scanf("%d",&choice); 
switch(choice) 
{

 case 1: push();break; 
 case 2: pop();break; 
 case 3: Palindrome(); break; 
 case 4: display(); break; 
 case 5:exit(0); 
 default: printf("\n\n\n\tEnter proper Choice...."); 
} 
} 
} 
