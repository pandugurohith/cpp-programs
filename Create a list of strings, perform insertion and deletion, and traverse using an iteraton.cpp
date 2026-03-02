//Create a list of strings, perform insertion and deletion, and traverse using an iteraton
 #include <iostream>
 #include <list> 
 using namespace std;
 int main(){
     list<string> strings;
     list<string>::iterator s;
     strings.push_front("Book");
     strings.push_front("pen");
     strings.push_front("mouse");
     strings.pop_front();
     strings.push_back("paper");
     strings.remove("paper");
     for(s=strings.begin();s!=strings.end();s++)
     {
         cout<<*s<<endl;
     }
 }

//output
mouse
pen
Book
