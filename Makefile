target=user_input

obj_file=$(program_name).o
compile=$(program_name).c
CC=gcc

compile:
	$(CC) $(compile) -o $(obj_file)
	./$(obj_file)

.PHONY: clean all

clean:
	rm -f $(obj_file)

push:
	git add .
	git add Makefile
	git commit -a -m "mama"
	git push