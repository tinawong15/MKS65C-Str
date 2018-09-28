#include <stdio.h>
#include <string.h>


int mystrncat(char * dest, char * source, int n){
	int lenDest = strlen(dest);
	int lenSrc = strlen(source);
	char * myPointCatDest = dest;
	char * myPointCatSrc = source;
	for(int i = 0; i < lenSrc; i ++){
	*(myPointCatDest + lenDest + i) = *(myPointCatSrc + i);
}
	return 0;
}
	


int main(){
	char dest [256] = "blahcdahhaha";
	char myDest [256] = "blahcdahhaha";
	char src[] = "ciao";
	/*   char * myPoint = myDest;
	char src[] = "ciao";
	int len = strlen(dest);
	strncat(dest,src,8);
	*(myPoint + len) = 'a';
	*(myPoint + len) = 'b';
	*/
	strncat(dest,src,8);
	mystrncat(myDest,src,8);


	printf("prints destination string: %s\n",dest);
	printf("prints destination string: %s\n",myDest);
	//printf("prints destination string length: %d\n",len);
	return 0;
}
	
