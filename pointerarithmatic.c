#include<stdio.h>
  
  int main() {
      int arr[10]={1,2,3,4,5,6,7,8,9,10};
       *p1, *p2, *p3;
      
      p3=&arr[5];                               
        printf("p3=%p *p3=%d\n",p3,*p3);        //6
      
      p1=p3+3;
        printf("p1=%p, *p1=%d\n", p1,*p1);      //9
      
      p2=p3-3;
         printf("p2=%p, *p2=%d\n", p2,*p2);     //3
            ++p1;
            --p2;
         printf("p1=%p, *p1=%d\n", p1,*p1);     //10
         printf("p2=%p, *p2=%d\n", p2,*p2);     //2
      
      int diff=p1-p2;//8
         printf("diff=%d",diff);   
      
     return 0;
  }
