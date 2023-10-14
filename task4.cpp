#include<iostream>
using namespace std;

float calculate_amount(char service_code, char time_call,float num_mins, string service );
main(){
    char service_code, time_call;
    float num_mins;
    string service;
    cout<<"Enter the service code(R/r for regular, P/p for premium): ";
    cin>>service_code;
    if (service_code=='p'||service_code=='P'){
        cout<<"Enter the time of the call (D/d for day, N/n for night): ";
        cin>>time_call;
    }
    cout<<"Enter the number of minutes used: ";
    cin>>num_mins;
    if(service_code=='r'||service_code=='R'){
        cout<<"Service Type: Regular"<<endl;
    }
    else if(service_code=='p'||service_code=='P'){
        cout<<"Service Type: Premium"<<endl;
    }
    cout<<"Total Minutes Used: "<<num_mins<<" minutes"<<endl;
    float amount = calculate_amount(service_code,time_call, num_mins, service);
    cout<<"Amount Due: $"<<amount;
} 
float calculate_amount(char service_code, char time_call,float num_mins, string service ){
    if ((service_code=='P'||service_code=='p')&&(time_call=='n'||time_call=='N')&&(num_mins<=100)){
        return 25;
     }
    if ((service_code=='P'||service_code=='p')&&(time_call=='d'||time_call=='D')&&(num_mins>100)){
        return (num_mins*0.2)+25;
    }  
    
    else if (service_code=='R'||service_code=='r'){
        return (num_mins*0.2);
    }
}
