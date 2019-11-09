#include <iostream>
#include <experimental/array>
#include <tuple>
#include <type_traits>
#include <vector>
#include <cstring>
#include <cctype>
/*
  Write a C++ function named apply_all 
   * that expects two arrays of integers and their sizes 
   * and dynamically allocates a new array of integers 
   * whose size is the product of the 2 array sizes
  
   * The function should loop through the second array
   * and multiplies each element across each element of array 1 
   * and store the product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
   * You can also write a print function
   * that expects a pointer to an array of integers 
   * and its size and display the elements in the array.
 */
 

using namespace std;

const size_t Uno_size{5};
const size_t Does_size{3};

//Arrays initialized to zero.
int Uno[]{0,0,0,0,0};
int Does[]{0,0,0};

int *apply_all(int[], const size_t, int[], const size_t);

void welcome_seekers();

void call_Uno_0(int);
void call_Uno_1(int);
void call_Uno_2(int);
void call_Uno_3(int);
void call_Uno_4(int);

void call_Does_0(int);
void call_Does_1(int);
void call_Does_2(int);
//First array.
int response_one_0();
int response_one_1();
int response_one_2();
int response_one_3();
int response_one_4();
//Second array.
int response_two_0();
int response_two_1();
int response_two_2();

void call_Uno_0(int value){
	cout << "[ ";
	Uno[0] = value;
	for(size_t i = 0; i < Uno_size; i++){
		cout << Uno[i] << " ";
	}
	cout << "]" << " ";
}

void call_Uno_1(int value){
	cout << "[ ";
	Uno[1] = value;
	for(size_t i = 0; i < Uno_size; i++){
		cout << Uno[i] << " ";
	}
	cout << "]" << " ";
}

void call_Uno_2(int value){
	cout << "[ ";
	Uno[2] = value;
	for(size_t i = 0; i < Uno_size; i++){
		cout << Uno[i] << " ";
	}
	cout << "]" << " ";
}

void call_Uno_3(int value){
	cout << "[ ";
	Uno[3] = value;
	for(size_t i = 0; i < Uno_size; i++){
		cout << Uno[i] << " ";
	}
	cout << "]" << " ";
}

void call_Uno_4(int value){
	cout << "[ ";
	Uno[4] = value;
	for(size_t i = 0; i < Uno_size; i++){
		cout << Uno[i] << " ";
	}
	cout << "]" << " ";
}

void call_Does_0(int value){
	cout << "[ ";
	Does[0] = value;
	for(size_t i = 0; i < Does_size; i++){
		cout << Does[i] << " ";
	}
	cout << "]" << " ";
}

void call_Does_1(int value){
	cout << "[ ";
	Does[1] = value;
	for(size_t i = 0; i < Does_size; i++){
		cout << Does[i] << " ";
	}
	cout << "]" << " ";
}

void call_Does_2(int value){
	cout << "[ ";
	Does[2] = value;
	for(size_t i = 0; i < Does_size; i++){
		cout << Does[i] << " ";
	}
	cout << "]" << " ";
}
//First array.
int response_one_0(){
		cout << "\n   q__ (@?@) __p --  Working hard or hardly working?" << endl;
		char response[50]{};
		char temp[50]{};
		char control[50]{"HARDLY WORKING"};
		char control2[50]{"WORKING HARD"};
		int calcvalue{};
		
		cin.getline(response, 50);		
		
		for(size_t i{0}; i < strlen(response); ++i) {
          if(isalpha(response[i]))
              response[i] = toupper(response[i]);
		}
      //cout << "--------------------------------" << endl;
      strcpy(temp, response);

      if(strcmp(temp, control) == 0){
		  calcvalue = sizeof(response) - 10;
		  //cout << "Value is: " << calcvalue << endl;
	  }  
		else if(strcmp(temp, control2) == 0){
			  calcvalue = sizeof(response) - 20;
		  }

	   else
		  calcvalue = sizeof(response) - 47;
		  //cout << "value is: " << calcvalue << endl;
		  
	  call_Uno_0(calcvalue);
      //cout << "--------------------------------" << endl;

return calcvalue;
}

int response_one_1(){
		cout << "\n   q__ (@?@) __p -- Do you believe in: life after love or love after life? " << endl;
		cout << "\n type: (life after love) or (love after life)" << endl;
		char response[50]{};
		char temp[50]{};
		char control[50]{"LIFE AFTER LOVE"};
		char control2[50]{"LOVE AFTER LIFE"};
		int calcvalue{};
		
		cin.getline(response, 50);		
		
		for(size_t i{0}; i < strlen(response); ++i) {
          if(isalpha(response[i]))
              response[i] = toupper(response[i]);
		}
      //cout << "--------------------------------" << endl;
      strcpy(temp, response);

      if(strcmp(temp, control) == 0){
		  calcvalue = sizeof(response) - 5;
		  //cout << "Value is: " << calcvalue << endl;

	  } 
	  else if(strcmp(temp, control2) == 0){
			  calcvalue = sizeof(response) - 15;
		  }
	  else
		  calcvalue = sizeof(response) - 27;
		  //cout << "value is: " << calcvalue << endl;
		  
	  call_Uno_1(calcvalue);
      //cout << "--------------------------------" << endl;
return calcvalue;
}

int response_one_2(){
		cout << "\n   q__ (@?@) __p -- Death before dishonor or pride before the fall?" << endl;
		cout << "\n type: (dishonor) or (pride)" << endl;
		char response[50]{};
		char temp[50]{};
		char control[50]{"DISHONOR"};
		char control2[50]{"PRIDE"};
		int calcvalue{};
		
		cin.getline(response, 50);		
		
		for(size_t i{0}; i < strlen(response); ++i) {
          if(isalpha(response[i]))
              response[i] = toupper(response[i]);
		}
      //cout << "--------------------------------" << endl;
      strcpy(temp, response);

      if(strcmp(temp, control) == 0){
		  calcvalue = sizeof(response) - 30;
		  //cout << "Value is: " << calcvalue << endl;

	  } 
	  else if(strcmp(temp, control2) == 0){
			  calcvalue = sizeof(response) - 40;
		  }
	  else
		  calcvalue = sizeof(response) - 37;
		  //cout << "value is: " << calcvalue << endl;
		  
	  call_Uno_2(calcvalue);
      //cout << "--------------------------------" << endl;
return calcvalue;
}

int response_one_3(){
		cout << "\n   q__ (@?@) __p -- Does the end justify the means or do you reap what you sow?" << endl;
		cout << "\n type: (the end) or (you reap)" << endl;
		char response[50]{};
		char temp[50]{};
		char control[50]{"THE END"};
		char control2[50]{"YOU REAP"};
		int calcvalue{};
		
		cin.getline(response, 50);		
		
		for(size_t i{0}; i < strlen(response); ++i) {
          if(isalpha(response[i]))
              response[i] = toupper(response[i]);
		}
      //cout << "--------------------------------" << endl;
      strcpy(temp, response);

      if(strcmp(temp, control) == 0){
		  calcvalue = sizeof(response) - 25;
		  //cout << "Value is: " << calcvalue << endl;

	  }
	  else if(strcmp(temp, control2) == 0){
			  calcvalue = sizeof(response) - 35;
		  }

	else
		  calcvalue = sizeof(response) - 17;
		  //cout << "value is: " << calcvalue << endl;
		  
	  call_Uno_3(calcvalue);
      //cout << "--------------------------------" << endl;
return calcvalue;
}

int response_one_4(){
		cout << "\n   q__ (@?@) __p -- Would you rather be immortal or choose any date to die?" << endl;
		cout << "\n type: (immortal) or (any date)" << endl;
		char response[50]{};
		char temp[50]{};
		char control[50]{"IMMORTAL"};
		char control2[50]{"ANY DATE"};
		int calcvalue{};
		
		cin.getline(response, 50);		
		
		for(size_t i{0}; i < strlen(response); ++i) {
          if(isalpha(response[i]))
              response[i] = toupper(response[i]);
		}
      //cout << "--------------------------------" << endl;
      strcpy(temp, response);

      if(strcmp(temp, control) == 0){
		  calcvalue = sizeof(response) - 12;
		  //cout << "Value is: " << calcvalue << endl;

	  } 
	  else if(strcmp(temp, control2) == 0){
			  calcvalue = sizeof(response) - 32;
		  }
	  else
		  calcvalue = sizeof(response) - 27;
		  //cout << "value is: " << calcvalue << endl;
		  
	  call_Uno_4(calcvalue);
      //cout << "--------------------------------" << endl;

return calcvalue;
}

//Second array.

int response_two_0(){
		cout << "\n   q__ (@?@) __p -- would you have unlimited strength or unlimited knowledge?" << endl;
		cout << "\n type: (unlimited strength) or (unlimited knowledge)" << endl;
		
		char response[50]{};
		char temp[50]{};
		char control[50]{"UNLIMITED STRENGTH"};
		char control2[50]{"UNLIMITED KNOWLEDGE"};
		int calcvalue{};
		
		cin.getline(response, 50);		
		
		for(size_t i{0}; i < strlen(response); ++i) {
          if(isalpha(response[i]))
              response[i] = toupper(response[i]);
		}
      //cout << "--------------------------------" << endl;
      strcpy(temp, response);

      if(strcmp(temp, control) == 0){
		  calcvalue = sizeof(response) - 22;
		  //cout << "Value is: " << calcvalue << endl;

	  } 
	  else if(strcmp(temp, control2) == 0){
			  calcvalue = sizeof(response) - 42;
		  }
	  else
		  calcvalue = sizeof(response) - 28;
		  //cout << "value is: " << calcvalue << endl;
		  
	  call_Does_0(calcvalue);
      //cout << "--------------------------------" << endl;

return calcvalue;
}

int response_two_1(){
		cout << "\n   q__ (@?@) __p -- Fight to the death or live to fight another day?" << endl;
		cout << "\n type: (the death) or (another day)" << endl;
		char response[50]{};
		char temp[50]{};
		char control[50]{"THE DEATH"};
		char control2[50]{"ANOTHER DAY"};
		int calcvalue{};
		
		cin.getline(response, 50);		
		
		for(size_t i{0}; i < strlen(response); ++i) {
          if(isalpha(response[i]))
              response[i] = toupper(response[i]);
		}
      //cout << "--------------------------------" << endl;
      strcpy(temp, response);

      if(strcmp(temp, control) == 0){
		  calcvalue = sizeof(response) - 7;
		  //cout << "Value is: " << calcvalue << endl;

	  } 
	  else if(strcmp(temp, control2) == 0){
			  calcvalue = sizeof(response) - 17;
		  }
	  else
		  calcvalue = sizeof(response) - 34;
		  //cout << "value is: " << calcvalue << endl;
		  
	  call_Does_1(calcvalue);
      //cout << "--------------------------------" << endl;

return calcvalue;
}

int response_two_2(){
		cout << "\n   q__ (@?@) __p -- in isolation, would you rather have every book ever written or a projector with every film ever made?" << endl;
		cout << "\n type: (books) or (films)" << endl;
		char response[50]{};
		char temp[50]{};
		char control[50]{"BOOKS"};
		char control2[50]{"FILMS"};
		int calcvalue{};
		
		cin.getline(response, 50);		
		
		for(size_t i{0}; i < strlen(response); ++i) {
          if(isalpha(response[i]))
              response[i] = toupper(response[i]);
		}
      //cout << "--------------------------------" << endl;
      strcpy(temp, response);

      if(strcmp(temp, control) == 0){
		  calcvalue = sizeof(response) - 3;
		  //cout << "Value is: " << calcvalue << endl;

	  } 
	  else if(strcmp(temp, control2) == 0){
			  calcvalue = sizeof(response) - 33;
		  }
	  else
		  calcvalue = sizeof(response) - 21;
		  //cout << "value is: " << calcvalue << endl;
		  
	  call_Does_2(calcvalue);
      //cout << "--------------------------------" << endl;

return calcvalue;
}

void welcome_seekers(){
	cout << "\n            * v * v *      I am BIG THINK an autonomous, artificial, official intelligence " << endl;
	cout << "\n          q__ (@?@) __p     designed to solve the ultimate questions " << endl; 
	cout << "\n        |   |  +++  |   |          You will need to answer MY questions then I'll give you the ULTIMATE MATRIX" << endl;
	cout << "\n =============================================================================================================" << endl;
	
}

void print(const int *const arr, size_t size) {
    cout << "[ ";
    for (size_t i{0}; i<size;++i)
        cout << arr[i] << " ";
    cout <<  "]";
    cout << endl;
}

int main() {
	
	welcome_seekers();
	cout << "   q__ (@?@) __p --  To perform the operation, we will need to fill two arrays: " << endl;
	cout << "\n1) ";
	print(Uno, Uno_size);
	cout << "\n2) ";
	print(Does, Does_size);
	cout << "\n   q__ (@?@) __p --  To do this, I will ask you a number of questions.  I will then calculate your ultimate matrix!" << endl;
	cout << "\n   q__ (@?@) __p --  If you're ready, we can begin!" << endl;
	cout << "\n=======================================================================" << endl;

	//input numbers into the first array.
	response_one_0();
	response_one_1();
	response_one_2();
	response_one_3();
	response_one_4();
	

cout << "\n --------------------------------------" << "\n";
	//input numbers into the second array.
	response_two_0();
	response_two_1();
	response_two_2();


cout << "\n -----------------------------" << "\n";

int *results = apply_all(Uno, Uno_size, Does, Does_size);
constexpr size_t results_size {Uno_size * Does_size};
    
    cout << "Result: " ;
    print(results,results_size);
	cout << "\n   q__ (@?@) __p --  This is your ultimate matrix.  These numbers contain the answer to your life's mystery!" << endl;
	cout << "\n" << endl;
    


delete[]results;
	cout << endl;
	return 0;
}

int *apply_all(int a[], size_t a_size, int b[], size_t b_size){
	int *aPtr{a};
	int *bPtr{b};
	int *resuPtr{nullptr};
	
	resuPtr = new int[a_size * b_size];
	int bridge{0};
		
    for (size_t i{0}; i < b_size; ++i) {
        for (size_t j{0}; j< a_size; ++j) {
            resuPtr[bridge] = a[j] * b[i];
            ++bridge;
        }
    }
    return resuPtr;
}
