#include <stdio.h>
#include <string.h>


int mystrncat(char * dest, char * source, int n){
	int lenDest = strlen(dest);
	int lenSrc = strlen(source);
	char * myPointCatDest = dest;
	char * myPointCatSrc = source;
	for(int i = 0; i < n; i ++){
	*(myPointCatDest + lenDest + i) = *(myPointCatSrc + i);
}
	return 0;
}

int mystrcmp(char * s1, char * s2){
	char * myPointCmpOne = s1;
	char * myPointCmpTwo = s2;
	int lenS1 = strlen(s1);
	int lenS2 = strlen(s2);
	int lenComp = 0;
	
	if(lenS1 >= lenS2){
	lenComp = lenS1;
	}
	if(lenS2 > lenS1){
	lenComp = lenS2;
	}
	
	for(int i = 0; i < lenComp ; i ++){
	if(*(myPointCmpOne + i) > *(myPointCmpTwo + i)){
	return 1;
	}
	
	if(*(myPointCmpOne + i) < *(myPointCmpTwo + i)){
	return -1;
	}
	}
	
	if(lenS1 > lenS2){
		return 1;
	}
	if(lenS2 > lenS1){
	return -1;
	}

	return 0;
	}	
	
	


int main(){
	char dest [256] = "blahcdahhaha";
	char myDest [256] = "blahcdahhaha";

	char Test2 [256] = "yaa";
	char myTest2 [256] = "yaa";

	char Test3 [256] = "ya";
	char myTest3 [256] = "yab";


	char src[] = "ciao";
	/*   char * myPoint = myDest;
	char src[] = "ciao";
	int len = strlen(dest);
	strncat(dest,src,8);
	*(myPoint + len) = 'a';
	*(myPoint + len) = 'b';
	*/
	strncat(dest,src,3);
	mystrncat(myDest,src,4);
	int yab = strcmp(dest, myDest);
	int myYab = mystrcmp(dest,myDest);

	int tes2 = strcmp(Test2, myTest2);
	int mytes2 = mystrcmp(Test2, myTest2);

	int tes3 = strcmp(Test3, myTest3);
	int mytes3 = mystrcmp(Test3, myTest3);

	printf("prints destination string: %s\n",dest);
	printf("prints MINEdestination string: %s\n",myDest);
	printf("comparison1: %d\n", yab);
	printf("comparison1: %d\n", myYab);

	printf("comparison2: %d\n", tes2);
	printf("comparison2: %d\n", mytes2);

	printf("comparison3: %d\n", tes3);
	printf("comparison3: %d\n" ,mytes3);
	//printf("prints destination string length: %d\n",len);
	return 0;
}
	
