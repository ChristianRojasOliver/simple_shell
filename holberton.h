#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/stat.h>


/******** env_func **********/
void env_exit(char *buffer, char **args, char **env);
void _error(char **argv, char *arg, int amt);

/******** free_func *********/
void free_arr(char **arr);
void free_process(char *buffer, char **args);

/******** help_func *********/
unsigned int _strlen(char *buffer);
char **_strtok(char *str);
unsigned int count_args(char *star);
char *_strcpy(char *dest, char *src, int amt);
int _atoi(char *arg);

/******** path_func **********/
void path_handle(char **args, char *buffer, char **env, char **argv, int amt);

/******** process_func *******/
void _fork(char **args, char **argv, char **env, char *buffer, int amt);
void exitcmd(char *buffer, char **args);

/***** Missing func ******/
char **env_arr(char *cmd, char **environ);
unsigned int dir_check(char *path);
char *_env(const char *key, char **environ);
void env_cmd(char **environ);
char *_cmdcpy(char *dest, char *src, char *cmd, int amt, int count);
char *_cpyarg(char *dest, const char *src, int n);
unsigned int _envlen(const char *name);
int _strcmp(char *s1, char *s2);

#endif /* HOLBERTON_H_ */
