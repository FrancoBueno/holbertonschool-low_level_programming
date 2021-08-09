#include "main.h"
#include <string.h>
/**
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, ch, ca;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY, O_APPEND);
	if (fl == -1)
		return (-1);


	ch = strlen(text_content);
	ca = write(fl, text_content, ch);

	close(fl);
	if (ca != ch)
		return (-1);
	return (-1);
}
