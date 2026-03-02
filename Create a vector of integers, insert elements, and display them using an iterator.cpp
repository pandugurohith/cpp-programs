//Create a vector of integers, insert elements, and display them using an iterator
 #include <iostream>
 #include <vector>
 using namespace std;
int main()
{
    vector<int> integers={10,20,30};
    cout<<"Integers before inserting:"<<endl;
    vector<int>::iterator i;
    for(i=integer.begin();i!=integer.end();i++){
        cout<<i<<" ";
    }
    cout<<" "<<endl;
    integers.push_back(40);
   
    cout<<"Integers after inserting:"<<endl;
    for(i=integer.begin();i!=integer.end();i++){
        cout<<i<<" ";
    }

    return 0;
}

//OUTPUT
 Integers before inserting:
10 20 30  
Integers after inserting:
10 20 30 40 
