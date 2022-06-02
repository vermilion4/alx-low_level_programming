#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read from the file
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer = malloc(letters);
ssize_t string_size;
ssize_t read_size;

if (filename == NULL)
return (0);
ssize_t fd = open(filename, O_RDONLY);

if (fd == -1)
{
return (0);
}

read_size = read(fd, buffer, letters);
if (read_size == -1)
{
return (0);
}

string_size = write(STDOUT_FILENO, buffer, read_size);
if (string_size == -1)
{
return (0);
}

close(fd);
free(buffer);

return (string_size);
}
