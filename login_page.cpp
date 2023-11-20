# include <bits/stdc++.h>
# include <conio.h>
using namespace std;

int login(string username, string password){
    cout << "User Authentication" << endl;
    string user_n;
    string pass_w="";
    while(1){
    cout << "Username: ";
    cin >> user_n;
    if(user_n != username){ cout << "Username not found." << endl;}
    else{
        int tries=3;
        while(tries){
        cout << "Password: " ;
        
    while(1){
        char ch;
        ch = _getch();
        if(ch==13){break;}
        pass_w = pass_w+ch;
        if (ch == 8) continue;
        cout << "*";
    }
    cout << endl;
    if(pass_w == password){return 1;}
    else{ 
        --tries;
        cout << "Incorrect Password." << endl;
        cout << "Number of tries left: " << tries << endl;}

    }
    return 0;
    }
    
    }
}


int main(){
    string un = "pri";
    string pw = "123";
    int flag = login(un,pw);
    //if flag is 1 user is authenticated else not allowed to enter the program
    //cout << "Flag is " << flag << endl;

}