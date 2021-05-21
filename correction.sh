rm mainlibft.a
cd ..
make
cd alientest_libft
gcc -c -Wall -Wextra -Werror -g3 srcs/*.c
ar rc mainlibft.a *.o
rm -rf *.o
gcc -Wall -Wextra -Werror -g3 -fsanitize=address mainlibft.a ../libft.a && ./a.out

rm a.out
rm mainlibft.a
