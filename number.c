#include <stdio.h>
int main()
{
	printf("pick an no: 11\n1. 12\n2. 13\n3. 14\n4. 15\n5. 16");
	int choice=0;
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("you picked 11.");
			break;
		case 2:
			printf("you picked 12.");
			break;
		case 3:
		    printf("you picked 13.");
			break;
		case 4:
		    printf("you picked 14.");
			break;
		case 5:
		    printf("you picked 15.");  
			break;
		default : printf("Use defalut case");				
		}
	}
