#include <unistd.h>

/**
 * main - output text
 *
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar,2015_10_19\n", 59);
	return (1);
}
