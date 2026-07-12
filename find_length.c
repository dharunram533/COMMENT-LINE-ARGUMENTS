# include <stdio.h>
int main(int argc,char* argv[])
{
int i,count=0;
printf("Enter the index number:");
scanf("%d",&i);
for (int j=0;argv [i][j] !='\0';j++){
count++;
}
printf("Length:%d\n",count);

return 0;

}
