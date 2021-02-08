CC=gcc

stack.exe: stack.o main.o
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $<

clean:
	rm *.o *.exe