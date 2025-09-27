#include <iostream>
#include <map>
using namespace std;

map<string, string> accounts; 

void signUp() {
    string user, pass;
    cout << "\n=== SIGN UP ===\n";
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    if (accounts.count(user)) {
        cout << "Username already taken!\n";
    } else {
        accounts[user] = pass;
        cout << "Account created!\n";
    }
}

void logIn() {
    string user, pass;
    cout << "\n=== LOG IN ===\n";
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    if (accounts[user] == pass)
        cout << "Welcome back, " << user << "!\n";
    else
        cout << "Invalid login!\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Sign Up\n2. Log In\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) signUp();
        else if (choice == 2) logIn();
    } while (choice != 3);

    return 0;
}
