#include<stdio.h>

int main(){
	
   int arr[8] = {10,-12,-25,-3,4,6,7,-5};
   int i;
   
   for(i=arr[8]; i>=0; i--){
   	if(arr[i]<0){
   		printf("%d ",arr[i]);
	   }
   }
	
	return 0;
}
