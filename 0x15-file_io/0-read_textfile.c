#include "main.h"

/**
  * read_textfile - function reads a text file and prints it to,
  * the POSIX standard output
  * @filename: pointer to the filename
  * @letters: number of letters that should be read and printed
  * Return: actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fn;
	char ch[1024];

	if (filename == NULL)
	{
		return (0);
	}

	fn = fopen(filename, "r");
	printf("%s", fgets(ch, letters, fn));
	fclose(fn);
	return (letters);
}
