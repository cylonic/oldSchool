#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>


/*****************************************************************/
/*
        Wes Turner
	CS440
	Fall 2013
*/
/*****************************************************************/

/*
This is a basic shell with the following commands available

-cd <directory>
-clr
-dir <directory>
-echo
-pause
-quit

Use the 'help' command to get further info on each command.
*/





int tok(char input[], char *x){ 
/* this function tokenizes the input into an array, and then calls the appropriate function, or executes the proper instructions in place of a function */





	char toks[100][50]; 			/* array to collect individual strings */
	char separators[] = " ,\t\n"; 		/* array of possible separators */
	char *token;	
	int i = 0;
	int j = 1;
	int numToks = 0;

	token = strtok(input, separators); 	/* tokenizer */

	while(token != NULL){ 			/* filling the toks array with tokens from the input */ 
		strcpy(toks[i], token);
		token = strtok(NULL, separators);
		i++;
	}
	numToks = i; 				/* number of words the user entered */
	
	


	if(strcmp(toks[0], "echo") == 0){	/* runs the echo command */
		for(j; j < i; j++)
			printf("%s ", toks[j]);
		printf("\n");
		}

	else if(strcmp(toks[0], "exit") == 0 || strcmp(toks[0], "quit") == 0)	/* calls exit function */
		quit();

	else if(strcmp(toks[0], "clr") == 0)	/* calls clear screen function */
		clrscrn();

	else if(strcmp(toks[0], "pause") == 0)	/* calls pause function */
		pause();

	else if(strcmp(toks[0], "dir") == 0 	/* calls directroy display function to display current directory*/
			&& numToks == 1)		
		dirDisplay();

	else if(strcmp(toks[0], "dir") == 0
			&& numToks > 1){	/* displays the directory entered by the user */
		DIR * dir;
		struct dirent *pDir;
		
		dir = opendir(toks[1]);

		if(dir != NULL){
			while(pDir = readdir(dir))
				printf("%s\t", pDir->d_name);
			printf("\n\n");
			closedir(dir);
		}
		else
			printf("\nCould not find the directory\n\n");
	}

	else if(strcmp(toks[0], "help") == 0)	/* calls the help function */
		help(x);

	else if(strcmp(toks[0], "cd") == 0
			&& numToks == 1){ 	/* displays the current directory */
		char currDir[512];
		getcwd(currDir, 512);

		printf("%s", currDir);
		printf("\n");
	}

	else if(strcmp(toks[0], "cd") == 0
			&& numToks > 1){	/* changes the directory to what the desired one entered by the user */
		if(chdir(toks[1]) == -1) /* the directory doesnt exit */
			printf("Could not locate the directory\n");
		else 		
			chdir(toks[1]);
	}
	
	else{ /* external commands */
		char const* const exe = toks[0];
		int pid;
		int status;
		pid = fork();
		char* args[3] = {"Command-line", ".", NULL};
		
		if(pid == 0){
			execvp(exe, args);
			perror("execvp");
			exit(1);
		}
		//if(strcmp(toks[1], "&") == 0)
			wait(&status);
	}

return 0;
}
	
	
		






void clrscrn(){	
	printf("\033[2J"); /* Clear the entire screen. */
	printf("\033[0;0f"); /* Move cursor to the top left hand corner */
}

void dirDisplay(){
/* gets the contents of the current directory and displays them on screen */
	DIR * directory;
	struct dirent *dirStruct;
	char currDir[1024];

	getcwd(currDir, 1024);
	directory = opendir(currDir);

	if(directory != NULL){
		while(dirStruct = readdir(directory))
			printf("%s\t", dirStruct->d_name);
		printf("\n");
		closedir(directory);
	}
	else
		printf("The directory could not be printed");

}

void help(char *x){
/* reads from the included help file and displays it to the user */




	char readFile;
	FILE * file;

	char str[100];
	char *readme = "/readme.txt";
	char *path = x;

	strcpy(str, path);
	strcat(str, readme);
	

	
	file = fopen(str, "r");

	while((readFile = fgetc(file)) != EOF)
		printf("%c", readFile);
	fclose(file);
}

int pause(){
/* doesnt allow any input until a single 'enter' is pressed by the user */
	char inp[100];
	while(strcmp(inp, "\n") != 0){

		printf("Press Enter to continue ");
		fgets(inp, 100, stdin);
	}
	memset(&inp[0], 0, sizeof(inp)); /* resets the array for multiple pauses in a single session */
return 0;
}


void quit(){
/* exits the shell */
	exit(0);
}




int main(int argc, char ** argv){
/* gathers input and calls the tok function */
	char input[1024];
	char currentDir[256];

	char firstDir[100];
	getcwd(firstDir, 100);


	while(1){

		if(argc > 1){ /* batch mode */
			char const* const fileName = argv[1];
			char cmd[100];
			FILE * batch = fopen(fileName, "r");

			while(fgets(cmd, sizeof(cmd), batch))
				tok(cmd, firstDir);
			
			fclose(batch);
			exit(0);
		}

	
		/* interactive mode */
		getcwd(currentDir, 256);
		printf("@%s crash >: ", currentDir);
		fgets(input, 1024, stdin);
		tok(input, firstDir);

	}
	return 0;
}
