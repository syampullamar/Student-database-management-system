#include"header.h"
int count(sll*ptr)
{
int c=0;
while(ptr)
{
c++;
ptr=ptr->next;
}
return c;
}

void sort_list(sll*ptr)
{
char op;
int i,j,c=count(ptr);
sll *p1=ptr,*p2,t;
if(c<2)
{
printf("Only one record present\n");
return;
}
printf("Enter\nN/n :sort with name\nP/p :sort with percentage\n");
scanf(" %c",&op);
if(op=='N'||op=='n')
{
for(i=0;i<c;i++)
{
p2=p1->next;
for(j=0;j<c-1-i;j++)
{
if(strcmp(p1->name,p2->name)>0)
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.percentage=p1->percentage;

p1->rollno=p2->rollno;
strcpy(p1->name,p2->name);
p1->percentage=p2->percentage;

p2->rollno=t.rollno;
strcpy(p2->name,t.name);
p2->percentage=t.percentage;
}
p2=p2->next;
}
p1=p1->next;
}
}
else if(op=='P'||op=='p')
{

int i,j,c=count(ptr);
for(i=0;i<c;i++)
{
p2=p1->next;
for(j=0;j<c-1-i;j++)
{
if(p1->percentage>p2->percentage)
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.percentage=p1->percentage;

p1->rollno=p2->rollno;
strcpy(p1->name,p2->name);
p1->percentage=p2->percentage;

p2->rollno=t.rollno;
strcpy(p2->name,t.name);
p2->percentage=t.percentage;
}
p2=p2->next;
}
p1=p1->next;
}

}


}
