#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Usage ./filename <num1> <num2>\n");
		return 0;
	}

    if (num1 < 1 || num2 < 1)
    {
        printf("Invalid number\n");
        return 1;
    }

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}