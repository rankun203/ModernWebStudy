#include <stdio.h>
#include <conio.h>

/**
 * author: rankun203@gmail.com
 * Usage:
 *  -With Parameter
 *   CMD: charascii.exe A
 *   OutPut: A: 65
 *  -Without Parameter
 *   Hit any key
 *   Exit: Ctrl+C/Z
 *   Table: space key
 */

/**
 * print a char by its pointer.
 */
int printpchar(char* key)
{
	printf("%s: %d\n", key, *key);
	return 0;
}
/**
 * print a char by its content.
 */
int printchar(char key)
{
	printf("%c: %d\n", key, key);
	return 0;
}

/**
 * print ASCII table.
 */
int printable()
{
	int i, j, tmp, col=8, max=128;
	for(i=0; i<=max; i++)
	{
		for(j=0; j<col; j++)
		{
			tmp = (i + j);
			if(tmp > max)
				break;
			if(1 != cpsc(tmp)) //means cpsc returned without process anything.
				printf("%c: %d\t", tmp, tmp);
		}
		i = i + col - 1;
		printf("\n");
	}
	return 0;
}

/**
 * Check and print special characters.
 * Self managed special characters list, stored in arrays keys[] and values[] like a map.
 */
int cpsc(int ascii)
{
	int i;
	int keys[8] = {0, 7, 8, 9, 10, 13, 17, 127};
	char* values[8] = {"\\0", "\\a", "\\b", "\\t", "\\n", "\\r", "DC1", "DEL"};
	for(i=0; i<8; i++)
		if(ascii == keys[i])
		{
			printf("%s: %d\t", values[i], ascii);
			return 1;
		}
	return 0;
}

int main(int argc, char* argv[])
{
	char c;
	if(NULL != argv[1])
		printpchar(argv[1]);
	else
		while(1)
		{
			c = getch();
			if((int)c == 3 || (int)c == 26)
			{
				printf("\nCtrl+C/Z, Terminating...");
				break;
			}
			if((int)c == 32)
			{
				printable();
				continue;
			}
			printchar(c);
		}
	return 0;
}
