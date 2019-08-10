#include <iostream>
#include <string>


using namespace std;


void ASCII_Convert_Short(){
    cout << "Type Message: " << endl;
    string message;
    string ascii2num = "";
    
    getline(cin, message);

    for(char c : message){
        ascii2num += to_string(int(c)) + " ";
    }

    cout << "Code: " << ascii2num << endl;
}

int main(){
    ASCII_Convert_Short();
    return 0;
}
