#include"header.h"
void stud_mod(sll*ptr)
{
	sll *s=ptr;
	int rc=0;
	char op;
	printf("Enter which record to search for modification\nR/r :to search a rollno\nN/n :to search a name\nP/p :percentage based\n");
	scanf(" %c",&op);
	if(op=='r'||op=='R')
	{
		int roll;
		printf("Enter rollno:\n");
		scanf("%d",&roll);
		while(s)
		{
			if(s->rollno==roll)
			{rc=1;
				int nroll;
				char nname[20];
				int npercentage;
				printf("Enter new name,percentage:\n");
				scanf("%s %f",s->name,&s->percentage);
			}
			s=s->next;
		}
		if(rc==0)
		{
		printf("Roll no not present\n");
		return;
		}
	}

	else if(op=='N'||op=='n')
	{
		int c=0;
		int nroll;
		char name[20];
		printf("Enter name to search:\n");
		scanf("%s",name);
		sll *s=ptr,*n=ptr,*r=ptr;
		while(s)
		{
			if(strcmp(s->name,name)==0)
			{
				c++;
				printf("%d %s %f\n",s->rollno,s->name,s->percentage);
				nroll=s->rollno;
			}
			s=s->next;
		}

		if(c==0)
		{
			printf("Name not found\n");
			return;
		}

		if(c>1)
		{
			printf("Enter rollno of that particular node:\n");
			scanf("%d",&nroll);
		}
		int nc=0;
		while(r)
		{
			if((strcmp(r->name,name)==0)&&r->rollno==nroll)
				nc++;
			r=r->next;
		}
		if(nc==0)
		{
			printf("Wrong rollno\n");
			return;
		}
		
		else
		{
			while(n)
			{
				if(n->rollno==nroll)
				{
					printf("Enter new name,percentage to be updated\n");
					scanf("%s %f",n->name,&n->percentage);
				}
				n=n->next;
			}
		}
	}



	else if(op=='P'||op=='p')
	{
		int c=0,nc=0;
		int nroll;
		float nperc;
		printf("Enter percentage to search:\n");
		scanf("%f",&nperc);
		sll *s=ptr,*n=ptr;
		while(s)
		{
			if(s->percentage==nperc)
			{
				c++;
				printf("%d %s %f\n",s->rollno,s->name,s->percentage);
				nroll=s->rollno;
			}
			s=s->next;
		}

		if(c==0)
		{
			printf("Percentage not found\n");
			return;
		}
		if(c>1)
		{
			printf("Enter rollno of that particular node:\n");
			scanf("%d",&nroll);
		}
		while(n)
		{
			if(n->percentage==nperc && n->rollno==nroll)
			{
				nc++;
				if(nc>0)
				{
					printf("Enter new name,percentage to be updated\n");
					scanf("%s %f",n->name,&n->percentage);
				}
			}
			n=n->next;
		}
		if(nc==0)
		{
			printf("Wrong rollno \n");
			return;
		}
	}
}





