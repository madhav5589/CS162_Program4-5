#include "pizza_list.h"

// #include "pizza.h";

int main()
{
    pizza piz; // an instance of pizza class
    pizza_list list;
	
    int selectedOption = 0; // user selected input
    
	// loop through the different options until user enters option 4 (to quit the application)
    while(selectedOption != 5) {
        
        if(selectedOption == 1) {
            // add pizza
            list.add_new_pizza();
        }
        else if(selectedOption == 2)
        {
			// display the most recent pizza
            list.display_most_recent_pizza();
        }
        else if (selectedOption == 3)
        {
			// search and display pizzas by rating
            list.search_pizza_by_rating();
        }
        else if (selectedOption == 4)
        {
			list.display_list_of_pizzas();    
        }
        
        piz.display_options(); // function call to display options
        selectedOption = piz.read_user_choice(); // set the user input to variable
    }
    
    piz.show_quit_message(); // when user selects 4, show message
    
    return 0;
}
