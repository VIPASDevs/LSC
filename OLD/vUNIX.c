// disable prints while working on the program
// DEVELOPER NOTE: CHAR ONLY USES ''

#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <string.h>
// required modules

char str[5];
int num;
int num2;
int total;
// required global variables


int main() {
	sleep(1); printf("\nText Interface Calculator, TIC\n");
	sleep(1); printf("UNIX-LIKE Operating Systems EDITION\n");
	sleep(2); printf("Version 04.01.00\n");
	sleep(2); printf("COPYRIGHT VOID STUDIOS, VOID STUDIOS SOURCE PROGRAMS 2025-2026\n");
	sleep(2); printf("GNU General Public License 2.x\n");
	sleep(2); printf("Reconstruction of Py Calculator\n");
	
	for (;;) {
		sleep(1); printf("\n\nOPTIONS: EXIT [.], ADDITION [+], SUBTRACTION [-], MULTIPLICATION [*], DIVISION [/], REMAINDER [|], PERCENT OF [<], REMAINDER OF [>].\n");
		sleep(1); printf("ADD 'e' TO A COMMAND TO EXIT AFTER RUNNING IT ...\n");
		printf("INPUT: ");
		scanf(" %3s", str);
		
		if (strcmp(str, ".") == 0) {
			sleep(1); printf("\nEXIT COMMAND ENTERED\n");
			sleep(1); printf("CANNOT BE REVERTED\n");
			sleep(1); printf(".\n");
			sleep(1); printf("..\n");
			sleep(1); printf("...\n");
			sleep(1); printf("....\n");
			sleep(1); printf(".....\n");
			sleep(1); break;
		}
		
		
		else if (strcmp(str, "+") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num + num2;
			
			sleep(1); printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "-") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num - num2;
			
			sleep(1); printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "*") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num * num2;
			
			sleep(1); printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "/") == 0) {
			printf("USING DIVISION WITH NUMBER '0', WILL CRASH THE PROGRAM ...\n\n");
			printf("NUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num / num;
			
			sleep(1); printf("TOTAL: ");
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
			
			sleep(1); printf("TOTAL: ");
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
			
			sleep(1); printf(" %d", num);
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
			
			sleep(1); printf(" %d", num2);
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
			
			sleep(1); printf("TOTAL: ");
			printf(" %d", total);
			break;
		}
		
		
		else if (strcmp(str, "-e") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num - num2;
			
			sleep(1); printf("TOTAL: ");
			printf(" %d", total);
			break;
		}
		
		
		else if (strcmp(str, "*e") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num * num2;
			
			sleep(1); printf("TOTAL: ");
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
			
			sleep(1); printf("TOTAL: ");
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
			
			sleep(1); printf("TOTAL: ");
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
			
			sleep(1); printf(" %d", num);
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
			
			sleep(1); printf(" %d", num2);
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
