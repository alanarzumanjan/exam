TARGET=user_input

obj_file=$(TARGET).o
compile=$(TARGET).c
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