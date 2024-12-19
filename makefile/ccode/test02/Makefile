#world.out:hello.o main.o
#	cc -o world.out hello.o main.o

#clean:
#	rm -f *.o world.out


#TARGET = world.out

#$(TARGET):hello.o main.o
#	cc -o $(TARGET) hello.o main.o

#clean:
#	rm -f *.o $(TARGET)

#OBJS = hello.o main.o
#TARGET = world.out

#$(TARGET):$(OBJS)
#	cc -o $(TARGET) $(OBJS)

#clean:
#	rm -f *.o $(TARGET)


#OBJS = $(patsubst %.c, %.o, $(wildcard *.c))
#TARGET = world.out

#$(TARGET):$(OBJS)
#	cc -o $(TARGET) $(OBJS)

#clean:
#	rm -f *.o $(TARGET)



#OBJS = $(patsubst %.c, %.o, $(wildcard *.c))
#TARGET = world.out

#$(TARGET):$(OBJS)
#	$(CC) -o $(TARGET) $(OBJS)

#clean:
#	rm -f *.o $(TARGET)




world.out: hello.o main.o
	@echo '$$@ = $@'
	@echo '$$< = $<'
	@echo '$$^ = $^'
	cc -o $@ $^

clean:
	rm -f *.o world.o

