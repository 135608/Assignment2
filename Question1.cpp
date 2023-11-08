#include <iostream>
using namespace std;

int main(){
    int age;
    double bankbalance;
    float accountage;
    int CRBstatus;

     
    cout<<"Enter the age: "<<endl;
    cin>>age;

    if(age>22){
        cout<<"Please enter bank balance: "<<endl;
        cin>>bankbalance;
        if(bankbalance>50000){
            cout<<"Please enter CRB Status: "<<endl;
            cin>>CRBstatus;
            if(CRBstatus=="good"){
                cout<<"Enter accountage: "<<endl;
                cin>>accountage;
                if(accountage>6){
                    cout<<"You are qualified for a loan"<<endl;
                }
            }
        }
    }else{
        cout<<"You are not qualified"<<endl;
    
    }
    return 0;
}