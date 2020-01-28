#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>
#include "getword.h"
#include "CHK.h"

#define MAXITEM 100 /* max number of words per line */
#define MAXSTORAGE (STORAGE*MAXITEM)    /* max amount of characters per command (STORAGE * MAXITEM) + NULL character */


int parse();
void prompt();
void sighandler();
void banban();
void pipehandler();