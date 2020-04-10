#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main(int argc, char*argv[]){
    string fname, str, usuBstr;
    ifstream fin("input");
    if(!fin.is_open()){
        cout << "File was not opened!";
        return 1;
    } else{
        cout << "Enter substring:";
        getline(cin, usuBstr);
        while(getline(fin, str)){
            if(str.find(usuBstr) == string::npos){
                cout << "No "+ usuBstr << " " << "in line!" << endl;
            }else {
                if(str.find(usuBstr) != string::npos){
                    cout << str << endl;
                    }
                } 
            }
        }
    fin.close();        
    return 0;
}