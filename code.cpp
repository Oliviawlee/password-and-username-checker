//C++
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>

int main(int argc, const char * argv[]) {
    /* Maps are a way to store a 'key' and 'data'.
     * In our case, the key is the username, and the
     * data is the password. This is probably not the best
     * way, but hey, it works.
     */
    std::map <std::string, std::string> accounts;

    // TODO: Read from a file maybe?
    /* To add more accounts and password, use this format:
     * accounts["usernamehere"] = "passwordhere";
     */
    accounts["test"] = "test";
    accounts["oliviawlee"] = "12345";

    std::string username1;
    std::string password1;

    std::cout << " Please enter your username:"<< "\n";
    std::cin >> username1;


    std::cout << " Please enter your password:"<< "\n";
    std::cin >> password1;

    /* Here we check for invalid username or invalid passwords
     * The first part of the if (accounts.find...) checks if the
     * username exists (remember, the username is the key). The
     * second part (accounts[username1] != ...) checks to see
     * if the password matches
     */
    if (accounts.find(username1) == accounts.end() || accounts[username1] != password1) {
        std::cout << "Access denied" << std::endl;
    } else if (accounts[username1] == password1) {
        std::cout << "Access granted" << std::endl;
    }
}
