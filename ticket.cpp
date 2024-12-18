#include<stdio.h>
int main()
{
	int route ,travel_class,num_tickets;
	float ticket_price,total_price;
	
	printf("welcome to the Train Booking System\n");
	printf("select a route:\n");
	printf("1.Route A (city A to city B)\n");
    printf("2.Route B (city B to city C)\n");
    printf("3.Route C (city C to city A)\n");
    printf("Enter your choice(1/2/3):");
    scanf("%d",&route);
    
    
    if(route< 1||route> 3)
    {
    	printf("Invalid route selected! Please choose a valid route (1,2,or 3).\n");
    	return 0;
	}
	
	printf("\n select travel class:\n");
	printf("1.First class");
	printf("2.Second class");
	printf("3.sleeper class");
	printf("Enter your choice(1/2/3)");
	scanf("%d",&travel_class);
	
	if(travel_class< 1||travel_class> 3)
	{
    	printf("Invalid class selected! Please choose a valid class (1,2,or 3).\n");
    	return 1;
	}
	
	printf("\n Enter the number of ticket");
	scanf("%d",&num_tickets);
	
	if(route==1)
	  {
	  	if(travel_class==1)
	  	{
	  		ticket_price=1000.0;
		}
		else if(travel_class==2)
		{
	     	ticket_price=760.0;
		}
		else if(travel_class==3)
		{
	     	ticket_price=430.0;
		}
      }
      
      
	else if(route==2)
	  {
	  	if(travel_class==1)
	  	{
	  		ticket_price=620.0;
		}
		else if(travel_class==2)
		{
	     	ticket_price=475.0;
		}
		else if(travel_class==3)
		{
	     	ticket_price=240.0;
		}
	  }	
	else if(route==3)
	  {
	  	if(travel_class==1)
	  	{
	  		ticket_price=550.0;
		}
		else if(travel_class==2)
		{
	     	ticket_price=370.0;
		}
		else if(travel_class==3)
		{
	     	ticket_price=135.0;
		}
	  }		
		
		total_price=ticket_price*num_tickets;
		
		printf("\nTicket booking details:\n");
		printf("Route:");
		if(route==1) printf("city A to city B\n");
		else if(route==2)printf("city B to city C\n");
		else if(route==3)printf("city C to city A\n");
		
		printf("class: ");
		if(travel_class==1) printf("First class\n");
		else if(travel_class==2)printf("second class\n");
		else if(travel_class==3)printf("sleeper class \n");
		
		printf("Number of ticket:%d\n",num_tickets);
		printf("Total cost :%.2f\n",total_price);
		
		return 0;
		
		
		
		
		
		
		
		
		
		
	  }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
    
    
    
    
    
    
    
    
    
    
    
    
    
    

