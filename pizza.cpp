#include "pizza.h";


// display options and read in the input from the user
void display_options()
{
    cout << "Here are the options available:" << endl;
    // cout << "Please select an option below:" <<endl;
    cout << "1. Add a new pizza" << endl;
    cout << "2. Search for a pizza" << endl;
    cout << "3. Display the entire list of pizzas" << endl;
    cout << "4. Quit" << endl;
}

// a function to read the user entered option
int read_user_choice() {
    int selectedOption = 0;
    cout << "Please enter your choice: ";
    cin >> selectedOption;
    cin.ignore(100, '\n');
    return selectedOption;
}

// a function to add new pizaa to menu
void add_new_pizza(pizzaMenu pizza[], int &no_of_pizza) {
    int i = no_of_pizza;
    cout << "Enter the name of the pizaa: ";
    cin.get(pizza[i].name, 30);
    cin.ignore(100, '\n');
    
    cout << "Enter the description of the pizaa: ";
    cin.get(pizza[i].description, 50);
    cin.ignore(100, '\n');
    
    cout << "Enter the items to add on the pizaa: ";
    cin.get(pizza[i].itemsToAdd, 20);
    cin.ignore(100, '\n');
    
    cout << "Enter the items to remove from the pizaa: ";
    cin.get(pizza[i].itemsToRemove, 20);
    cin.ignore(100, '\n');
    
    cout << "Enter the rating of the pizaa: ";
    cin >> pizza[i].rating;
    cin.ignore(100, '\n');
    
    no_of_pizza++;
    cout << "Pizza added successfully." << endl;
}


// a function to show the greeting message when user wants to quit the application
void show_quit_message()
{
    cout << "Thank you for using our application. Have a great day.!" << endl;    
}