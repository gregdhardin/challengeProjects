/*
 * This is the final version of this challenge to modularize a previous program.  I've learned that functions cannot "see" into functions, 
 * so things with variables that need to be used by all cannot be discretely modularized.  Utility functions can be modularized
 * within the functions though, like input validation, menu display.  But functionality has to be consolidated into one function.
 * Basically it is the "main()" function we've been using up to this point.  Instead I have just renamed it and something else,
then called it into the actual main() function. 
 * 
 * 
 */

#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <climits>
#include <stdbool.h>

using namespace std;

void machine();
void ill_fate();
void get_nums(vector<int> &crunch);
void menu_sel();
void handle_add(vector<int> &crunch);
void handle_find(const vector<int> &crunch);
void handle_total(const vector<int> &crunch);
void handle_printr(const vector<int> &crunch);
void handle_mean(const vector<int> &crunch);
void handle_smallest(const vector<int> &crunch);
void handle_largest(const vector<int> &crunch);
int get_total(const vector<int> &crunch);
int calculate_mean(const vector<int> &crunch);
int get_smallest(const vector<int> &crunch);

void get_nums(vector<int> &crunch){
    cout << "Please load the Cruncher" << endl;
    cout << "========================" << endl;
    int nums {};
    cout << "\nHow many numbers would you like to enter? ";
    cin >> nums;
        ill_fate();
        
    for(int i{1}; i <= nums; ++i) {
//  created variable 'i' for iteratation through the variable 'nums'
        int crunch_items{};
        cout << "\nPlease enter your number " << i << ": ";
        cin >> crunch_items;
        crunch.push_back(crunch_items);
        
        }
        cout << "You entered:" << " ";
        for(auto crunches: crunch) {
            cout << crunches << " ";
        }
}

int get_smallest(const vector<int> &crunch){
    int smallest = crunch.at(0);
    for (auto crunches: crunch) 
        if (crunches < smallest)
            smallest = crunches;
    return smallest;
}

int get_largest(const vector<int> &crunch){
    int largest = crunch.at(0);
    for (auto crunches: crunch) 
        if (crunches < largest)
            largest = crunches;
    return largest;
}

int calculate_total(const vector<int> &crunch){
    int total {};
    for(auto crunches: crunch){
        total += crunches; 
    }    
        return total;
    
}

int calculate_mean(const vector<int> &crunch){
        int total {};
    for (auto crunches: crunch)
        total += crunches;
    return static_cast<double>(total)/crunch.size();

}

void handle_add(vector<int> &crunch){
    int nums {};
    cout << "\nHow many numbers would you like to enter? ";
    cin >> nums;
        ill_fate();
        
    for(int i{1}; i <= nums; ++i) {
//  created variable 'i' for iteratation through the variable 'nums'
        int crunch_items{};
        cout << "\nPlease enter your number " << i << ": ";
        cin >> crunch_items;
        crunch.push_back(crunch_items);
        
        }
        cout << "You entered:" << " ";
        for(auto crunches: crunch) {
            cout << crunches << " ";
        }
}
void handle_find(const vector<int> &crunch){
    int search;
        cout << "What number are you looking for? ";
        cin >> search;
            for(int i = 0; i != search; ++i){
                if(crunch[i] == search){
                    cout << "YOur number is in the cruncher";
                
            }else
                cout << "That number is not in the cruncher";
    }
}
void handle_largest(const vector<int> &crunch){
    if (crunch.size() == 0)
        cout << "Unable to determine the largest - list is empty" << endl;
    else    
        cout << "The largest element in the list is " << get_largest(crunch) << endl;
}

void handle_smallest(const vector<int> &crunch){
    
     if (crunch.size() == 0)
        cout << "Unable to determine the smallest - list is empty" << endl;
    else    
        cout << "The smallest element in the list is " << get_smallest(crunch) << endl;
}

void handle_mean(const vector<int> &crunch){
        if (crunch.size() == 0)
        cout << "Unable to calculate mean - list is empty" << endl;
    else    
        cout << "The mean is " << calculate_mean(crunch) << endl;
}
void handle_printr(const vector<int> &crunch){
    if(crunch.size() == 0){
        cout << "The list is empty";
    }
    else {
    for(auto crunches: crunch){
        cout << "[ " << crunches << " " << "]";
    }
    }
}

void handle_total(vector<int> &crunch){
        if(crunch.size() == 0){
            cout << "The list is empty";
        }
        else {
            cout << "The total sum is: " << calculate_total(crunch);
        }
}

void menu_sel(){
                cout << "\n======================" << endl;
                cout << "T- Total sum of numbers " << endl;
                cout << "P- Print numbers " << endl;
                cout << "A- Add numbers " << endl;
                cout << "M- Display mean of numbers " << endl;
                cout << "S- Display smallest of numbers " << endl;
                cout << "L- Display largest of numbers " << endl;
                cout << "C- Clear the cruncher " << endl;
                cout << "F- Find a number " << endl;
                cout << "Q- Quit " << endl;
                cout << "U- Reload menu " << endl;
                cout << "\nEnter your selection: ";
}

void ill_fate(){
 
while (cin.fail()){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "    ||You can only enter numbers...||\n";
        }
}



int main(){
    vector<int> crunch{};
        get_nums(crunch);
        menu_sel();
        //vector <int> crunch{};
        
                    char selection {};
            do {

                cin >> selection;
                
                if(selection == 'T' || selection == 't'){
                    handle_total(crunch);
                }
                
                else if(selection == 'p' || selection == 'P'){
                    handle_printr(crunch);

                }
                else if(selection == 'a' || selection == 'A'){
                    handle_add(crunch);
                    
                }
                else if(selection == 'm' || selection == 'M'){
                    handle_mean(crunch);
                }
                else if(selection == 's' || selection == 'S'){
                    handle_smallest(crunch);
                }
                else if(selection == 'l' || selection == 'L'){
                    handle_largest(crunch);   
                } 
                else if(selection == 'c' || selection == 'C'){
                    crunch.clear();
                    cout << "The cruncher now holds: " << crunch.size() << " items" << endl;
                }  
                else if(selection == 'f' || selection == 'F'){
                    handle_find(crunch);
                }
                else if(selection == 'u' || selection == 'U'){
                    menu_sel();
                }
                else if(selection == 'q' || selection == 'Q')
                    cout << "\nGoodbye " << endl;
                    else
                        cout << "Not an option, try again..." << endl;
            } while(selection != 'q' && selection != 'Q');   

}





















