#include<stdio.h>
struct student{
   char name[50];
   int roll;
   float marks;
};
int main()
{
   struct student s[5];
   int i = 0;
   printf("Enter information:\n");
   for(int i=0;i<5;i++)
   {
      printf("Enter name:");
      scanf("%s",s[i].name);
      printf("Enter roll number:");
      scanf("%d",&s[i].roll);
      printf("Enter marks:");
      scanf("%f",&s[i].marks);
};
       printf("Display Information:\n");
       for(int i=0;i<5;i++)
       {
        printf("name:");
        printf("%s\n",s[i].name);
        printf("Roll number:%d\n",s[i].roll);
        printf("marks:%lf\n",s[i].marks);
        }
       return 0;
}

