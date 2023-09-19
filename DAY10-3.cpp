#include<stdio.h>
#include<math.h>


int shipWithinDays(int* weights, int weightsSize, int days){
     
       int left=0,right=0;
       for(int i=0;i<weightsSize;i++)
       {
            left=fmax(left,weights[i]);
            right+=weights[i];
       }
 
       while(left<right)
       {
            int mid=(left+right)/2;
            int need=1,w=0;
            
            for(int j=0;j<weightsSize;j++)
            {
                   if(w+weights[j]>mid)
                   { 
                         w=0;
                         need++;
                   }
                   w+=weights[j];
            }
            if(need>days)
            {
                 left=mid+1;
            }
            else right=mid;       }
       return left;
}
