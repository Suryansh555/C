#include  <stdio.h>
#include  <stdlib.h>
#define MAX 10
int Array[MAX],n,pos=0,i;

void create_an_array()
{
printf("Enter the size of the array: \n");
scanf("%d",&n);
printf("Enter %d elements \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&Array[i]);
}
printf("\n Array Created \n");
}
//Diaplay the array elements with suitable headings////
void display(int a[])
{
printf("Position\t Value\n");
for(i=0;i<n;i++)
{
printf("\narray[%d] \t %d\n", i+1,a[i]);
}
}
// Insert an element at a given position////
void insert()
{
int element, pos;
char ch;
printf("Enter the Position and Element where the element to be inserted \n");
scanf("%d%d", &pos, &element);
if( pos < 0 || pos > n-1)
{
printf("Insertion is out of the boundary or filled");
}
else
{
for(i=n-1;i>=pos-1;i--)
Array[i+1]=Array[i];
    
Array[pos-1]=element;
n=n+1;
printf("Element is inserted!");
    }
}
// deletion at a given posdition////
void deletion()
{
int pos,val;
printf("Enter the position where element need to be deleted :");
scanf("%d", &pos);
if( pos < 0 || pos > MAX-1)
{
printf("Insertion is out of the boundary or filled");
}
else
{
val=Array[pos-1];
for(i=pos-1;i<n-1;i++)
{
Array[i]=Array[i+1];
}
n=n-1;
printf("Element %d is deleted from postion:%d \n",val, pos);
}
}

int main()
{
  int choice;
while(1)
{
printf("1.Create an Array\n2.Display\n3.Insert at position\n4.Delete at given position\n5.Exit\n");
printf("Enter Your Choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1: create_an_array();break;
case 2: display(Array);break;
case 3: insert(); break;
case 4: deletion(); break;
case 5:exit(0);
default: printf("\n\n\n\tEnter proper Choice....");
}
}

  return 0;
}
