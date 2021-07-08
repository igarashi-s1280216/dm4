#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,sum=0;
    char* str[10];

    printf("What is your name?\n");
    printf("> ");
    scanf("%s",str);
    printf("Hello, %s!\n",str);
   
    printf("Roling the dice...\n");

    srand((unsigned int)time(NULL));

    for(int i=0;i<2;i++){
        printf("Dice %d: ",i+1);

        int num=rand()%6+1;
        printf("%d\n",num);
        sum+=num;
    }
    printf("Total value: %d\n",sum);

    return 0;
}
