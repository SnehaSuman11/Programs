
#include<stdio.h>
int main()
{
int marks;
printf("Enter the Marks :-");
scanf("%d",&marks);
if(marks<=100 && marks>=85)
 {
   printf("\nGrade A\n");
 }
else if(marks<=84 && marks>=70)
 {
   printf("\nGrade B\n");
 }
else if(marks<=69 && marks>=55)
 {
   printf("\nGrade C\n");
 }
else if(marks<=54 && marks>=40)
 {
   printf("\nGrade D\n");
 }
else
 {
   printf("\nFAIL!! Better Luck Next Time\n");
 }
return 0;
}
