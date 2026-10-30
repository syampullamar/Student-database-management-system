#include"header.h"
void stud_save(sll*ptr)
{
char op;
printf("S/s :save and exit\nE/e :exit without saving\n");
scanf(" %c",&op);
if(op=='s'||op=='S')
{
FILE *fp=fopen("student.dat","w");
while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
fclose(fp);
printf("Data saved in file(student.dat)\n");
}
else if(op=='E'||op=='e')
{
FILE *fp=fopen("student.dat","w");
fclose(fp);
}

}
