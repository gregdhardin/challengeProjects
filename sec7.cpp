#include <iostream>
#include <vector>

using namespace std;

int main() {
//My solution, which works!    
    vector <int> vector_1{1000};
    int add1 {10};
    int add2 {20};

    
    vector_1.push_back(add1);
    vector_1.push_back(add2);
    
    cout << "\nContents of Vector_1: " << endl;
    cout << vector_1.at(0) << endl;
    cout << vector_1.at(1) << endl;
    cout << "\nThe size of Vector_1 is: " << vector_1.size() << endl;
    

    
    
    vector <int> vector_2{};
    int added1 {100};
    int added2 {200};
    
    vector_2.push_back(added1);
    vector_2.push_back(added2);
    
    cout << "\nContents of Vector_2: " << endl;
    cout << vector_2.at(0) << endl;
    cout << vector_2.at(1) << endl;
    cout << "\nThe size of Vector_2 is: " << vector_2.size() << endl;
    
    vector <vector<int>> vector_2d {};
    
    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);
    
    cout << "\nContents of Vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(1) << endl;

//Frank's solution
//
//    vector <int> vector1;
//    vector <int> vector2;
//    
//    vector1.push_back(10);
//    vector1.push_back(20);
//    
//    cout << "\nvector1: " << endl;
//    cout << vector1.at(0) << endl;
//    cout << vector1.at(1) << endl;
//    cout << "vector1 contains " << vector1.size() << " elements" << endl;
//    
//    vector2.push_back(100);
//    vector2.push_back(200);
//    
//    cout << "\nvector2: " << endl;
//    cout << vector2.at(0) << endl;
//    cout << vector2.at(1) << endl;
//    cout << "vectpr2 contains " << vector2.size() << " elements" << endl;
//    
//    vector <vector<int>> vector_2d;
//    
//    vector_2d.push_back(vector1);
//    vector_2d.push_back(vector2);
//    
//    cout << "\nvector_2d: " << endl;
//    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
//    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
//    
//    vector1.at(0) = 1000;
//    
//    cout << "\nvector_2d:" << endl;
//    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
//    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
//    
//    cout << "\nvector1: " << endl;
//    cout << vector1.at(0) << endl;
//    cout << vector1.at(1) << endl;
//    cout << "vector1 contains " << vector1.size() << " elements" << endl;
//    
}   
    
//    

    

    
    
    
    

