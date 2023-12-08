#include <iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<< "\n";
    cout << "?????: ";
    getline(cin,name);

    int id;
    cout << "Fahsai: Wow!!! " << name << " is a really cool name."<< "\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<< "\n";
    cout << name << ": ";
    cin >> id;

    string nm;
    cout << "Fahsai: I think you may be GEAR "<< (id-120000000)/10000000<<". I have a free movie ticket for you."<<"\n";
    cout << "Fahsai: Let's go to the cinema together!!!"<< "\n";
    cout << "Fahsai: What movie do you want to watch?"<< "\n";
    cout << name << ": ";
    cin.ignore();
    getline(cin,nm);
   
    string D;
    cout << "Fahsai: So....which day are you free to go with me?"<< "\n";
    cout << name << ": ";
    getline(cin,D);
    
    string ul;
    cout << "Fahsai: "<< D <<"....that is OK!!! I'm looking forward to watching "<< nm <<" with you."<<"\n";
    cout << name << ": ";
    getline(cin,ul);
    cout <<"Fahsai: 555+ see you "<< D <<". Bye Bye \\(^ ^)/";
    return 0;
}