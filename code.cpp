//C++
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>

int main(int argc, const char * argv[]) {
    using namespace std;
    std::map <std::string, std::string> accounts;

    // TODO: Read from a file maybe?
    accounts["test"] = "test";
    accounts["oliviawlee"] = "12345";

    string username1;
    string password1;

    cout << " Please enter your username:"<< "\n";
    cin >> username1;


    cout << " Please enter your password:"<< "\n";
    cin >> password1;

    // For this part you can always to GOTOs
    if (accounts.find(username1) == accounts.end() || accounts[username1] != password1) {
        std::cout << "Access denied" << std::endl;
    } else if (accounts[username1] == password1) {
        std::cout << "Access granted" << std::endl;
    }
}
