# include <bits/stdc++.h>
#include <conio.h>
using namespace std;


string get_Password(){
    string pass="";
    while(1){
        char ch;
        ch = _getch();
        if(ch==13){cout << endl; return pass;}
        pass = pass+ch;
        if (ch == 8) continue;
        cout << "*";
    }
    
}


int main(){
cout << "                                                !!!!!Welcome to Policy Management System !!!!" << endl;
cout << "press any key to continue... ";
cin.ignore();
system("cls");
cout << "                                                !!!!!Welcome to Policy Management System !!!!" << endl;
cout << "For further using of the program,set your username and password." << endl;

string username,password;
cout << "Username: ";
 cin >> username;
cout << "Password: ";
password = get_Password();
cout << password;

}