/*Program in C to find the first capital letter in a string using recursion.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
void first_capital(char str[], int length);

int main(){
    char str[50];
    int n;
    printf("Enter a string : ");
    scanf("%s", str);
    n = strlen(str);
    first_capital(str, n);
    return 0;

}


 void first_capital(char str[], int length){
	
	static int i = 0;
	if (i < length)
	{
		if (isupper(str[i]))
		{
			printf("The first capital letter in %s is %c\n", str, str[i] );
		}
		else{
			++i;
			first_capital(str, length);
		}
	}
}