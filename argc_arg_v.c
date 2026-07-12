# include <stdio.h>
#include <stdlib.h>
int main (int argc,char *argv[])
{
 int i=0;

int a = atoi(argv[1]);
int b = atoi(argv[2]);
 printf ("Total Arguments (argc): %d\n",argc);
 printf ("Total Arguments (argv):\n");
 if(argv[3][0]=='+'){
     printf("ADDITION: %d\n",a+b);
}
 if(argv[3][0]=='-'){
     printf("SUBRACTION: %d\n",a-b);
}
 if(argv[3][0]=='*'){
     printf("MULTIPLICATION: %d\n",a*b);
}
 if(argv[3][0]=='/'){
     printf("DIVISION :%d\n",a/b);
}



return 0;
}
 
