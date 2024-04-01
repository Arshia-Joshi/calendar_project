 #include<stdio.h>
 void swap(int*a,int*b,int x,int y)
 {
 
  int temp= *a;
  *a=*b;
  *b=temp;
 
  int temp1= x;
  x=y;
  y=temp1;
  printf("%d\n%d\n",x,y);
 }
 int main()
 {
  int a=10, b=20, x=30, y=40;
swap(&a,&b,x,y);
printf("%d\n%d\n%d\n%d\n",a,b,x,y);
return 0;
 }