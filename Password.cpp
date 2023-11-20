#include <iostream>
#include <cctype>

using namespace std;


//isValidPassword declaration
bool isValidPassword(string password);

int main()
{



//MAKING PASSWORDS
   string password1 = "J7#pR2@oL!";
   string password2 = "Mountain$Hiking@2023";
   string password3 = "3TPG.!IA@5";
   string password4 = "P@risSunset27!";
   string password5 = "473829";

    cout << "Testing function:\n";
    cout << " It should be between 6 to 12 characters long,\n contain at least one uppercase character,\n one digit,\n and one special character (@, #, $, %, &, *). "<<endl;

    cout<<endl;

    //TESTING FUNCTIONS
    cout << "Password: " << password1 << ", Valid: " << (isValidPassword(password1) ? "Yes" : "No") << "\n";
    cout << "Password: " << password2 << ", Valid: " << (isValidPassword(password2) ? "Yes" : "No") << "\n";
    cout << "Password: " << password3 << ", Valid: " << (isValidPassword(password3) ? "Yes" : "No") << "\n";
    cout << "Password: " << password4 << ", Valid: " << (isValidPassword(password4) ? "Yes" : "No") << "\n";
    cout << "Password: " << password5 << ", Valid: " << (isValidPassword(password5) ? "Yes" : "No") << "\n";

   return 0;

}

bool isValidPassword(string password){
    //everything is false at first
    bool hasDigit = false;
    bool hasUpper = false;
    bool hasSpecialChar = false;


    //checks if password has has what it's sopose to have below checks password size
    if(password.size() > 6 && password.size() < 12){
        for(char c : password) {

        //checks if it has an upper case
            if(isupper(c)) {
                hasUpper = true;
            }

        //checks if it has a digit
            if(isdigit(c)) {
                hasDigit = true;
            }

            //checks if it has a character
            if(!isalnum(c)) {
                hasSpecialChar = true;
            }
        }
    }

    return hasUpper && hasDigit && hasSpecialChar;
}
