// disable prints while working on the program
// DEVELOPER NOTE: CHAR ONLY USES ''

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
// required modules

void wait(long ms) {
	clock_t start = clock();
	clock_t duration = ms * (CLOCKS_PER_SEC / 1000);
	
	while (clock() - start < duration) {
		// during this, it burns CPU Cycles. If you do not like it, use the platform specific versions for your OS.
	}
}

char str[5];
int num;
int num2;
int total;
// required global variables


int main() {
	wait(1000);
	printf("\nText Interface Calculator, TIC\n");
	wait(1000);
	printf("GLOBAL EDITION [Linux, MacOS: vUNIX.c | WindowsOS: vWINDOWS.c\n");
	printf("!! This program uses CPU cycles to pause. Please use the platform specific version for your Operating System for more optimized usage !!\n");
	wait(1000);
	printf("Version 04.01.00\n");
	wait(1000);
	printf("COPYRIGHT VOID STUDIOS, VOID STUDIOS SOURCE PROGRAMS 2025-2026\n");
	wait(1000);
	printf("GNU General Public License 2.x\n");
	wait(1000);
	printf("Reconstruction of Py Calculator\n");
	
	for (;;) {
		printf("\n\nOPTIONS: EXIT [.], ADDITION [+], SUBTRACTION [-], MULTIPLICATION [*], DIVISION [/], REMAINDER [|], PERCENT OF [<], REMAINDER OF [>].\n");
		printf("ADD 'e' TO A COMMAND TO EXIT AFTER RUNNING IT ...\n");
		printf("INPUT: ");
		scanf(" %3s", str);
		
		if (strcmp(str, ".") == 0) {
			printf("\nEXIT COMMAND ENTERED\n");
			printf("CANNOT BE REVERTED\n");
			wait(1000);
			printf(".\n");
			wait(1000);
			printf("..\n");
			wait(1000);
			printf("...\n");
			wait(1000);
			printf("....\n");
			wait(1000);
			printf(".....\n");
			break;
		}
		
		
		else if (strcmp(str, "+") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num + num2;
			
			printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "-") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num - num2;
			
			printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "*") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num * num2;
			
			printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "/") == 0) {
			printf("USING DIVISION WITH NUMBER '0', WILL CRASH THE PROGRAM ...\n\n");
			printf("NUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num / num;
			
			printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "|") == 0) {
			double c;
			double d;
			
			printf("\nNUMBER: ");
			scanf(" %lf", &c);
			printf("SECOND NUMBER: ");
			scanf(" %lf", &d);
			double result = c - (int)(c / d) * d; 
			
			printf("TOTAL: ");
			printf(" %lf", result);
		}
		
		
		else if (strcmp(str, "<") == 0) {
			double s;
			
			printf("USING PERCENT OF WITH 0 WILL CAUSE 'inf%%' AND/OR '-nan%%' TO PRINT OUT ...\n\n");
			
			printf("NUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			s = ((double)num / num2) * 100;
			
			printf(" %d", num);
			printf("%% IS ");
			printf(" %f", s);
			printf("%% OF ");
			printf("%d", num2);
		}
		
		
		else if (strcmp(str, ">") == 0) {
			double s;
			
			printf("USING REMAINDER OF WITH 0 WILL CAUSE '-nan' TO PRINT OUT ...\n\n");
			
			printf("WHOLE NUMBER: ");
			scanf(" %d", &num);
			printf("PART NUMBER: ");
			scanf(" %d", &num2);
			s = (double)num2 / (num / 100.0); 
			
			printf(" %d", num2);
			printf(" IS ");
			printf(" %d", num);
			printf("%% OF ");
			printf(" %f", s);
		}
		
		
		else if (strcmp(str, "+e") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num + num2;
			
			printf("TOTAL: ");
			printf(" %d", total);
			break;
		}
		
		
		else if (strcmp(str, "-e") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num - num2;
			
			printf("TOTAL: ");
			printf(" %d", total);
			break;
		}
		
		
		else if (strcmp(str, "*e") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num * num2;
			
			printf("TOTAL: ");
			printf(" %d", total);
			break;
		}
		
		
		else if (strcmp(str, "/e") == 0) {
			printf("USING DIVISION WITH NUMBER '0', WILL CRASH THE PROGRAM ...\n\n");
			printf("NUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num / num;
			
			printf("TOTAL: ");
			printf(" %d", total);
			break;
		}
		
		
		else if (strcmp(str, "|e") == 0) {
			double c;
			double d;
			
			printf("\nNUMBER: ");
			scanf(" %lf", &c);
			printf("SECOND NUMBER: ");
			scanf(" %lf", &d);
			double result = c - (int)(c / d) * d; 
			
			printf("TOTAL: ");
			printf(" %lf", result);
			break;
		}
		
		
		else if (strcmp(str, "<e") == 0) {
			double s;
			
			printf("USING PERCENT OF WITH 0 WILL CAUSE 'inf%%' AND/OR '-nan%%' TO PRINT OUT ...\n\n");
			
			printf("NUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			s = ((double)num / num2) * 100;
			
			printf(" %d", num);
			printf("%% IS ");
			printf(" %f", s);
			printf("%% OF ");
			printf("%d", num2);
			break;
		}
		
		
		else if (strcmp(str, ">e") == 0) {
			double s;
			
			printf("USING REMAINDER OF WITH 0 WILL CAUSE '-nan' TO PRINT OUT ...\n\n");
			
			printf("WHOLE NUMBER: ");
			scanf(" %d", &num);
			printf("PART NUMBER: ");
			scanf(" %d", &num2);
			s = (double)num2 / (num / 100.0); 
			
			printf(" %d", num2);
			printf(" IS ");
			printf(" %d", num);
			printf("%% OF ");
			printf(" %f", s);
			break;
		}
		
		
		else {
			printf("INVALID INPUT. \n");
		}
	}
	return 0;
}
