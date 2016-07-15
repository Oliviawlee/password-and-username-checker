
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
int main(int argc, const char * argv[]) {
 
 std::map <std::string, std::string> accounts;
    accounts["olivialee27"] = "NASA";
    accounts["user101"] = "abc123";
    accounts["ol27"] = "12345";
    /* KEY is the username and DATA is the password. accounts["key"] = "data";
     */
    std::string username1;
    std::string password1;
    std::cout << " Please enter your username:"<< "\n";
    std::cin >> username1;
    std::cout << " Please enter your password:"<< "\n";
    std::cin >> password1;
  if (accounts.find(username1) == accounts.end() || accounts[username1] != password1) {
      std::cout << "Access denied" << std::endl;
    } else if (accounts[username1] == password1) {
        std::cout << "Access granted" << std::endl;
        return 0;   }
}
