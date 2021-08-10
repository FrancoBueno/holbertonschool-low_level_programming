#include "main.h"
#include <string.h>
/**
 *_strlen - string lenghta asdkjajskd
 *@str: asdasdas
 *Return: retusandasnda
 */
size_t _strlen(char *str)
{
	size_t pos = 0;

	while (str[pos])
		pos++;
	return (pos);
}
/**
 *append_text_to_file - asdasdas
 *@filename: name of file asdka
 *@text_content: content of the file letters
 *Return: append to tesaxasfakfsao
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t strl = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);
	strl = write(fl, text_content, _strlen(text_content));

	if (strl == -1)
		return (-1);

	close(fl);
	return (1);
		}
