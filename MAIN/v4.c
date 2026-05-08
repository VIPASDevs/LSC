// disable prints if you are developing and/or tweaking the program
// DEVELOPER NOTE: REMINDER. CHAR ONLY USES ''

#include <stdio.h>
#include <math.h>
#include <unistd.h>
// required modules

char choice; // allows the users to choose what mathematics operation they use
int a;
int b;
int total;

int main() {
	sleep(1); printf("\nText Interface Calculator, TIC\n");
	sleep(2); printf("Version 04.00.00\n");
	sleep(2); printf("COPYRIGHT VOID STUDIOS, VOID STUDIOS SOURCE PROGRAMS 2025-2026\n");
	sleep(2); printf("GNU General Public License 2.x\n");
	sleep(2); printf("Reconstruction of Py Calculator\n");
	
	for (;;) {
		printf("\nOPTIONS: EXIT [.], ADDITION [+], SUBTRACTION [-], MULTIPLICATION [*], DIVISION [/]\n");
		printf("INPUT: ");
		scanf(" %c", &choice);
		printf("\n");
		
		if (choice == '.') {
			sleep(1); printf("EXITING ...\n");
			break;
		}
		
		else if (choice == '+') {
			printf("NUMBER: ");
			scanf(" %d", &a);
			sleep(1); printf("SECOND NUMBER: ");
			scanf(" %d", &b);
			total = a + b;
			
			sleep(1); printf("TOTAL: ");
			printf(" %d\n", total);
		}
		
		else if (choice == '-') {
			printf("NUMBER: ");
			scanf(" %d", &a);
			sleep(1); printf("SECOND NUMBER: ");
			scanf(" %d", &b);
			total = a - b;
			
			sleep(1); printf("TOTAL: ");
			printf(" %d\n", total);
		}
		
		else if (choice == '*') {
			printf("NUMBER: ");
			scanf(" %d", &a);
			sleep(1); printf("SECOND NUMBER: ");
			scanf(" %d", &b);
			total = a * b;
			
			printf("TOTAL: ");
			printf(" %d\n", total);
		}
		
		else if (choice == '/') {
			printf("NUMBER: ");
			scanf(" %d", &a);
			sleep(1); printf("SECOND NUMBER: ");
			scanf(" %d", &b);
			
			sleep(1); printf("TOTAL: ");
			printf(" %d\n", total);
		}
	}
	return 0;
}
