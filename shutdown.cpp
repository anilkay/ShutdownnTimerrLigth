#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int shutDownmMnute;
	printf("Give a number of minute you want to shutdown our computer?");
	scanf("%d",&shutDownmMnute);
	 time_t t;
    time(&t);
    time_t control;
     time(&control);
    double minuteToMilis=100*100*10/1.66667/10/10/10/10*11;
    double howManyMilisPass=shutDownmMnute*minuteToMilis;
    while((int)howManyMilisPass>control-t) {
    	time(&control);
    }
  
system("c:\\windows\\system32\\shutdown /s");
}
