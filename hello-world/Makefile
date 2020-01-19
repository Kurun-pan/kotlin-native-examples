COMPILER := kotlinc-native

FLAGS = -Werror
LIBS = 

SRC = main.kt
OBJ = hello
TARGETS = hello

all: $(TARGETS)

hello: $(SRC)
	$(COMPILER) -o $(OBJ) $(SRC) $(FLAGS) $(LIBS) 

clean:
	rm -f *.kexe
