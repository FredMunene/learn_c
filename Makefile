# a recursive expanded variable
#  define a variable ; assign command 'gcc' to CC
# CC = gcc

# hello : main.c
# 	${CC} main.c -o hello

# simply expanded variable

# 
.PHONY = all clean

CC := gcc
# CC := $(CC)

# define flags to be used
LINKERFLAG = -lm
#  $(wildcard pattern)
SRCS := $(wildcard *.c)

#substitution reference >> 'foo.c' becomes just 'foo'
BINS := $(SRCS:%.c=%)

# values in BINS are called as individual ragets
all: $(BINS)

%: %.o
	echo "Checking"
	$(CC) $(LINKERFLAG) $&lt; -o $@
# suppose foo is a value in $(BINS)
# foo: foo.o
# 	@echo "Checking..."
# 	gcc -lm foo.o -o foo

%.o: %.c
	echo "Creating object..."
	$(CC) -c $<
#creating foo.o 
# foo.o: foo.c
# 	@echo "Creating object.."
# 	gcc -c foo.c

clean: 
	@echo "Cleaning up..."
	rm -rvf *.o $(BINS)







# #defining all targets are not files
# .PHONY: all say_hello generate 


# #overriding default target
# #  .DEFAULT_GOAL := generate

# all: say_hello generate 
	


# #the default target 
# say_hello: #prerequisites placed here
# #the recipe uses prerequisites
# 	@echo "Hello World"

# #all(target, prerequisite,recipe) together make a rule 

# generate:
# 	@echo "Creating empty text files..."
# 	touch file-{1..10}.md

# clean:
# 	@echo "Cleaning up..."
# 	rm *.md