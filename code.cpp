//C++
#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
   
    using namespace std;
    
    
   
    string username1;
    string password1;
    
    
    cout << " Please enter your username:"<< "\n";
    cin >> username1;


    cout << " Please enter your password:"<< "\n";
    cin >> password1;
  
    if (username1== "oliviawlee" && password1== "12345")
    {
        cout << " Access granted." << "\n";
    }
    else
    {
        cout << " Access denied." << "\n";
   
        return 0;}
 // I need to find a way for the code to be able to store multiple usernames and passwords so I could possibly sign in with different accounts. Thanks!

 
}
