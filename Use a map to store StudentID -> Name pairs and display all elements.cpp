// Use a map to store StudentID -> Name pairs and display all elements
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> student;
    student[28] = "Aryan";
    student[22] = "Adhii";
    student[36] = "ramu";
    map<int, string>::iterator i;
    cout<<"student details: "<<endl;
    for(i=student.begin();i!=student.end();i++){
     cout << "ID: " << i->first;
    cout<< ", Name: " << i->second << endl;
    }
}

//output
student details: 
ID: 22, Name: Adhii
ID: 28, Name: Aryan
ID: 36, Name: ramu
