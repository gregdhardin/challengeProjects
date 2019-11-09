//Section 10
//Challenge -
//Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc...

Write a program that asks a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decrypt the encrypted message back to the original message.

You may use the 2 string below for your substitution.
For example, to encrypt you can replace the character at position n in the alphabet
with the character at position n in key.

To decryypt you can replace the character at position n in key
with the character at position n in the alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, punctuation, whitespace and so
forth.  also, currently the cipher always substitutes a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write, the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

//int main() {
//
//   
//    
//    string secret_message {};
//    
//    cout << "enter message: " << endl;
//    
//    
//    getline(cin, secret_message);
//     cout << "encrypting...\n";
//
//    for(int c : secret_message)
//        cout << c;
//    string decrypted_message {secret_message};
//    cout << "\ndecrypting...\n";
//    cout << decrypted_message;
//    
//        cout << endl;
//    return 0;
//    
//}
    
        

    
            
        
    
    
        
/*
The easisest way to create a simple encryption would be to change the message from char to int and print out ASCII codes.  
That is pretty simple so I would then reorder the message from back to front, and change some (or all) letters to Caps as
well.  That seems to be the solution with the least amount of code.
*/

// Instructor solution//

int main() {
    
    string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secret_message {};
    cout << "Enter your secret message: ";
    getline(cin, secret_message);
    
    string encrypted_message {};
    
    cout << "\nEncrypting message... " << endl;
    
    for (char c: secret_message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char { key.at(position) };
            encrypted_message += new_char;
            
        }else{
            encrypted_message += c;
        }
    }
    
    cout << "\nEncrypted message: " << encrypted_message << endl;
    
    string decrypted_message {};
    cout << "\nDecrypting message... " << endl;
    
    for (char c: encrypted_message) {
        size_t position = key.find(c);
        if (position != string::npos) {
            char new_char { alphabet.at(position) };
            decrypted_message += new_char;
            
        }else{
            decrypted_message += c;
        }
    }
    
    cout << "\nDecrypted messsage: " << decrypted_message <<  endl;
    
    cout << endl;
    return 0;
}
    
    
    
    
