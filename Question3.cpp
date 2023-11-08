#include <iostream>
using namespace std;

int main(){
    int opt;
    int FullName, course;
    double score;
    cin>>opt;
    cout<<"Enter the Full Name: "<<endl;
    cin>>FullName;
    cout<<"Enter the course: "<<endl;
    cin>>course;
    cout<<"Enter score: "<<endl;
    cin>>score;
    
    cout<<"\n1.Grade A (score=<70)\n2.Grade B (score>=60 & score=<69)\n3.Grade C (score>=50 & score=<59)\n4.Grade D (score>=40 & score=<49)\n5.Grade F(score<40)\n6.Invalid score(Any other)\n";
    cout<<"Choose the right option: "<<endl;

    cout<<"Your Full Name is: "<<FullName<<endl;
    cout<<"The course is: "<<course<<endl;
    cout<<"The score is :"<<score<<endl;
    switch(opt){
        case 1: 
        cout<<"You got an A"<<endl;
        break;

        case 2:
        cout<<"You got a B"<<endl;
        break;

        case 3:
        cout<<"You got a C"<<endl;
        break;

        case 4:
        cout<<"You got a D"<<endl;
        break;

        case 5:
        cout<<"You got a F"<<endl;
        break;

        case 6:
        cout<<"Your score is invalid"<<endl;
        break;

        return 0;
    }

    


}