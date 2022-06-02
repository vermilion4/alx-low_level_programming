#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: name of the file to append to
 * @text_content: content to append to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, fwrite, size;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
for (size = 0; text_content[size] != '\0'; size++)
;
fwrite = write(fd, text_content, size);
if (fwrite == -1)
return (-1);
}
close(fd);
return (1);
}
