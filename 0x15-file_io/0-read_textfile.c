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
	int fn;
	char *ch;
	ssize_t i, j;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
	{
		return (0);
	}
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		close(fn);
		return (0);
	}
	i = read(fn, ch, letters);
	close(fn);
	if (i == -1)
	{
		free(ch);
		return (0);
	}
	j = write(STDOUT_FILENO, ch, i);
	free(ch);
	if (i != j)
	{
		return (0);
	}
	return (j);
}
