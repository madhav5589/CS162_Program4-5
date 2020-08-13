#include "pizza.h" // include header file

// Darshita Patel
// This header file is going to manage how to manage Pizza list and provide them to customers.

// constants
const int PIZZA_LIST_SIZE = 20;

class pizza_list
{   
    public:       
      pizza_list();   //constructor - initialize the data members
      ~pizza_list(); // destructor - deallocates the dynamic memory
      void display_list_of_pizzas(); // display list of all pizza to the user
      void search_pizza_by_rating(); // a function to search pizza by rating
      void add_new_pizza(); // a function to add a new pizza
      void display_most_recent_pizza(); // a function to display most recent pizza added to the list
      void display_pizza_by_name();// a function to display the name of the pizza by name - for program #5
    
    private:
      pizza *pizzaArray; // data members
      int size_of_array;
	  int num_of_pizzas;
};



