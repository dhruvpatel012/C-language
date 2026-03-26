#include<stdio.h>

void cube(int arr[20][20],int rows,int col); //function definition

void cube(int arr[20][20],int rows,int col){ // function declaration
	
	
	int i,*ptr;
	
	printf("\n\nCube of all element is: \n\n");
	
	ptr = &arr[0][0];
	
	for(i=0; i<rows*col; i++){
		printf("%d ", (*ptr)*(*ptr)*(*ptr));
		ptr++;
		
		 if((i+1)%col==0){ //print all elements of column,one row is finished
            printf("\n");
       }
	}	
}

int main(){
	
	int rows,col,i,j;
	
	// take a size of rows and column from user
	printf("Enetr Number Of Rows: ");
	scanf("%d",&rows);
	
	printf("\nEnetr Number Of Column: ");
	scanf("%d",&col);
	
	
	int arr[rows][col];
	
	//take a array element form user
	printf("\nEnter Array Element: \n");
	
	for(i=0; i<rows; i++){
		for(j=0; j<col; j++){
			printf("\narr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	cube(arr,rows,col); // function calling
	
	return 0;
}
