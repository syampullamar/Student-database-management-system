$(CC)=gcc
final: main.o stud_show.o stud_save.o stud_mod.o stud_del.o stud_add.o sort_list.o reverse_links.o del_all.o 
	$(CC) main.o stud_show.o stud_save.o stud_mod.o stud_del.o stud_add.o sort_list.o reverse_links.o del_all.o -o final
main.o: main.c header.h
	$(CC) -c main.c
stud_show.o: stud_show.c header.h
	$(CC) -c stud_show.c
stud_save.o: stud_save.c header.h
	$(CC) -c stud_save.c
stud_mod.o: stud_mod.c header.h
	$(CC) -c stud_mod.c
stud_del.o: stud_del.c header.h
	$(CC) -c stud_del.c
stud_add.o: stud_add.c header.h
	$(CC) -c stud_add.c
sort_list.o: sort_list.c header.h
	$(CC) -c sort_list.c
reverse_links.o: reverse_links.c header.h
	$(CC) -c reverse_links.c
del_all.o: del_all.c header.h
	$(CC) -c del_all.c
clean:
	rm *.o final











