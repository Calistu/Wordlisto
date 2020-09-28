CC=gcc
TARGET=wordlisto.c
RESULT=WordListo
INCLUDES=-I includes
CC_FLAGS=$(INCLUDES) -g 
OBJECTS=args.o canone.o criacao.o custom.o entradas.o exceptions.o limpacr.o prints.o trans.o

all: objects.o

args.o: src/args.c
	$(CC) src/args.c $(CC_FLAGS) -c

canone.o: src/canone.c
	$(CC) src/canone.c $(CC_FLAGS) -c
criacao.o: src/criacao.c
	$(CC) src/criacao.c $(CC_FLAGS) -c

custom.o: src/custom.c
	$(CC) src/custom.c $(CC_FLAGS) -c

entradas.o: src/entradas.c
	$(CC) src/entradas.c $(CC_FLAGS) -c

exceptions.o: src/exceptions.c
	$(CC) src/exceptions.c $(CC_FLAGS) -c

limpacr.o: src/limpacr.c
	$(CC) src/limpacr.c $(CC_FLAGS) -c

prints.o: src/prints.c
	$(CC) src/prints.c $(CC_FLAGS) -c

trans.o: src/trans.c
	$(CC) src/trans.c $(CC_FLAGS) -c

objects.o: $(OBJECTS)

	$(CC) $(OBJECTS) $(TARGET) -o $(RESULT) $(CC_FLAGS)

clear:
	rm *.o
