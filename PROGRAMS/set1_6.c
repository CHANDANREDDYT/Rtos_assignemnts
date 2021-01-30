#include<stdio.h>
#include<stdlib.h>
 struct date
 {
  int day;
  int month;
  int year;
 };
typedef struct date Date1;

int main(int argc,char *argv[])
{
 Date1 date_1;
 Date1 date_2;
// printf("Enter the number of the args");
// scanf("%d",&argv);
 if(argc>=8)
 {
  printf("enter the correct format of ./prog a0 a1 a2 a3 a4 a5");
 }
else
{
 date_1.day = atoi(argv[1]);
 date_1.month = atoi(argv[2]);
 date_1.year = atoi(argv[3]);
 date_2.day = atoi(argv[4]);
 date_2.month = atoi(argv[5]);
 date_2.year = atoi(argv[6]);
 printf("the latter date is %d/%d/%d ",date_2.day,date_2.month,date_2.year);
}
}