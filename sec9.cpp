
//Section 9 Challenge program

#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main() {
//  Have the user determine the size of the vector.
    int nums {};
    cout << "How many numbers would you like to enter? ";
    cin >> nums;
    
//  Have the user determine which numbers will be in the vector.
//  Declare the vector.
    vector <int> crunch{};
    int total{};
    
//  iterate through the variable 'nums' to determine the size of the vector.

    for(int i{1}; i <= nums; ++i) {
//  created variable 'i' for iteratation through the variable 'nums'
        int crunch_items{};
        cout << "\nPlease enter your number " << i << ": ";
        cin >> crunch_items;
        crunch.push_back(crunch_items);
        total += crunch_items;
        }
        cout << "You entered:" << " ";
        for(auto crunches: crunch) {
            cout << crunches << " ";
        }
    cout << "\nThe sum is: " << total << endl; {
        int findMin(vector<int> crunch);

    int min = crunch[0];
for(unsigned i = 1; i < crunch.size(); i++) {
    if (crunch[i] < min)
    min = crunch[i];
}
        cout <<"\nSmallest: " << min << endl;
        return min;
    }
    
    

int findlarge(vector<int> crunch);
    
    int max = crunch[0];
for(unsigned i = 1; i < crunch.size(); i++) {
    if (crunch[i] > max)
    max = crunch[i];
}
        cout <<"\nLargest: " << max << endl;
        return max;

//int findMin(vector<int> crunch);
//
//    int min = crunch[0];
//for(unsigned i = 1; i < crunch.size(); i++) {
//    if (crunch[i] < min)
//    min = crunch[i];
//}
//        cout <<"\nSmallest: " << min << endl;
//        return min;
    

    
    


/*
 * #include <bits/stdc++.h> 
using namespace std; 

//for finding maximum  
int Findlarge(vector<int> myVector) 
{     
	// Initialize maximum element 
	int max = myVector[0]; 

	// Traverse vector elements  
	for (int i = 1; i < myVector.size(); i++) 
		if (myVector[i] > max) 
			max = myVector[i]; 

	return max; 
} 

//for finding minimum
int FindMin(vector<int> myVector) 
{     
	// Initialize minimum element 
	int min = myVector[0]; 

	// Traverse vector elements  
	for (int i = 1; i < myVector.size(); i++) 
		if (myVector[i] < min) 
			min = myVector[i]; 

	return min; 
} 

//Main function
int main() 
{ 
	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(100);
	myVector.push_back(76);
	myVector.push_back(9);

	cout<<endl<<endl<<endl<<endl;

	cout<<"elements in Vector = ";
	for(int i=0;i<myVector.size();i++)
	{
		cout<<myVector[i]<<" ";
	}

	cout<<endl;

	cout << "Largest element given vector is = " << Findlarge(myVector)<<endl;
	cout << "smallest element given vector is = " << FindMin(myVector)<<endl; 
	return 0; 
} 

 */
    
    

        
    
 
        
    

    
    
    

    
    

//    cout << endl;
    return 0;
}