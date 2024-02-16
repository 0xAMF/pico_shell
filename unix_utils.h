#ifndef __UNIX_UTILS_H
#define __UNIX_UTILS_H

// Macros section
#define DBG

// includes section
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef enum {
  RET_OK = 0,
  RET_NOK = -1,
  EXIT = 1
}ret_status_t;

typedef enum {
  OUTPUT,
  INPUT 
} IO_FLAG;

typedef  enum {
  INTERNAL, 
  EXTERNAL
} CMD_TYPE;

// mv function 
ret_status_t my_mv(char *src, char *dest);  
// pwd function
void my_pwd(char **cwd);
// echo function
ret_status_t my_echo(char **argv, int argc);
// cd function
ret_status_t cd(char *dir);

#endif // !__UNIX_UTILS_H
