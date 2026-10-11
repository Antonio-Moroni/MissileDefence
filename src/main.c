#include <stdio.h>

int displayMenu()
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

	return opt;
}


int main()
{
	bool isQuitting = false;

	do
	{
		int opt = displayMenu();
	
		switch(opt)
		{
			case 0:
				isQuitting = true;
				break;
			case 1:
				printf("option 1 selected\n");
				break;
			case 2:
				printf("option 2 selected\n");
				break;
			case 3: 
				printf("option 3 selected\n");
				break;
		}

	}while (!isQuitting);

	return 0;
}
