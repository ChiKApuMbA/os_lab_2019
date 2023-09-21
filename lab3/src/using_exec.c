#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char *argv[]){
    pid_t pid = fork();
    if(pid == 0){
        execvp("./sequential_min_max", argv);
        perror("execvp");
        exit(EXIT_FAILURE);
    }else if(pid > 0){
        printf("Запущено новое приложение с PID = %d\n",pid);

        int status;
        wait(&status);
        if(WIFEXITED(status)){
            printf("Приложение завершилось с кодом: %d\n", WEXITSTATUS(status));
        }else{
            printf("Приложение завершилось некорректно\n");
        }
    }else{
        perror("fork");
    }
    return 0;
}