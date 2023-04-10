#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file with the specified name and
 * writes a string to it
 * @filename: name of the file to create
 * @text_content: string to write to the file, or NULL to create an empty file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int output;
	int len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		output = write(fd, text_content, len);
		if (output == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
