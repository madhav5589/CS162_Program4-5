#include "pizza.h"

pizza::pizza() {
    name[0] = '\0';
}

pizza::~pizza() {
    name[0] = '\0';
}

// display options and read in the input from the user
void pizza::display_options()
{
    cout << "Here are the options available:" << endl;
    
    cout << "1. Add a new pizza" << endl;
    cout << "2. Display the most recently added pizza" << endl;
    cout << "3. Search for a pizza" << endl;
    cout << "4. Display the entire list of pizzas" << endl;
    cout << "5. Quit" << endl;
}

// a function to read the user entered option
int pizza::read_user_choice() {
    int selectedOption = 0;
    cout << "Please enter your choice: ";
    cin >> selectedOption;
    cin.ignore(100, '\n');
    return selectedOption;
}

// read pizza entered by user to add to the list
void pizza:: read() {
     cout << "Enter the name of the pizaa: ";
     cin.get(name, 30);
     cin.ignore(100, '\n');
     cout << "Enter the description of the pizaa: ";
     cin.get(description, 50);
     cin.ignore(100, '\n');
     cout << "Enter the items to add on the pizaa: ";
     cin.get(itemsToAdd, 20);
     cin.ignore(100, '\n');
     cout << "Enter the items to remove from the pizaa: ";
     cin.get(itemsToRemove, 20);
     cin.ignore(100, '\n');
     cout << "Enter the rating of the pizaa: ";
     cin >> rating;
     cin.ignore(100, '\n');
     cout << "Pizza added successfully." << endl;
}

void pizza::display()
{
    cout << name << "\t" << description << "\t" << itemsToAdd << "\t" <<
         itemsToRemove << "\t" << rating <<  endl;
}

void pizza:: display_search_by_rating(int inputrating)
{
    if(rating == inputrating) 
    {
        cout << name << "\t" << description << "\t" << itemsToAdd << "\t" <<
         itemsToRemove << "\t" << rating <<  endl;
    }
}


// a function to show the greeting message when user wants to quit the application
void pizza::show_quit_message()
{
    cout << "Thank you for using our application. Have a great day.!" << endl;    
}