#include <stdio.h>

void displayMenu()
{
	int opt = 0;

	do
	{
		printf("\n------------ MENU ------------\n");
		printf("Enter number for command:\n");
		printf("- 0 - Exit game\n");
		printf("- 1 - Launch missile\n");
		printf("- 2 - Choose missile type\n");
		printf("- 3 - Display launch code\n");
		printf("------------------------------\n");
		printf("Select Option: ");
		scanf("%d", &opt);
	}while(opt < 0 || opt > 3);
}


int main()
{
	displayMenu();

	return 0;
}
