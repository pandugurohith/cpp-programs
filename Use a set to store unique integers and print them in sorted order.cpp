//Use a set to store unique integers and print them in sorted order
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> integers;
    integers.insert(50);
    integers.insert(85);
    integers.insert(65);
    integers.insert(40);
    integers.insert(80);
    integers.insert(80);
    integers.erase(65);
    for(int i:integers)
    cout<<i<<" ";
}

//output
40 50 80 85 
