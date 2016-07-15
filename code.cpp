//C++
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>

int main(int argc, const char * argv[]) {
    std::map <std::string, std::string> accounts;

    // TODO: Read from a file maybe?
    accounts["test"] = "test";
    accounts["oliviawlee"] = "12345";

    std::string username1;
    std::string password1;

    std::cout << " Please enter your username:"<< "\n";
    std::cin >> username1;


    std::cout << " Please enter your password:"<< "\n";
    std::cin >> password1;

    // For this part you can always to GOTOs
    if (accounts.find(username1) == accounts.end() || accounts[username1] != password1) {
        std::cout << "Access denied" << std::endl;
    } else if (accounts[username1] == password1) {
        std::cout << "Access granted" << std::endl;
    }
}
