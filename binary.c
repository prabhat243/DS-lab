#include<stdio.h>
#include<stdlib.h>

 void main(){

   int arr[100],beg,mid,end,i,n,num;

   printf("Enter size of given array ");
   scanf("%d",&n);

   printf(" Enter in Sorted Sequence \n");

   for(i=0;i<n;i++)
   {   
       scanf("%d",&arr[i]);
   }   


   printf("enter valve to search  ");
   scanf("%d",&num);
  
  
void Binary(int arr[],int num,int beg,int end)
            {
   
   int mid;

   if(beg > end){
       
        printf(" element not found");
        
   } else {
       
      
      mid = (beg + end)/2;
    
      
      if(arr[mid]==num){
          
            printf("element is present at %d ",mid);
            exit(0);
            
        }else if(arr[mid] > num){
            
            Binary(arr, num, beg, mid-1);
        
        }else{
            
            Binary(arr, num, mid+1, end);
        }   
    }  
}
 BinarySearch(arr,num,beg,end);
 

}
