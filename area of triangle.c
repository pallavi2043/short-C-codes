#include<stdio.h>
#include<math.h>
void main(){
double s,a,b,c,area;
printf("enter values of a");
scanf("%f",&a);
  printf("enter the value of b");
  scanf("%f",&b);
  printf("enter the value of c");
  scanf("%f",&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area is=%f",area);
}
