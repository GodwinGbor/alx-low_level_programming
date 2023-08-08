#include "main.h"

/**
 * append_text_to_file - Adjust the text at the end of the file.
 * @filename: From the pointer to the file to be named.
 * @text_content: How the string will be added to the end of the file.
 *
 * Return: What If the function fails or the filename is NULL - -1.
 *        If the file is not available the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
