// write  a webhook to authenticate the user using OAuth2.0
// Author: Akshay
// Date: 2021/05/10
// Version: 1.0
// Using Oauth2.0

#include <iostream>
#include <string>

// define the function pointer type
typedef int (*WebHookAuth)(std::string, std::string);

int authenticate(std::string username, std::string password) {
    if (username == "admin" && password == "admin") {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    WebHookAuth f = authenticate;
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;
    if (f(username, password)) {
        std::cout << "Authentication successful!" << std::endl;
    } else {
        std::cout << "Authentication failed!" << std::endl;
    }
    return 0;
}

// Output
// Enter username: admin
// Enter password: admin
// Authentication successful!