// Program to print 1->5 or greater than 5 and less than 0
// Harrison Steyn z5214808

#include <stdio.h>

int main(void)
{
	int number;
    
    // Scanning number so i can test it.
	printf("Please enter an integer: ");
	scanf("%d", &number);
    
    // Catch case where number < 1
	if (number < 1) {
		printf("You entered a number less than one.\n");
	} else if (number == 1) {
        // Catch all numbered cases
		printf("You entered one.\n");
	}
	else if(number == 2)
	{
		printf("You entered two.\n");
	}
	else if(number == 3)
	{
		printf("You entered three.\n");
	}
	else if(number == 4)
	{
		printf("You entered four.\n");
	}
	else if(number == 5)
	{
		printf("You entered five.\n");
	}
	else
	{
	    // Else catch case where number > 5
		printf("You entered a number greater than five.\n");
	}
		
	return 0;
}
