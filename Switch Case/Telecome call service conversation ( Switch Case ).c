#include<stdio.h>
#include<conio.h>

int main(){
	
	int choice,subchoice;
	
	printf("----- Telecome call service conversation -----");
	printf("\n\nPress 1 For English");
	printf("\nPress 2 For Hindi");
	printf("\nPress 3 For Gujarati");
	printf("\nEnter Your Choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:  // English
            printf("\n\nPress 1 for Internet Recharge");
            printf("\nPress 2 for Top-up Recharge");
            printf("\nPress 3 for Special Recharge");
            printf("\nEnter your subchoice: ");
            scanf("%d",&subchoice);
            
        switch(subchoice){
		case 1:
			printf("\nYou have successfully done a Internet Recharge\n");
			break;
			
		case 2:
			printf("You have successfully done a Top-up Recharge\n");
			break;
			
		case 3:
			printf("You have successfully done a Special Recharge\n");
			break;
		
		default:
			printf("\nInvalid SubChoice !!");
        }
	    break;
            
            
		case 2: // Hindi
		    printf("\n\nInternet Recharge ke liye 1 dabaiye");
            printf("\nTop-up Recharge ke liye 2 dabaiye");
            printf("\nSpecial Recharge ke liye 3 dabaiye");
            printf("\nEnter your subchoice: ");
            scanf("%d",&subchoice);
            
        switch(subchoice){
		case 1:
			printf("\nApne safaltapurvak Internet Recharge kar liya he\n");
			 break;
			
		case 2:
			printf("\nApne safaltapurvak Top-up Recharge kar liya he\n");
			break;
			
		case 3:
			printf("\nApne safaltapurvak Special Recharge kar liya he\n");
			break;
		
		default:
			printf("Invalid SubChoice !!");
        }
	    break;
            
            
			
		case 3: //Gujarati
			printf("\n\nInternet Recharge mate 1 dabavo");
            printf("\nTop-up Recharge mate 2 dabavo");
            printf("\nSpecial Recharge mate 3 dabavo");
            printf("\nEnter your subchoice: ");
            scanf("%d",&subchoice);
            
        switch(subchoice){
		case 1:
			printf("\n Tame safaltapurvak Internet Recharge karyu chhe\n");
			 break;
			
		case 2:
			printf("\nTame safaltapurvak Top-up Recharge karyu chhe\n");
			break;
			
		case 3:
			printf("\nTame safaltapurvak Special Recharge karyu chhe\n");
			break;
		
		default:
			printf("Invalid SubChoice !!");
        }
	    break;
		
		default:
			printf("\nInvalid Choice !!");
	}


	return 0;
}
