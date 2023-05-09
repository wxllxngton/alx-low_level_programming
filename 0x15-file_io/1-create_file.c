#include "main.h"

/**
 * create_file - creates a file with the given name and writes the given
 *               text content to it
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
 
int create_file(const char *filename, char *text_content)
{
	int fd, ret_val, text_len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[text_len])
			text_len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		ret_val = write(fd, text_content, text_len);
		if (ret_val == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
