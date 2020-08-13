#include "pizza.h" // include header file

// Darshita Patel
// The purpose of this function is to manage an instance of pizza class and various functions to manage the list of pizza and display it to the user

pizza::pizza() {
    name[0] = '\0';
}

pizza::~pizza() {
    name[0] = '\0';
}

// A linked list node
struct Node {
   char name[30];
   struct Node *next;
};

struct Node* head = NULL;

void pizza::insert_into_LL()
{
    // copy all pizzas into linkedlist
    cout << "Going to copy name now" << endl;
    
    cout << "Current pizza name is: " << name << endl;
    
    struct Node* curr = head;
    
    
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   strcpy(new_node->name, name);
   new_node->next = NULL;
   
    if (head == NULL || strcmp(head->name, name) > 0)
    { 
        new_node->next = head; 
        head = new_node; 
    } 
    else
    { 
        curr = head; 
        while (curr->next != NULL && strcmp(curr->next->name, new_node->name) < 0)
        { 
            curr = curr->next; 
        } 
        new_node->next = curr->next; 
        curr->next = new_node; 
    }
}

void pizza::display_linkedlist()
{
    cout << "\nPrinting list of Pizzas sorted by name:" << endl;
    struct Node* curr = head;
    while (curr != NULL) {
        cout << curr->name << " " << endl;
        curr = curr->next;
    }
}

// display options and read in the input from the user
void pizza::display_options()
{
    cout << "Here are the options available:" << endl;
    
    cout << "1. Add a new pizza" << endl;
    cout << "2. Display the most recently added pizza" << endl;
    cout << "3. Search for a pizza" << endl;
    cout << "4. Display the entire list of pizzas" << endl;
    cout << "5. Display the entire list of pizzas by pizza name" << endl; // using LinkedList for program #5
    cout << "6. Quit" << endl;
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

// a function to display the pizza to the user
void pizza::display()
{
    cout << name << "\t" << description << "\t" << itemsToAdd << "\t" <<
         itemsToRemove << "\t" << rating <<  endl;
}

// a function to display the pizza by rating
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