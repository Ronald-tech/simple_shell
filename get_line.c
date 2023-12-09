#include "shell.h"

int handle_builtin(char **cmd, int er)
{ 
	char line[MAX_LINE_LENGTH];
	char* args[MAX_ARGS];
	int status;

	while (1) {
		printf("shell> ");
		fgets(line, MAX_LINE_LENGTH, stdin);

		// tokenize the input
		int i = 0;
		args[i] = strtok(line, " \n");
		while (args[i] != NULL) {
			i++;
			args[i] = strtok(NULL, " \n");
		}
		args[i] = NULL;

		// handle built_in commands
		if (strcmp(args[0], "cd") == 0) {
			chdir(args[1]);
			continue;
		}
		else if (strcmp(args[0], "exit") == 0 ) {
			exit(0);
		}
	
		int check_cmd(char **cmd, char *input, char **argv)

		//create a child process and execute the command
		pid_t pid = fork();
		if (pid < 0) {
			perror("fork failed");
			exit(1);
		}
		else if (pid == 0){
			// child process
			execvp(args[0], args);
			perror("execvp failed");
			exit(1);
		}
		else {
			// parent process
			waitpid(pid, &status, 0);
		}
	}
	return 0;
}
