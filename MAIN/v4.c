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
		sleep(1); printf("\n\nOPTIONS: EXIT [.], ADDITION [+], SUBTRACTION [-], MULTIPLICATION [*], DIVISION [/], REMAINDER [|], PERCENT OF [<], REMAINDER OF [>].\n");
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
			printf("SECOND NUMBER: ");
			scanf(" %d", &b);
			total = a + b;
			
			sleep(1); printf("TOTAL: ");
			printf(" %d\n", total);
		}
		
		else if (choice == '-') {
			printf("NUMBER: ");
			scanf(" %d", &a);
			printf("SECOND NUMBER: ");
			scanf(" %d", &b);
			total = a - b;
			
			sleep(1); printf("TOTAL: ");
			printf(" %d\n", total);
		}
		
		else if (choice == '*') {
			printf("NUMBER: ");
			scanf(" %d", &a);
			printf("SECOND NUMBER: ");
			scanf(" %d", &b);
			total = a * b;
			
			printf("TOTAL: ");
			printf(" %d\n", total);
		}
		
		else if (choice == '/') {
			printf("USING DIVISION WITH NUMBER '0', WILL CRASH THE PROGRAM ...\n\n");
			printf("NUMBER: ");
			scanf(" %d", &a);
			printf("SECOND NUMBER: ");
			scanf(" %d", &b);
			total = a / b;
			
			sleep(1); printf("TOTAL: ");
			printf(" %d\n", total);
		}
		
		else if (choice == '|') {
			double c;
			double d;
			
			printf("NUMBER: ");
			scanf(" %lf", &c);
			printf("SECOND NUMBER: ");
			scanf(" %lf", &d);
			double result = c - (int)(c / d) * d; 
			
			sleep(1); printf("TOTAL: ");
			printf(" %lf\n", result);
		}
		
		else if (choice == '<') {
			int a;
			int b;
			double total;
			
			printf("USING PERCENT OF WITH 0 WILL CAUSE 'inf%%' AND/OR '-nan%%' TO PRINT OUT ...\n\n");
			
			printf("NUMBER: ");
			scanf(" %d", &a);
			printf("SECOND NUMBER: ");
			scanf(" %d", &b);
			total = ((double)a / b) * 100;
			
			sleep(1); printf(" %d", a);
			printf("%% IS ");
			printf(" %f", total);
			printf("%% OF ");
			printf("%d", b);
		}
		
		else if (choice == '>') {
			int a;
			int b;
			double total;
			
			printf("USING REMAINDER OF WITH 0 WILL CAUSE '-nan' TO PRINT OUT ...\n\n");
			
			printf("WHOLE NUMBER: ");
			scanf(" %d", &a);
			printf("PART NUMBER: ");
			scanf(" %d", &b);
			total = (double)b / (a / 100.0); 
			
			sleep(1); printf(" %d", b);
			printf(" IS ");
			printf(" %d", a);
			printf("%% OF ");
			printf(" %f", total);
		}
		
		else {
			printf("INVALID INPUT. \n");
		}
	}
	return 0;
}
