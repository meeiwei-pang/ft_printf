#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include "ft_printf.h"

int	main(void)
{
	int	ft_count;
	int	printf_count;

	printf("========== BASIC ==========\n");

	ft_count = ft_printf("Hello world!\n");
	printf_count = printf("Hello world!\n");
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	ft_count = ft_printf("char: %c\n", 'A');
	printf_count = printf("char: %c\n", 'A');
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	ft_count = ft_printf("string: %s\n", "Hello");
	printf_count = printf("string: %s\n", "Hello");
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	printf("========== NUMBERS ==========\n");

	ft_count = ft_printf("signed: %d\n", 42);
	printf_count = printf("signed: %d\n", 42);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	ft_count = ft_printf("negative: %i\n", -42);
	printf_count = printf("negative: %i\n", -42);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	ft_count = ft_printf("unsigned: %u\n", 4294967295u);
	printf_count = printf("unsigned: %u\n", 4294967295u);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	printf("========== HEX ==========\n");

	ft_count = ft_printf("hex: %x\n", 42);
	printf_count = printf("hex: %x\n", 42);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	ft_count = ft_printf("HEX: %X\n", 42);
	printf_count = printf("HEX: %X\n", 42);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	ft_count = ft_printf("hex zero: %x\n", 0);
	printf_count = printf("hex zero: %x\n", 0);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	printf("========== POINTER ==========\n");

	int	x = 42;

	ft_count = ft_printf("pointer: %p\n", &x);
	printf_count = printf("pointer: %p\n", &x);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	ft_count = ft_printf("NULL pointer: %p\n", NULL);
	printf_count = printf("NULL pointer: %p\n", NULL);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	printf("========== NULL STRING ==========\n");

	ft_count = ft_printf("NULL string: %s\n", NULL);
    printf_count = -1;;;
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	printf("========== LIMITS ==========\n");

	ft_count = ft_printf("INT_MIN: %d\n", INT_MIN);
	printf_count = printf("INT_MIN: %d\n", INT_MIN);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	ft_count = ft_printf("INT_MAX: %d\n", INT_MAX);
	printf_count = printf("INT_MAX: %d\n", INT_MAX);
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	printf("========== PERCENT ==========\n");

	ft_count = ft_printf("100%% completed\n");
	printf_count = printf("100%% completed\n");
	printf("ft_printf count: %d | printf count: %d\n\n",
		ft_count, printf_count);

	return (0);
}