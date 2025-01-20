#include <iostream>
using namespace std;

int main() {
    string statement;
    cout<<"Enter the statement: ";
    //cin>>statement;   // after space won't count
    getline (cin, statement); // after space will count

    cout<<"The entered statement was: "<<statement<<endl;
    for(int i=0; i<statement.length(); i++){
        if(statement[i]== '='){
            cout<<endl<<statement[i]<<endl;
        }
        else if(statement[i]== '+'|| '-'|| '*'|| '/' || '%'){
            cout<<statement[i]<<endl;
        }
        else if(statement[i]== ';'){
            cout<<endl<<statement[i];
        }
        else{
            cout<<statement[i];
        }
    }
return 0;
}
