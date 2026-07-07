// disable prints while working on the program
// DEVELOPER NOTE: CHAR ONLY USES ''
/* As I am a Arch Linux user, WINDOWS Applications building is a foreign. As it is open-source, you can do as you wish ..
 * If you are up to it, I know WINDOWS users aren't too keen on doing that.*/

#include <stdio.h>
#include <math.h>
#include <windows.h> // uses milliseconds unlike it's UNIX version, unistd, which uses seconds
#include <string.h>
// required modules

char str[5];
int num;
int num2;
int total;
// required global variables


int main() {
	Sleep(1000); printf("\nText Interface Calculator, TIC\n");
	Sleep(1000); printf("WINDOWSOS EDITION\n");
	Sleep(1000); printf("Version 04.00.00\n");
	Sleep(1000); printf("COPYRIGHT VOID STUDIOS, VOID STUDIOS SOURCE PROGRAMS 2025-2026\n");
	Sleep(1000); printf("GNU General Public License 2.x\n");
	
	for (;;) {
		Sleep(1000); printf("\n\nOPTIONS: EXIT [.], ADDITION [+], SUBTRACTION [-], MULTIPLICATION [*], DIVISION [/], REMAINDER [|], PERCENT OF [<], REMAINDER OF [>].\n");
		printf("ADD 'e' TO A COMMAND TO EXIT AFTER RUNNING IT ...\n");
		printf("INPUT: ");
		scanf(" %3s", str);
		
		if (strcmp(str, ".") == 0) {
			Sleep(1000); printf("\nEXIT COMMAND ENTERED\n");
			Sleep(1000); printf("CANNOT BE REVERTED\n");
			Sleep(1000); printf(".\n");
			Sleep(1000); printf("..\n");
			Sleep(1000); printf("...\n");
			Sleep(1000); printf("....\n");
			Sleep(1000); printf(".....\n");
			break;
		}
		
		
		else if (strcmp(str, "+") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num + num2;
			
			Sleep(1000); printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "-") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num - num2;
			
			Sleep(1000); printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "*") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num * num2;
			
			Sleep(1000); printf("TOTAL: ");
			printf(" %d", total);
		}
		
		
		else if (strcmp(str, "/") == 0) {
			printf("USING DIVISION WITH NUMBER '0', WILL CRASH THE PROGRAM ...\n\n");
			printf("NUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num / num;
			
			Sleep(1000); printf("TOTAL: ");
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
			
			Sleep(1000); printf("TOTAL: ");
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
			
			Sleep(1000); printf(" %d", num);
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
			
			Sleep(1000); printf(" %d", num2);
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
			
			Sleep(1000); printf("TOTAL: ");
			printf(" %d", total);
			break;
		}
		
		
		else if (strcmp(str, "-e") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num - num2;
			
			Sleep(1000); printf("TOTAL: ");
			printf(" %d", total);
			break;
		}
		
		
		else if (strcmp(str, "*e") == 0) {
			printf("\nNUMBER: ");
			scanf(" %d", &num);
			printf("SECOND NUMBER: ");
			scanf(" %d", &num2);
			total = num * num2;
			
			Sleep(1000); printf("TOTAL: ");
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
			
			Sleep(1000); printf("TOTAL: ");
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
			
			Sleep(1000); printf("TOTAL: ");
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
			
			Sleep(1000); printf(" %d", num);
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
