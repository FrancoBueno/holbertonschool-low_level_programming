#include "main.h"
/**
 *create_file - create file and text included xD
 *@filename: name of the file xd
 *@text_content: text content
 *Return: 1 if is success , -1 if is fail
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
		return (1);
	}
	for (k = 0; text_content[k] != '\0'; k++)
		;
	buffersize = malloc(sizeof(char) * k);

	if (buffersize == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (f == -1)
		return (-1);

	countl = write(f, text_content, k);
	if (countl == 1)
		return (-1);
	close(f);
	free(buffersize);
	return (1);
}
