#include"header.h"
void del_all(sll**ptr)
{
sll *del=*ptr;
if(*ptr==0)
{
printf("no records present\n");
return;
}
while(del)
{
*ptr=del->next;
free(del);
del=*ptr;
}

}




