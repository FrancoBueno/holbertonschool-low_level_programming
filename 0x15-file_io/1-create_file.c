#include "main.h"
/**
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int f, countl, k;
	char *buffersize;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		f = open(filename, O_CREAT, 0600);
		if (f == -1)
			return (-1);

	}
	for (countl = 0; text_content[countl] != '\0'; countl++)
		;
	buffersize = malloc(sizeof(char) * countl);

	if (buffersize == NULL)
		return (-1);

	k = write(f, text_content, countl);
	if (k == 1)
		return (-1);
	close(f);
	free(buffersize);
	return (1);
}
