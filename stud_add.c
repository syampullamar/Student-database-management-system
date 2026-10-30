#include"header.h"
int rollno(sll*ptr)
{
	int c=1;
	sll *temp;
	while(1)
	{
		temp=ptr;
		while(temp)
		{
			if(temp->rollno==c)
				break;
			temp=temp->next;		
		}
		if(temp==0)
			return c;
		c++;
	}
}

void stud_add(sll**ptr)
{
sll *new=malloc(sizeof(sll));
sll *pos;
printf("Enter name,percentage:\n");
new->rollno=rollno(*ptr);
scanf("%s %f",new->name,&new->percentage);
if(*ptr==0||new->rollno<(*ptr)->rollno)
{
new->next=*ptr;
*ptr=new;
}
else
{
pos=*ptr;
while((pos->next!=0)&&(new->rollno>pos->next->rollno))
pos=pos->next;
new->next=pos->next;
pos->next=new;
}

}







