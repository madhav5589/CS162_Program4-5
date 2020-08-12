#include "pizza_list.h"

pizza_list() {
    
}

~pizza_list() {
    
}

// a function to display the list of available pizza
void pizza_list::display_list_of_pizzas(pizzaMenu pizza[], int no_of_pizza)
{
    cout << no_of_pizza << " Pizzas available." << endl;
    cout << "Name\tDescription\tItemsToAdd\tItemsToRemove\tRating\n";
    
    for(int i = 0; i< no_of_pizza; i++) {
        cout << pizza[i].name << "\t" << pizza[i].description << "\t" << pizza[i].itemsToAdd << "\t" <<
            pizza[i].itemsToRemove << "\t" << pizza[i].rating <<  endl;
    }
}

// a function to search the pizza from available pizzas
void pizza_list::search_pizza_by_rating(char name[], pizzaMenu pizza[], int no_of_pizza)
{
    bool found = false;
    cout << "Search pizza name is: " << name << endl;
    for(int i=0; i<no_of_pizza; i++) 
    {
        if(strcmp(pizza[i].name, name) == 0) 
        {
            cout << "Here is the Pizza we found: " << endl;
            display_list_of_pizzas(pizza, 1);
            found = true;
        }
    }
    if(found == false) {
        cout << "No pizza found matching entered name." << endl;
    }
    
}