#include "pizza.h";

pizza() {
    
}

~pizza() {
    
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



// a function to show the greeting message when user wants to quit the application
void pizza::show_quit_message()
{
    cout << "Thank you for using our application. Have a great day.!" << endl;    
}