#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -
 * Return:
 */
int main()
{
char *character = "wxy#+zMNO!PQRSHIB@=~>:Ao0189qrsptuv.CD23456$^&*()_-7EFGklmnJKLabcdefghijTUVWXYZ";
char generatedPassword[15];
int randomNumber;
int i;
srand(time(NULL));
for(i = 0; i < 15; i++){
randomNumber = rand() % (79 + 1 - 0) + 0;
generatedPassword[i] = character[randomNumber];
}
printf("%s", generatedPassword);
return(0);
}
