#include <studio.h>
#include "main.h"

/**
 *main - prints the name of the program
 *@argc: numberof arguments
 *@argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc __atribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

return (0);
}
