#include <iostream>
using namespace std;

int main(){
    int FullName, course;
    double score;
    
    cout<<"Enter the score: "<<endl;
    cin>>score;
    cout<<"Enter the Full Name: "<<endl;
    cin>>FullName;
    cout<<"Enter course: "<<endl;
    cin>>course;

    cout<<"The Full Name is: "<<FullName<<endl;
    cout<<"The course is: "<<course<<endl;
    cout<<"Your score is: "<<score<<endl;
    


    if(score>=70){
        cout<<"You got an A"<<endl;
    }
    else if(69>=score&&score>=60){
        cout<<"You got a B"<<endl;
    }
    else if(score>=50&&59>=score){
        cout<<"You got a C"<<endl;
    }
    else if(score>=40&&49>=score){
        cout<<"You got a D"<<endl;
    }
    else if(40>=score){
        cout<<"You got a F"<<endl;
    }
    else{
        cout<<"Your score is not valid"<<endl;
    }

    
    return 0;


}