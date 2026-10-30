#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stu
{
int rollno;
char name[20];
float percentage;
struct stu *next;
}sll;

void stud_add(sll**ptr);
void stud_del(sll**ptr);
void stud_show(sll*ptr);
void stud_mod(sll*ptr);
void stud_save(sll*ptr);
void save(sll*ptr);
void sort_list(sll*ptr);
void del_all(sll**ptr);
void reverse_links(sll**ptr);

int rollno(sll*ptr);
int count(sll*ptr);
