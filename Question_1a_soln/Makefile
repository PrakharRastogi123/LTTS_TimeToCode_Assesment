
PROJECT = prakhar
SRC= src\add.c src\sub.c src\mult.c src\div.c

INC= -Iinc -Iunity

TEST = test\test_complex_calculator.c\
unity\unity.c

$(PROJECT):all

.PHONY: run clean test doc all cover size sani

sani: $(SRC) $(TEST)
	gcc $(INC) $(TEST) $(SRC) -o $(PROJECT).out -fsanitize=address -g

size: $(SRC) $(TEST)
	gcc $(INC) $(TEST) $(SRC) -o $(PROJECT).out
	size ./$(PROJECT).out

cover: $(SRC) $(TEST)
	gcc -fprofile-arcs -ftest-coverage $(INC) $(SRC) $(TEST) -o $(PROJECT).out
	./$(PROJECT).out

all:$(SRC) $(TEST)
	gcc $(INC) $(TEST) $(SRC) -o $(PROJECT).out
	
test:$(SRC) $(TEST)
	gcc $(INC) $(TEST) $(SRC) -o $(PROJECT).out 
	./$(PROJECT).out

run: $(PROJECT)
	./$(PROJECT).out

clean:
	rm $(PROJECT).out