#include <stdio.h>


int main(int argc, char *argv[]){
	
	FILE *f;
	char buffer[512];

	if ((argc < 2) || (argc > 2)) {
		printf("[-] Usage: cat <file name>\n");
		return -1;
	}

	f = fopen(argv[1], "r");
	if (f==NULL) {
		printf("[-] Failed to open file ..\n");
		return -1;
	}

	while (fgets(buffer, 512,f)) {
		printf("%s", buffer);	
	}

	fclose(f);
	return 0;

}
