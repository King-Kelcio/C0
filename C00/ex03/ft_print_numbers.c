#include <unistd.h>

void ft_print_numbers(void)
{
	for(int a=0; a<=10; a++)
	{
		char n = a + '0';
		write(1, &n, 1);
	}
}

int main(void)
{
	ft_print_numbers();
}
