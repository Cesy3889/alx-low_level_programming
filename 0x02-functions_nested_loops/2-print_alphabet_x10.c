#include "main.h"
/**
 * main -  function that prints 10 times the alphabet, in lowercase
 *
 * Description :  function that prints 10 times the alphabet, in lowercase
 *
 * Return void
 */
void print_alphabet_x10(void)
{
	int count;
	char alphabet;

	for (count = 0; count < 10; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
