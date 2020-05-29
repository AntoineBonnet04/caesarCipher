#include <ctype.h>
#include<stdlib.h>
#include <stdio.h>

/* Program designed to implement the Julius Caesar Cipher
 * Which shifts the entire input by one or several letters.
 * *****************************************************
 * Author               Dept.           Date            Notes
 * Antoine Bonnet       Comp.Science    Feb. 17 2020    Initial version
 */

int main( int argc, char *argv[] ) {
        int offset, letter;
        char c, input[1000];
       	int atoi();

        if (argc != 2){
                printf("You have %d arguments\n", argc);
                puts("Error: usage is caesarcipher <offset> \n");
                return 1;
        }
	offset = atoi(argv[1]);
	while ( (c = getchar()) != EOF ) {
		// Until EOF is reached	
		//If character is a lowercase letter
			if (isalpha(c) && islower(c)){	//if character is lowercase letter	
			letter = c + offset;				
		// If shifted character went over z (offset positive)
				if (letter>'z'){
					letter = letter -1 + 'a' - 'z';
				}
		// if shifted character went below a (offset negative)
				else if (letter<'a'){
					letter = letter + 'z' - 'a' + 1;
				}
			printf("%c", letter); // Print shifted letter
			}
			else {
				printf("%c", c);
			}
			}
}
