#include "main.h"

/**
  * create_file - function to create a file
  * @filename: name of file to be created
  * @text_content: pointer to string
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fn, i, stat;

	if (filename == NULL)
	{
		return (-1);
	}

	fn = open(filename, O_CREAT | O_WRONLY | S_IWUSR | O_TRUNC, S_IRUSR);

	if (fn == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			stat = write(fn, text_content, i);
			if (stat == -1)
			{
				return (-1);
			}
		}
	}
	close(fn);
	return (1);
}
