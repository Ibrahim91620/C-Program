#include<stdio.h>
#include<limits.h>

int main(){
    
    int l1=INT_MIN,l2=INT_MIN;
    int a[6]={1,2,40,23,38,6};
   
    for (int i = 0; i <6; i++)
    {
      
    if (a[i]>l1)
    {
        l2=a[i];
        l1=a[i];
    }
    else if (a[i]>l2 && a[i]<l1) 
       {
        l2=a[i];
    }

    }
    printf("second largest is %d ",l1);
    
    
        
    
   
    



    return 0;
}