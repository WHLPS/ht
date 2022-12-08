#include <string.h>

int main()
{
	char arr1[]="abcdefg" ;
	char arr2[]={'a','b','c','\0'};
	int lon=strlen(arr1);
	printf("%d\n",lon);
	
	lon =strlen(arr2);
	printf("%d",lon);
	
	return 0; 
 } 

