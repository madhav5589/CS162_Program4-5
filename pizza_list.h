#include "pizza.h"

// Darshita Patel
// This codde is going to manage how to manage Pizza list and provide them to customers

// constants
const int PIZZA_LIST_SIZE = 20;

class pizza_list
{ 
    
    public:       
      pizza_list();   //constructor - initialize the data members
      ~pizza_list(); // destructor - deallocates the dynamic memory
	  
	  void display_list_of_pizzas(pizzaMenu pizza[], int no_of_pizza); // display all pizzas
	  void search_pizza_by_rating(char name[], pizzaMenu pizza[], int no_of_pizza); // search and display pizzas by rating
	  
      // void read_pizza_name_for_search(char search_name[]);
    
    private:
      pizza *array;
	  int size_of_array;
	  int num_of_pizzas;
};



