
#include<stdio.h>
int main()
{char name[20];

printf("Enter your name");
gets(name);


char branch [20];
printf("enter your branch\n");
gets(branch);

char hobbies[20];
printf("enter your hobbies\n");
gets(hobbies);



int num;
printf("enter your regd. No.\n");
scanf("%d",&num );


printf("Name:", name);
puts(name);
printf("Branch: ",branch);
puts(branch);
printf("hobbies: ",hobbies);
puts(hobbies);

printf("Regd.No. :%d\n",num);




return 0;

}