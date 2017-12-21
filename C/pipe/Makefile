CFLAGS = gcc -g
OBJ = pipe.o drivEx.o errExit.o

# Automatic substitution using suffix rules to
# make .o files from either .c or .cpp files
%.o: %.c
	${CFLAGS} -c $< 

%.o: %.cpp
	${CFLAGS} -c $<

# Build p1 based on the required .o files
pell: ${OBJ}
	${CFLAGS} -o pell ${OBJ}

clean:
	rm ${OBJ} pell

