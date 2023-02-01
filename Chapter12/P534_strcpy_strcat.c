#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[80];

	strcpy_s( string, 80, "Hello World From " );
	strcat_s( string, 80, "strcpy " );
	strcat_s( string, 80, "and " );
	strcat_s( string, 80, "strcat! " );

	printf("string = %s \n", string);

	return 0;
}