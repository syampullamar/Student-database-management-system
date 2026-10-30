#include"header.h"
#include<stdlib.h>
void reverse_links(sll**ptr)
{
if(*ptr==0)
{
printf("No records present\n");
return;
}
int c=count(*ptr);
if(c>1)
{
sll **arr=malloc(sizeof(sll *)*c);
sll *t=*ptr;
int i=0;
while(t)
{
arr[i++]=t;
t=t->next;
}
for(i=c-1;i>0;i--)
arr[i]->next=arr[i-1];

arr[0]->next=0;
*ptr=arr[c-1];
}

}
