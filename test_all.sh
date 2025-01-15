#!/bin/bash
norminette ../c03/*/ft*.c
echo

for i in ex{00..02}
do
	echo "$i Compiling..."
	cc -Wall -Werror -Wextra $i/*.c ../c03/$i/*.c -o compile_$i
	echo "$i Compiled! Executing..."
	./compile_$i
	echo "$i Finished!"
	echo
done
