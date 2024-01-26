#include<stdio.h>
void swap(int a, int b){
 
 int temp;
 temp=a;
 a=b;
 b=temp;
 printf("a=%d,b=%d",a,b);
}
int main(){



swap(3,5);




    return 0;
}