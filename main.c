#include"header.h"
int main()
{
char op;
int c=0;
sll*headptr=0;
while(1)
{
printf("Enter option:\n\n\n");
printf("*******STUDENT RECORD MENU***********\n-------------------------------------\n\na/A :add new record\nd/D :delete a record\ns/S :show the list\nm/M :modify a record\nv/V :save\ne/E :exit\nt/T :sort the list\nl/L :delete all the records\nr/R :reverse the list\n\n\nEnter your choice:\n");
scanf(" %c",&op);
switch(op)
{
case 'a':stud_add(&headptr);break;
case 'A':stud_add(&headptr);break;
case 'd':stud_del(&headptr);break;
case 'D':stud_del(&headptr);break;
case 's':stud_show(headptr);break;
case 'S':stud_show(headptr);break;
case 'm':stud_mod(headptr);break;
case 'M':stud_mod(headptr);break;
case 'v':stud_save(headptr);break;
case 'V':stud_save(headptr);break;
case 't':sort_list(headptr);break;
case 'T':sort_list(headptr);break;
case 'l':del_all(&headptr);break;
case 'L':del_all(&headptr);break;
case 'r':reverse_links(&headptr);break;
case 'R':reverse_links(&headptr);break;
case 'e':exit(0);break;
case 'E':exit(0);
default:printf("unknown op\n");
}
}

}

