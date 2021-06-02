rm mainlibft.a
cd ..
make 1> /dev/null
cd alientest_libft
gcc -c -Wall -Wextra -Werror srcs/*.c
ar rc mainlibft.a *.o > /dev/null
rm -rf *.o
gcc -Wall -Wextra -Werror -fsanitize=address mainlibft.a ../libft.a && ./a.out

rm mainlibft.a
cd ..
make bonus 1> /dev/null
cd alientest_libft
gcc -c -Wall -Wextra -Werror srcs_bonus/*.c
ar rc mainlibft.a *.o > /dev/null
rm -rf *.o
gcc -Wall -Wextra -Werror -fsanitize=address mainlibft.a ../libft.a && ./a.out

rm a.out
rm mainlibft.a