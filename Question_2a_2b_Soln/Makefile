# comments

#Target : dependancy
#<TAB>Command

var=output.exe
src =src\open.c src\read.c src\free.c src\sort.c main.c
src_test=test\test.c unity\unity.c
INC_var=inc
$(var):$(src)
	gcc $(src) -I$(INC_var) -o $(var)

run:$(var)
	$(var)

static_check:
	cppcheck --enable=all src/ .c inc/ .c

runtest:
	gcc -I$(INC_var) -I unity $(src_test) $(src) -o test_result.exe
	test_result.exe


clean:
	del /q *.exe