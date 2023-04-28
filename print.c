#include <stdio.h>

int my_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = vprintf(format, args);

	va_end(args);
	return (count);
}
int main(void)
{
	int num = 42;
	char str[] = "Hello, world!";

	int count = my_printf("The answer is %d. %s\n", num, str);

	printf("Number of characters printed: %d\n", count);

	return (0);
}
