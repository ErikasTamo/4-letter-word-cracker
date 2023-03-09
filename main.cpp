#include <iostream> 
#include <string> 
using namespace std; 

string brute_force(string password);

int main() {
    string password, cracked;

    cout<<"Enter 4 letters to crack: ";
    cin>>password;

    cracked = brute_force(password);

    cout<<"\nPassword cracked: "<<cracked<<endl;
}

string brute_force(string password) { 
    int num_ascii=123, attempts = 0;
    for (int char1=97; char1<num_ascii; char1++) { 
        for (int char2=97; char2<num_ascii; char2++) { 
            for (int char3=97; char3<num_ascii; char3++) { 
                for (int char4=97; char4<num_ascii; char4++) { 
                    
                    string attempt = string()+(char)char1+(char)char2+(char)char3+(char)char4;
                    if (attempt==password) return attempt;
                    attempts++;
                    cout<<"[-] #"<<attempts<<" | "<<attempt<<endl;
                } 
            } 
        } 
    } 
    throw "not found"; 
} 