#include<stdio.h>
char name[40],address[50],cindate[10],coutdate[10];
float rent,laundry_bill=0,res_bill=0,game_bill=0;
void inputdata()
{
	printf("Enter your Name: ");
	scanf("%s",name);
	printf("Enter your Address: ");
	scanf("%s",address);
	printf("Enter Check in Date: ");
	scanf("%s",cindate);
	printf("Enter Check out Date: ");
	scanf("%s",coutdate);
}
void roomrent()
{
	int x,n;
	printf("***We have the following types of rooms***\n");
	printf("1. Master Suite  						Rs. 8000 per night\n");
	printf("2. Mini-Suite 							Rs. 7000 per night\n");
	printf("3. Double							Rs. 5000 per night\n");
	printf("4. Single							Rs. 4000 per night\n");
	printf("Enter your choice: ");
	scanf("%d",&x);
	printf("No. of Nights: ");
	scanf("%d",&n);
	if(x==1){
		printf("You have opted Master Suite\n");
		rent=n*8000;
	}
	else if(x==2){
		printf("You have opted Mini-Suite\n");
		rent=n*7000;
	}
	else if(x==3){
		printf("You have opted Double\n");
		rent=n*5000;
	}
	else {
		printf("You have opted Single\n");
		rent=n*4000;
	}
	printf("Your Room rent =  %.2f\n",rent);

}
void restaurent()
{
	int c,d;
	printf("#############RESTAURENT MENU#############\n");
	printf("1.Water							Rs. 50\n");
	printf("2.Tea/Coffee						Rs. 90\n");
	printf("3.Special Breakfast combo				Rs. 200\n");
	printf("4.Special Lunch combo					Rs. 300\n");
	printf("5.Special Dinner combo					Rs. 250\n");
	printf("6.Exit\n");
	while(1)
	{
		printf("Enter Choice: ");
		scanf("%d",&c);
		if (c==1){
			printf("Enter quantity: ");
			scanf("%d",&d);
			res_bill+=50*d;
		}
		else if (c==2){
			printf("Enter quantity: ");
			scanf("%d",&d);
			res_bill+=90*d;
		}
		else if (c==3){
			printf("Enter quantity: ");
			scanf("%d",&d);
			res_bill+=200*d;
		}
		else if (c==4){
			printf("Enter quantity: ");
			scanf("%d",&d);
			res_bill+=300*d;
		}
		else if (c==5){
			printf("Enter quantity: ");
			scanf("%d",&d);
			res_bill+=250*d;
		}
		else if (c==6)
			break;
		else
			printf("Enter Valid option\n");
	}
	printf("Total Food Cost is  %.2f\n",res_bill);

}
void laundry()
{
	int e,f;
	printf("#############LAUNDARY MENU#############\n");
	printf("1.Shorts							Rs. 5\n");
	printf("2.Trousers  							Rs. 10\n");
	printf("3.Shirt								Rs. 15\n");
	printf("4.T-shirt							Rs. 10\n");
	printf("5.Jeans								Rs. 20\n");
	printf("6.Exit\n");
	while(1)
	{
		printf("Enter Choice: ");
		scanf("%d",&e);
		if (e==1){
			printf("Enter quantity: ");
			scanf("%d",&f);
			laundry_bill+=5*f;
		}
		else if (e==2){
			printf("Enter quantity: ");
			scanf("%d",&f);
			laundry_bill+=10*f;
		}
		else if (e==3){
			printf("Enter quantity: ");
			scanf("%d",&f);
			laundry_bill+=15*f;
		}
		else if (e==4){
			printf("Enter quantity: ");
			scanf("%d",&f);
			laundry_bill+=10*f;
		}
		else if (e==5){
			printf("Enter quantity: ");
			scanf("%d",&f);
			laundry_bill+=20*f;
		}
		else if (e==6)
			break;
		else
			printf("Enter Valid option\n");
	}
	printf("Total Laundary Cost is  %.2f\n",laundry_bill);

}
void game()
{
	int g,p;
	printf("#############GAME MENU#############\n");
	printf("1.Bowling							Rs. 150\n");
	printf("2.Cricket   							Rs. 120\n");
	printf("3.Table-Tennis							Rs. 100\n");
	printf("4.Swimming							Rs. 80\n");
	printf("5.Video Games							Rs. 110\n");
	printf("6.Exit\n");
	while(1)
	{
		printf("Enter Choice: ");
		scanf("%d",&g);
		if (g==1){
			printf("Enter no. of Hrs: ");
			scanf("%d",&p);
			game_bill+=150*p;
		}
		else if (g==2){
			printf("Enter no. of Hrs: ");
			scanf("%d",&p);
			game_bill+=120*p;
		}
		else if (g==3){
			printf("Enter no. of Hrs: ");
			scanf("%d",&p);
			game_bill+=100*p;
		}
		else if (g==4){
			printf("Enter no. of Hrs: ");
			scanf("%d",&p);
			game_bill+=80*p;
		}
		else if (g==5){
			printf("Enter no. of Hrs: ");
			scanf("%d",&p);
			game_bill+=110*p;
		}
		else if (g==6)
			break;
		else
			printf("Enter Valid option\n");
	}
	printf("Total Laundary Cost is  %.2f\n",game_bill);

}

void display()
{
	float sub = rent + res_bill + laundry_bill + game_bill;
	printf("#############Aparna Hotel#############\n");
	printf("COUSTEMER DETAILS:  \n");
	printf("Name        				:       %s\n",name);
	printf("Address        				:       %s\n",address);
	printf("Check in date   			:       %s\n",cindate);
	printf("Check in date   			:       %s\n",coutdate);
	printf("Room Rent 				:		Rs. %.2f\n",rent);
	printf("Food Rent 				:		Rs. %.2f\n",res_bill);
	printf("Laundary Rent 				:		Rs. %.2f\n",laundry_bill);
	printf("Game Rent 				:		Rs. %.2f\n",game_bill);
	printf("Sub total bill  			:		Rs. %.2f\n",sub);
	printf("Tax			    		:		Rs. %.2f\n",1800.0);
	printf("Grand total bill  			:		Rs. %.2f\n",sub+1800.0);
}
int main()
{
	int choice;
	while(1)
	{
		printf("#############Aparna Hotel#############\n");
		printf("1.Enter Customer Data\n");
		printf("2.Room Rent\n");
		printf("3.Restaurent Bill\n");
		printf("4.Laundary Bill\n");
		printf("5.Game Bill\n");
		printf("6.Display Total Bill\n");
		printf("7.EXIT\n");
		printf("Enter your option: ");
		scanf("%d",&choice);
		if (choice==7)
			break;
		else{
		switch(choice)
		{
			case 1:inputdata();
			break;
			case 2:roomrent();
			break;
			case 3:restaurent();
			break;
			case 4:laundry();
			break;
			case 5:game();
			break;
			case 6:display();
			break;
			default:printf("Enter valid option☠!\n");
		}
		}
	}
	return 0;
}
