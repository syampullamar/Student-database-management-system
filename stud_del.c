#include"header.h"
void stud_del(sll**ptr)
{
	sll *del=*ptr,*prev;
	sll *del1=*ptr,*t=*ptr;
	sll *prev1,*a=*ptr;
	int rc=0,f1=0,roll,fr=0,f=0,nroll;
	char name[20];
	char op;
	printf("R/r :enter roll to del\nN/n :enter name to del\n");
	scanf(" %c",&op);
	if(op=='r'||op=='R')
	{
		printf("Enter rollno:\n");
		scanf("%d",&roll);
		while(del)
		{
			if(del->rollno==roll)
			{fr=1;
				if(del==*ptr)
				{
					*ptr=del->next;
					free(del);
				}
				else
				{
					prev->next=del->next;
					free(del);
					del=prev;
				}
			}
			prev=del;
			del=del->next;
		}
		if(fr==0)
			printf("Not present\n");
	}

	else if(op=='N'||op=='n')
	{
		printf("Enter name:\n");
		scanf("%s",name);
		while(t)
		{
			if(strcmp(t->name,name)==0)
			{
				printf("%d %s %f\n",t->rollno,t->name,t->percentage);
				f++;

			}
			t=t->next;
		}
		if(f==1)
		{
			while(del)
			{
				if(strcmp(del->name,name)==0)
				{

					if(del==*ptr)
					{
						*ptr=del->next;
						free(del);
					}
					else
					{
						prev->next=del->next;
						free(del);
						del=prev;
					}
				}
				prev=del;
				del=del->next;
			}
                    printf("Node deleted\n");
		}

		else if(f>1)
		{
			del1=*ptr;prev1=0;
			printf("Enter rollno of that particular student:\n");
			scanf("%d",&nroll);
			while(a)
			{
				if(a->rollno==nroll)
					rc++;
				a=a->next;
			}

			if(rc>0)
			{
				while(del1)
				{
					if(del1->rollno==nroll&&(strcmp(del1->name,name)==0))
					{
						f1=1;
						if(del1==*ptr)
							*ptr=del1->next;
						else
							prev1->next=del1->next;
						free(del1);
					}
					prev1=del1;
					del1=del1->next;
				}
			}

				if(f1==0)
			{
				printf("rollno not found\n");
				return;
			}
          printf("Node deleted\n");
	}
else
{
printf("Name not found\n");
return;
}
}

}
