#include<stdio.h>
#include<stdlib.h>
struct Movie
{
    char lengthOfMovie[10];
    char genreOfMovie[10];
    char contentOfMovie[400];
    char starsOfMovie[100];
};
struct Sans
{
    char nameOfMovie[20];
	int dayOfSans;
    int monthOfSans;
    int yearOfSans;
    int hourOfSans;
    int minuteOfSans;
    int capacityRemaining;
};

int main()
{
    int option,numberOfTickets;
    FILE *fptr;
    fptr=fopen("D://cinema//cinema//cinema.txt","wb");
    struct Movie movie1OfSalon1={"175min","Crime","The aging patriarch of an organized crime dynasty transfers control of his clandestine empire to his reluctant son","Marlon Brando, Al Pacino, James Caan"};
    struct Movie movie2OfSalon1={"152min","Action","When the menace known as the Joker wreaks havoc and chaos on the people of Gotham, Batman must accept one of the greatest psychological and physical tests of his ability to fight injustice","Christian Bale, Heath Ledger, Aaron Eckhart"};
    struct Movie movie1OfSalon2={"139min","Drama","An insomniac office worker and a devil-may-care soapmaker form an underground fight club that evolves into something much, much more","Brad Pitt, Edward Norton, Meat Loaf"};
    struct Movie movie2OfSalon2={"148min","Sci-Fi","A thief who steals corporate secrets through the use of dream-sharing technology is given the inverse task of planting an idea into the mind of a C.E.O"," Leonardo DiCaprio, Joseph Gordon-Levitt, Ellen Page"};
    fwrite(&movie1OfSalon1,sizeof(struct Movie),1,fptr);
    fwrite(&movie2OfSalon1,sizeof(struct Movie),1,fptr);
    fwrite(&movie1OfSalon2,sizeof(struct Movie),1,fptr);
    fwrite(&movie2OfSalon2,sizeof(struct Movie),1,fptr);
   	struct Sans sans1OfSalon1={"The Godfather",10,1,2020,15,30,60};
	struct Sans sans2OfSalon1={"The Dark Knight",15,1,2020,14,30,50};
	struct Sans sans1OfSalon2={"Fight Club",20,1,2020,17,15,70};
	struct Sans sans2OfSalon2={"Inception",25,1,2020,10,45,50};
    fwrite(&sans1OfSalon1,sizeof(struct Sans),1,fptr);
    fwrite(&sans2OfSalon1,sizeof(struct Sans),1,fptr);
    fwrite(&sans1OfSalon2,sizeof(struct Sans),1,fptr);
    fwrite(&sans2OfSalon2,sizeof(struct Sans),1,fptr);
    fclose(fptr);
	fptr=fopen("D://cinema//cinema//cinema.txt","rb");
    printf("**WELCOME**\n\n1.Buy a Ticket\n2.Add a New Salon\n");
    scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
	printf("Choose a Salon:\n1.salon 1\n2.salon 2\n");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			{
				fread(&movie1OfSalon1,sizeof(struct Movie),1,fptr);
				fread(&movie2OfSalon1,sizeof(struct Movie),1,fptr);
				fread(&movie1OfSalon2,sizeof(struct Movie),1,fptr);
				fread(&movie2OfSalon2,sizeof(struct Movie),1,fptr);
				fread(&sans1OfSalon1,sizeof(struct Sans),1,fptr);
				fread(&sans2OfSalon1,sizeof(struct Sans),1,fptr);
				fread(&sans1OfSalon2,sizeof(struct Sans),1,fptr);
				fread(&sans2OfSalon2,sizeof(struct Sans),1,fptr);
				printf("Choose a Sans:\n\n1.Sans 1 ==> *%s*\nDate: %d/%d/%d\nTime: %d:%d\nCapacity Remaining: %d\nRuntime: %s\nGenre: %s\nContent: %s\nStars: %s\n"
				,sans1OfSalon1.nameOfMovie,sans1OfSalon1.dayOfSans,sans1OfSalon1.monthOfSans,sans1OfSalon1.yearOfSans,sans1OfSalon1.hourOfSans,sans1OfSalon1.minuteOfSans,sans1OfSalon1.capacityRemaining,movie1OfSalon1.lengthOfMovie,movie1OfSalon1.genreOfMovie,movie1OfSalon1.contentOfMovie,movie1OfSalon1.starsOfMovie);
				printf("\n\n2.Sans 2 ==> *%s*\nDate: %d/%d/%d\nTime: %d:%d\nCapacity Remaining: %d\nRuntime: %s\nGenre: %s\nContent: %s\nStars: %s\n"
				,sans2OfSalon1.nameOfMovie,sans2OfSalon1.dayOfSans,sans2OfSalon1.monthOfSans,sans2OfSalon1.yearOfSans,sans2OfSalon1.hourOfSans,sans2OfSalon1.minuteOfSans,sans2OfSalon1.capacityRemaining,movie2OfSalon1.lengthOfMovie,movie2OfSalon1.genreOfMovie,movie2OfSalon1.contentOfMovie,movie2OfSalon1.starsOfMovie);
				scanf("%d",&option);
				printf("How many Tickets Do You Want To Buy?\n");
				scanf("%d",&numberOfTickets);
				switch(option)
				{
					case 1:
						{
							if(sans1OfSalon1.capacityRemaining>=numberOfTickets)
							{
								printf("Successfully Done!");
								sans1OfSalon1.capacityRemaining-=numberOfTickets;
							}
							else
							printf("Not Enough Capacity!");
						}
						break;
					case 2:
					    {
					        if(sans2OfSalon1.capacityRemaining>=numberOfTickets)
							{
								printf("Successfully Done!");
								sans2OfSalon1.capacityRemaining-=numberOfTickets;
							}
							else
							printf("Not Enough Capacity!");	
				    	} 	
				    	break;
				}
			}
			break;
		case 2:
			{
				printf("Choose a Sans:\n\n1.Sans 1 ==> *%s*\nDate: %d/%d/%d\nTime: %d:%d\nCapacity Remaining: %d\nRuntime: %s\nGenre: %s\nContent: %s\nStars: %s\n"
				,sans1OfSalon2.nameOfMovie,sans1OfSalon2.dayOfSans,sans1OfSalon2.monthOfSans,sans1OfSalon2.yearOfSans,sans1OfSalon2.hourOfSans,sans1OfSalon2.minuteOfSans,sans1OfSalon2.capacityRemaining,movie1OfSalon2.lengthOfMovie,movie1OfSalon2.genreOfMovie,movie1OfSalon2.contentOfMovie,movie1OfSalon2.starsOfMovie);
				printf("\n\n2.Sans 2 ==> *%s*\nDate: %d/%d/%d\nTime: %d:%d\nCapacity Remaining: %d\nRuntime: %s\nGenre: %s\nContent: %s\nStars: %s\n"
				,sans2OfSalon2.nameOfMovie,sans2OfSalon2.dayOfSans,sans2OfSalon2.monthOfSans,sans2OfSalon2.yearOfSans,sans2OfSalon2.hourOfSans,sans2OfSalon2.minuteOfSans,sans2OfSalon2.capacityRemaining,movie2OfSalon2.lengthOfMovie,movie2OfSalon2.genreOfMovie,movie2OfSalon2.contentOfMovie,movie2OfSalon2.starsOfMovie);
				scanf("%d",&option);
				printf("How many Tickets Do You Want To Buy\n?");
				scanf("%d",&numberOfTickets);
				switch(option)
				{
					case 1:
						{
							if(sans1OfSalon2.capacityRemaining>=numberOfTickets)
							{
								printf("Successfully Done!");
								sans1OfSalon2.capacityRemaining-=numberOfTickets;
							}
							else
							printf("Not Enough Capacity!");
						}
						break;
					case 2:
					    {
					        if(sans2OfSalon2.capacityRemaining>=numberOfTickets)
							{
								printf("Successfully Done!");
								sans2OfSalon2.capacityRemaining-=numberOfTickets;
							}
							else
							printf("Not Enough Capacity!");	
				    	} 
						break;	
				}
			}
			break;
	}
}
			break;
		case 2:
		    /*addSalon();*/
			break;	
	} 
fclose(fptr);   
return 0;
}

