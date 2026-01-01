#include<stdio.h>
#include<conio.h>
int main()
{
  int choice;
printf("options :\n");
printf("restart computer :\n");
printf("shutdown computer :\n");
printf("enter your choice :");
scanf("%d",&choice);

  if choice == 1
    {
printf("restarting computer \n");
system("shutdown /r now");
  }
else if choice == 2
  {
printf("shutting down computer \n");
system("shutdown /s now");
}
else
{
printf("invalid choice . exiting \n");
}
return 0;
}
