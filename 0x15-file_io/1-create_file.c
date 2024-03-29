#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fopen, fwrite, len = 0;

	if (filename == NULL)
		return (-1);

	fopen = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fopen < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fwrite = write(fopen, text_content, len);
	close(fopen);
	if (fwrite < 0)
		return (-1);
	return (1);
}
