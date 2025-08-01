#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int *open_files(char *file_from, char *file_to, int *fd_array);
void print_error(int exit_code, char *file_name);

#endif
