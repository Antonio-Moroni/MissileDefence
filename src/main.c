#include <stdio.h>
#include <string.h>

typedef struct Coordinates
{
	int x;
	int y;
} Coordinates;

typedef enum
{
	EXPLOSIVE,
	NUCLEAR
} Warhead;

typedef struct Target
{
	Coordinates Coordinates;
} Target;

typedef struct Missile
{
	Coordinates coordinates;
	Warhead warhead;
	Target target;	

	bool armed;

	void (*arm)(struct Missile *missile);

} Missile;

void armMissile(struct Missile *missile)
{
	char password[8];
	
	printf("Input arming code: ");
	scanf(" %7s", password);

	scanf("%*[^\n]"); getchar(); // Clears input buffer

	if(strcmp(password,"DEFCON1") == 0)
	{
		missile->armed = true;
		printf("Correct password - Missile is armed");	
	}
	else
	{
		printf("Incorrect password - Missile remains unarmed");
	}
}

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
		scanf(" %d", &opt);

		if (opt < 0 || opt > 3)
		{
			printf("\nError! Option value must be between 0-3 (inclusive)\n\n");
		}

	}while(opt < 0 || opt > 3);

	return opt;
}


int main()
{
	Missile missile;
	missile.arm = armMissile;

	bool isQuitting = false;

	do
	{
		int opt = displayMenu();
	
		switch(opt)
		{
			case 0:
				printf("\nQuitting game\n\n");
				isQuitting = true;
				break;
			case 1:
				missile.arm(&missile);
				//setTarget();
				break;
			case 2:
				printf("option 2 selected\n");
				break;
			case 3: 
				printf("\nMissile arming code is: DEFCON1\n\n");
				break;
		}

	}while (!isQuitting);

	return 0;
}
