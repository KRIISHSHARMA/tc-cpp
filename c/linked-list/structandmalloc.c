#include <stdio.h>
#include <stdlib.h>

typedef struct intr{
    int a;
    char b[100]; //buffer 
}t;

int main(){
   int num; 
   printf("ENTER NUMBER OF INTERGERS : ");
   scanf("%d",&num);
   t *ptr = (t *)malloc(num * sizeof(t)); // num * sizeof t 
   
   for (int i = 0 ; i < num ; i++){
       printf("ENTER INT : ");
       scanf("%d", &ptr[i].a );
       printf("ENTER CHAR : ");
       scanf("%s", &ptr[i].b);
   }
   
   for (int i = 0 ; i < num ; i++){
       printf("\n______________________________________\n");
       printf("VALUE : %d\nCHAR : %s\n " ,ptr[i].a,ptr[i].b);
   }
   free(ptr);
   ptr = NULL;
}

