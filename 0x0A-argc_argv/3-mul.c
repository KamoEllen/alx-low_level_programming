#include <stdio.h>
#include <stdlib.h>
/**
  * main - a program that multiplies two numbers.
  * @argc: argument count
  * @argv: argument vector
  * Return: error and 1 if failure
  */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
