#include <stdio.h>
#include <string.h>

/* Simple empty file creation tool for windows.
 * Add to the windows path to access through cmd or ps.*/


void printHelp(){
		printf("\ntouch usage:\n"
			   "touch -h or --help			 : print help menu\n"
		       "touch <filenam.e>			 : create single file\n"
			   "touch <filenam.e> <filenam.e>		 : create multiple files\n\n");
}

int main(int argc, char **argv){
	
	FILE *f;
	if (argc < 2) {
		printf("Usage>  touch <filenam.e> or touch -h for help menu");

		return 1;
	}
	if ((strcmp(argv[1],"-h")==0) || (strcmp(argv[1],"--help")==0) ) {
		printHelp();
		return 1;
	}


	for (int i = 1;i < argc; i++) {
		printf("File %d: %s\n", i, argv[i]);
		char *filename = argv[i];
		f = fopen(filename, "w");
		if(f==NULL){
			printf("ERROR: operation failed\n");
		}
		fclose(f);
	}

	return 0;

}
