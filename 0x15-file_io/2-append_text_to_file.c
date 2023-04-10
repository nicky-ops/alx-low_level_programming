#include "main.h"
#include <string.h>
/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file
  * @text_content: pointer to string to be appended to a file
  * Return: 1 on success or -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t i = 0;
	int fn;

	if (!filename)
	{
		return (-1);
	}
	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn < 0)
	{
		return (-1);
	}
	if (text_content)
	{

		i = write(fn, text_content, strlen(text_content));
	}
	close(fn);
	if (i < 0)
	{
		return (-1);
	}
	return (1);
}

