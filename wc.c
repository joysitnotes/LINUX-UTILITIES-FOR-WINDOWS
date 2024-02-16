#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int lines = 0;
	int c;
	int characters = 0;
	int words = 0;
	FILE *f  = fopen(argv[1], "r");
	int newWord = 1;

	if (argc < 2) {
		printf("Usage: wc <filename>\n");
		return 1;
	}

	if(f == NULL){
		return 1;
	}
	
	while (1) {
		c = fgetc(f);
		if (feof(f)) break; 
		else if (ferror(f)){
			printf("Error: Reading file\n");
			return 1;
		}
		characters++;
		 if (c == ' ' || c == '\n' || c == '\t') {
            newWord = 1;
        } else {
            if (newWord) {
                words++; 
                newWord = 0;
            }
        }
		
		if (c =='\n') {
			lines++;
		}	
	}

	fclose(f);
	printf("Lines: %d\t Chars: %d \t Words: %d\n", lines, characters, words-1);
	return 0;
}
