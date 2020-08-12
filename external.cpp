#include "pizza.h";

// save the pizza to external file
void save(pizzaMenu pizza[], int no_of_pizza) {
    ofstream file_out;
    file_out.open("pizza.txt");
    if(file_out) {
        for(int i = 0; i<no_of_pizza; i++) {
            file_out << pizza[i].name << "|" << pizza[i].description << "|" << pizza[i].itemsToAdd << "|" << pizza[i].itemsToRemove << "|" << pizza[i].rating << endl;
        }
        file_out.close();
    }
}

// a function to load the pizza from a external data file
int load(pizzaMenu pizza[]) {
    cout << "Inside load function" << endl;
    ifstream file_in;
    int i = 0;
    
    // load any pizzas stored in an external data file
    file_in.open("pizza.txt");
    if(file_in) {
        // file_in.get(pizza)
        while(!file_in.eof() && i < PIZZASIZE) { // we are storing 20 pizzas
            file_in.get(pizza[i].name, 30, '|');
            file_in.ignore(100, '|');
            file_in.get(pizza[i].description, 50, '|');
            file_in.ignore(100, '|');
            file_in.get(pizza[i].itemsToAdd, 20, '|');
            file_in.ignore(100, '|');
            file_in.get(pizza[i].itemsToRemove, 20, '|');
            file_in.ignore(100, '|');
            file_in >> pizza[i].rating;
            file_in.ignore(100, '|');
            ++i;
        }
        file_in.close();
    }
    return i;
}