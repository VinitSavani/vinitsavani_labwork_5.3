
//Q-2 write a programe to create a menu-driven programe for Telecom call service conversation using nested switch.

#include<stdio.h>
#include<conio.h>

void main(){
int choice,english,hindi,gujarati;
clrscr();

printf("Press 1 for english\n");
printf("Press 2 for Hindi\n");
printf("Press 3 for Gujrati\n");

printf("Enter your choice :");
scanf("%d",&choice);

switch(choice){
case 1:
       printf("Press 1 for internet Rechrge\n");
       printf("Press 2 for Top-up Recharge\n");
       printf("Press 3 for Spesial Recharge");
       printf("Enter your choice:");
       scanf("%d",&english);
       switch(english){
	  case 1:
	  printf("You have successfully done Internet Rechrge\n");
	  break;
	   case 2:
	  printf("You have successfully done Top-up Rechrge\n");
	  break;
	   case 3:
	  printf("You have successfully done Special Rechrge\n");
	  break;
	  default:
	  printf("Invalid choice\n");
	  break;
       }
case 2:
       printf("Internet Rechrge ke liye 1 dabaiye\n");
       printf("Top-up Recharge ke liye 2 dabaiye\n");
       printf("Spesial Recharge ke liye 3 dabaiye\n");
       printf("Enter your choice:");
       scanf("%d",&hindi);
       switch(hindi){
	  case 1:
	  printf("Aapne safaltapurvak Internet Rechrge kar liya he\n");
	  break;
	   case 2:
	  printf("Aapne safaltapurvak Top-up Recharge kar liya he\n");
	  break;
	   case 3:
	  printf("Aapne safaltapurvak Special Recharge kar liya he\n");
	  break;
	  default:
	  printf("Galat choice\n");
	  break;
       }
case 3:
       printf("Internet Recharge mate 1 dabavo\n");
       printf("Top-up Recharge mate 2 dabavo\n");
       printf("Spesial Recharge mate 3 dabavo\n");
       printf("Enter your choice:");
       scanf("%d",&gujarati);
       switch(gujarati){
	  case 1:
	  printf("Tame safaltapurvak Internet Recharge karyu chhe\n");
	  break;
	   case 2:
	  printf("Tame safaltapurvak Top-up Recharge karyu chhe\n");
	  break;
	   case 3:
	  printf("Tame safaltapurvak Special Recharge karyu chhe\n");
	  break;
	  default:
	  printf("Khoti choice\n");
	  break;
 }
default:
printf("Re enter your choice");
break;
}
getch();
}