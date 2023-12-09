#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * exit_bul - Exit Statue Shell
 * @cmd: Parsed Command
 * @input: User Input
 * @argv:Program Name
 * @c:Excute Count
 * Return: Void (Exit Statue)
 */
void  exit_bul(char **cmd, char *input, char **argv, int c);
int _isalpha(int c);
int _atoi(char *s);
void _prerror(char **argv, int c, char **cmd);

#endif
