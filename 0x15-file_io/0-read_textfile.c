#include "main.h"
/**
 *read_textfile - read the text of the file selected
 *@filename: name of file
 *@letters: characters to print
 *Return: n3 asdas
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, n2, n3;
	char *buffersize;

	if (filename == NULL)
		return (0);
	buffersize = malloc(sizeof(char) * letters);
	if (buffersize == NULL)
		return (0);

	n = open(filename, O_RDONLY);
	n2 = read(n, buffersize, letters);
	n3 = write(STDOUT_FILENO, buffersize, n2);

	if (n == -1 || n2 == -1 || n3 == -1 || n3 != n2)
	{
		free(buffersize);
		return (0);
	}
	free(buffersize);
	close(n);
	return (n3);
}
