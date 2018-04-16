#include<stdio.h>
float fun(float h)
{
  float h1=(int)(100*h+0.5);
  printf("h1=%f",h1);
  return h1/100.0;
}
main(){
  float a;
  printf("Enter a :");
  scanf("%f",&a);
  printf("The orignal data is:");
  printf("%f\n\n",a);
  printf("The result :  %f\n",fun(a));
}

