#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

// Darshita Patel

// constants
const int PIZZA_NAME_SIZE = 30;
const int PIZZA_DESCR_SIZE = 50;
const int ITEMSTOADD_SIZE = 20;
const int ITEMSTOREMOVE_SIZE = 20;

class pizza_list
{ 
    public:       
      pizza();   //constructor - initialize the data members
      ~pizza(); // destructor - deallocates the dynamic memory
	  
	  void display_options(); // display available options to the user
      int read_user_choice(); // read in user's choice
	  
      void add_new_pizza(pizzaMenu pizza[], int &no_of_pizza); // method to add new pizza      
      void read_pizza_name_for_search(char search_name[]);
      void search_pizza(char name[], pizzaMenu pizza[], int no_of_pizza);
      
	  void show_quit_message();
    
    private:
      char name[PIZZA_NAME_SIZE];
      char description[PIZZA_DESCR_SIZE];
      char itemsToAdd[ITEMSTOADD_SIZE];
      char itemsToRemove[ITEMSTOREMOVE_SIZE];
      int rating; // between 0 and 5
};



