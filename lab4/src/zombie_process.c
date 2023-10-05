#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main ()
{
  pid_t child_pid;

  child_pid = fork ();
  if (child_pid > 0) {
    sleep (60);
  }
  else {
    printf("The child pid is %d",getpid());
    exit (0);
  }
  return 0;
}