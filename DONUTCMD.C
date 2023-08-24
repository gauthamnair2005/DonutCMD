#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char command[30];
	int result;
	char color[4];
	clrscr();
	printf("DonutCMD v23.8.24\n");
	printf("Gautham Nair\n");
	printf("--------------------------------\n");
	result = strcmp(command,"exit");
	while (result != 0)
	{
		printf("DonutCMD $");
		scanf("%[^\n]",command);
		fflush(stdin);
		if (strcmp(command, "about") == 0)
		{
			printf("DonutCMD v23.8.24\n");
			printf("By Gautham Nair\n");
		}
		else if (strcmp(command, "exit") == 0)
		{
			printf("Good Bye..!\n");
			break;
		}
		else if (strcmp(command, "color --list") == 0)
		{
			system("color z");
		}
		else if (strcmp(command, "color --change") == 0)
		{
			color[4] = "Hel";
			while (strcmp(color, "de") != 0)
			{
				printf("Enter a coler scheme (color <color_code><color_code>): ");
				scanf("%[^\n]",color);
				if (strcmp(color, "de") == 0)
				{
					color[4] = "Hel";
					break;
				}
				else
				{
					system(color);
				}
			}
		}
		else if (strcmp(command, "help") == 0)
		{
			printf("DonutCMD Help\n");
			printf("|--------------------------------------------------------------------------------------------------------------------|\n");
			printf("|COMMAND NAME                           |DESCRIPTION                                                                 |\n");
			printf("|---------------------------------------|----------------------------------------------------------------------------|\n");
			printf("| about                                 | Info About DonutCMD                                                        |\n");
			printf("| giuc                                  | Start GIUC                                                                 |\n");
			printf("| giuc --ver                            | GIUC Version                                                               |\n");
			printf("| clear                                 | Clear the Screen                                                           |\n");
			printf("| <command_name> --help                 | Display Help for particular command                                        |\n");
			printf("| color --list                          | List all the color schemes available                                       |\n");
			printf("| color --change                        | Enter color changing environment and type color <color_code><color_code>   |\n");
			printf("| core mode                             | Enter Shell commands                                                       |\n");
			printf("| exit                                  | Quits DonutCMD                                                             |\n");
			printf("|--------------------------------------------------------------------------------------------------------------------|\n");
		}
		else if (strcmp(command, "giuc --ver") == 0)
		{ 
			printf("Gautham's Important Utility Collection\n");
			system("giuc -v");
		}
		else if (strcmp(command, "giuc") == 0)
		{
			system("giuc");
		}
		else if (strcmp(command, "giuc --help") == 0)
		{
			printf("GIUC Help\n");
			printf("----------------\n");
			printf("GIUC stands for Gautham's Important Utility Collection, it is basically a collection of important or necessary utilities like age calculator, simple interest calculator, etc\n");
			printf("Just type `giuc` in DonutCMD prompt and then type numbers representing different utilities. GIUC is updated weekly along with DonutCMD..!\n");
		}
		else if (strcmp(command, "clear --help") == 0)
		{
			printf("Clear Screen Help\n");
			printf("Just type `clear` and your screen will be cleared.\n");
		}
		else if (strcmp(command, "core mode --help") == 0)
		{
			printf("Core Mode Help\n");
			printf("Typing the command `core mode` will enter the host system's terminal (e.g: Command Prompt or PowerShell in Windows, Bash or Dash Terminal in Linux, etc)\n");
		}
		else if (strcmp(command, "core mode") == 0)
		{
			system("cmd");
		}
		else if (strcmp(command, "clear") == 0)
		{
			clrscr();
		}
		else
		{
			printf("Invalid Command Passed..!\n");
		}
	}
	return 0;
}