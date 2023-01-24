// WAP to input two numbers from the keyboard and print thir sum.
#include<stdio.h>
int main()
{
int number_01,number_02,sum,average;
printf("\t\t\t------------------FIND THE SUM OF TWO NUMBER-------------");
printf("\nENTER NUMBER_01:\t");
scanf("%d",&number_01);
printf("\nENTER NUMBER_02:\t");
scanf("%d",&number_02);
sum=number_01+number_02;
printf("\nSUM=\t\t\t%d",sum);

//WAP to input two numbers from the keyboard and print thir average.
printf("\n\n\t\t\t----------------FIND THE AVERAGE OF TWO NUMBER-------------\n");
average=sum/2;
printf("\n\nAVERAGE=\t\t%d",average);

//WAP to find the area of circle.
float pi=3.14f,radius,area_of_circle;
printf("\n\n\t\t\t-------------FIND AREA OF CIRCLE---------------\n");
printf("\nENTER RADIUS OF A CIRCLE:\t");
scanf("%g",&radius);
area_of_circle=pi*radius*radius;
printf("\nAREA OF CIRCLE=\t\t\t%g",area_of_circle);

//WAP to print a total second in a give time (hrs,min,sec's).

printf("\n\n\t\t\t------------------FIND TOTAL SECOND----------------------");

int hrs,min,sec,total_second;
printf("\nENTER NUMBERS OF HOURS:\t\t");
scanf("%d",&hrs);
printf("\nENTER NUMBERS OF MIN:\t\t");
scanf("%d",&min);
printf("\nENTER NUMBER OF SEC:\t\t");
scanf("%d",&sec);
printf("\n\t\t\t%dhrs,%dmin,%dsec",hrs,min,sec);
total_second=(hrs*3600)+(min*60)+sec;
printf("\nTOTAL SECOND =\t\t\t%dsec",total_second);

    return 0;
}