#include "pizza_list.h";

// #include "pizza.h";

int main()
{
    pizza piz; // an instance of pizza class
	
    int selectedOption = 0; // user selected input
    
	// loop through the different options until user enters option 4 (to quit the application)
    while(selectedOption != 4) {
        if(selectedOption == 1) {
            // add pizza
            // add_new_pizza(pizza, no_of_pizza);
            // save(pizza, no_of_pizza);
        }
        else if (selectedOption == 2)
        {
			// search the pizza by name
            // get the name to searcht the pizza
            char search_name[30];
            
            // read_pizza_name_for_search(search_name);
            
            // search_pizza(search_name, pizza, no_of_pizza);
        }
        else if(selectedOption == 3)
        {
			// display the list of pizza available
            // no_of_pizza = load(pizza);
            // display_list_of_pizzas(pizza, no_of_pizza);    
        } 
        
        piz.display_options(); // function call to display options
        selectedOption = piz.read_user_choice(); // set the user input to variable
    }
    
    piz.show_quit_message(); // when user selects 4, show message
    
    return 0;
}
