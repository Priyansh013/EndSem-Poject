# include <bits/stdc++.h>
# include <conio.h>
using namespace std;

int welcome_page(string username){
    while(1){
    cout << "--------------------- Welcome " << username <<" -------------------------------"<< endl;
    string welcome_input;
    cout << "Press any of the given keys to navigate through various features:"<< endl;
    cout << "1.Policy Management" << endl;
    cout << "2.Customer Information update" << endl;
    cout << "3.Claims" << endl;
    cout << "4.Premium Calculation" << endl;
    cout << "5.Convert into different Currency" << endl;
    cout << "6.History of current session" << endl;
    cout << "7.Exit" << endl;
    cin >> welcome_input;
    if(welcome_input=="1" ||welcome_input=="2" ||welcome_input=="3" ||welcome_input=="4" ||welcome_input=="5" ||welcome_input=="6" ||welcome_input=="7"){
        return stoi(welcome_input);
    }
    else{
        cout << "Invalid Input!" << endl <<"TRY AGAIN..." << endl;
    }
    }
}

int main(){
 // int choice = welcome_page("Priyansh");
//  cout << "choice is " << choice << endl;
}