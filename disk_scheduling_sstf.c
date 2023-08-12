#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int RQ[100],i, n, totalheadmoment=0,initial=0,count=0;
        printf("enter the number of requests\n");
    scanf("%d",&n);
    
  
     printf("enter the request sequence\n");
    for(i=0;i<n;i++){
        scanf("%d",&RQ[i]); 
    }
      printf("enter initial head position\n");
    scanf("%d",&initial);
    while(count!=n){
        int min=1000,d,index;
         for(i=0;i<n;i++){
        d=abs(RQ[i]-initial); 
        if (min>d)
        {
            min=d;
            index=i;
        }
    }
    totalheadmoment=totalheadmoment+min;
    initial=RQ[index];
    RQ[index]=1000;
    count++;
    }

    printf("total head movement is %d\n",totalheadmoment);
    return 0;
}
