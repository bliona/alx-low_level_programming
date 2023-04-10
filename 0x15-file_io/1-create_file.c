#include "main.h"

/**
 * create_file - function that creates a file 
 * @filename: file name
 * @text_content: content to add in the file
 *
 * Return: 1 for success or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x = 0, retval = 1;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[x])
		x++;
	retval = write(fd, text_content, x);
	close(fd);
	if (retval == -1 || retval != x)
		return (-1);
	return (1);
}
