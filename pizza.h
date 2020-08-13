#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

// Darshita Patel
// the purpose of this header file is to manage an instance of a pizza

// constants
const int PIZZA_NAME_SIZE = 30;
const int PIZZA_DESCR_SIZE = 50;
const int ITEMSTOADD_SIZE = 20;
const int ITEMSTOREMOVE_SIZE = 20;

class pizza
{ 
    public:       
      pizza();   //constructor - initialize the data members
      ~pizza(); // destructor - deallocates the dynamic memory
	  
	  void display_options(); // display available options to the user
      int read_user_choice(); // read in user's choice
      void read();
      void display(); // display the pizza 
      void display_search_by_rating(int inputrating); // display the search results by rating
	  
      void read_pizza_name_for_search(char search_name[]);
      void insert_into_LL();
      void display_linkedlist();
      
	  void show_quit_message();
    
    private:
      char name[PIZZA_NAME_SIZE];
      char description[PIZZA_DESCR_SIZE];
      char itemsToAdd[ITEMSTOADD_SIZE];
      char itemsToRemove[ITEMSTOREMOVE_SIZE];
      int rating; // between 0 and 5
};



