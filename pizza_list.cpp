#include "pizza_list.h"

pizza_list::pizza_list() {
    size_of_array = 20;
    pizzaArray = new pizza[size_of_array];
}

pizza_list::~pizza_list() {
    if(pizzaArray != NULL)
    {
        delete[] pizzaArray;
    }
    pizzaArray = 0;
    
    num_of_pizzas = 0;
    size_of_array = 0;
}

// a function to display the list of available pizza
void pizza_list::display_list_of_pizzas()
{
 cout << num_of_pizzas << " Pizzas available." << endl;
 cout << "Name\tDescription\tItemsToAdd\tItemsToRemove\tRating\n";
 for(int i = 0; i< num_of_pizzas; i++) {
     pizzaArray[i].display();
 }
}


// a function to add new pizaa to menu
void pizza_list::add_new_pizza() {
 // int i = num_of_pizzas;
 pizzaArray[num_of_pizzas].read();
 num_of_pizzas++;
 size_of_array++;
}


// a function to search the pizza from available pizzas
void pizza_list::search_pizza_by_rating()
{
     int inputrating;
     cout<< "Enter the rating to search the pizza: ";
     cin >> inputrating;
     cin.ignore(100, '\n');
 
 for(int i=0; i<num_of_pizzas; i++) 
 { 
    pizzaArray[i].display_search_by_rating(inputrating);
 }
}

void pizza_list::display_most_recent_pizza()
{
    pizzaArray[num_of_pizzas-1].display();
}
