#include<iostream>
using namespace std;

string decideActivity(string temp, string humd){
    if (temp=="warm"&&humd=="dry"){
        return "Play tennis";
    }
    else if(temp=="warm"&&humd=="humid"){
        return "Swim";
    }
    else if(temp=="cold"&&humd=="dry"){
        return "Play basketball";
    }
    else if(temp=="cold"&&humd=="humid"){
        return "Watch TV";
    }
}
main(){
    string temp, humd;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humd;
    string decision = decideActivity(temp, humd);
    cout<<"Recommended activity: "<<decision;
}