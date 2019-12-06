//program assignmnet 5 for info 450
//encrypt/decrypt files
//INFO450Encrypt

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

char getmenuselection (char m);
void encrypt (char key[]);
void decrypt (char code[]);

//mainfunction

int main()
{
    ifstream input;
    ifstream in;
    ofstream out;
    char menu;
    char file [80];
    
    menu=0;

    menu=getmenuselection(menu); //user input of what option

        if (menu == 'e' || menu == 'E') //encrypt
        {
        cout << "Enter file name... ";  //randomfilename
        input.open (file);
        cin >> file;
        encrypt (file);
        input.close();
        cout << "Encrypted code is: " << file <<endl;
        return main();
        }
        if (menu == 'd'|| menu == 'D')//decrypt
        {
        cout << "Enter original file name... ";
        input.open (file);
        cin >> file;
        decrypt (file);
        input.close();
        cout << "Decrypted code is: " << file <<endl;
        return main();
        }
        if (menu == 'q') //Option to end the program.
        {
        cout << "Bye!"; //give user a note letting them know program has ended
        cin.ignore(2);
        return 0;
        }
cin.ignore(2);
return 0;
}
//menu selection code elaborated

char getmenuselection (char m)
{
    //Text for user directions
    cout << "Please input 'E' to encrypt a file or input 'D' to decrypt a file. Or 'Q' to quit and exit ";
    cin >> m;
    switch (m)
    {
       case 'e':
       case 'E':   cout << "You have selected to encrypt a file... " << endl;
                 break;
       case 'd':
       case 'D':   cout <<  "You have selected to decrypt a file... " << endl;
                break;
       case 'q':
       case 'Q':   cout <<  "You have selected to quit :( " << endl;
                break;
       default: cout << "Error! Invalid entry, please try again.";
                return getmenuselection (m);
}return (m);
}
void encrypt (char key[]) //encryption formula
{
    for(int i = 0; i < 5; i++) key[i] += 2;
}
void decrypt (char code[]) //decryption formula
{
    for(int i = 0; i < 5; i++) code[i] -= 2;
}
//end

