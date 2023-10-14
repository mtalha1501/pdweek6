#include<iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
string apartment(int numberOfStays, string month);
main()
{
    string month;
    int numberOfStays;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>numberOfStays;
    string aprtprice = apartment(numberOfStays, month);
    cout<<aprtprice<<endl;
    string studio = calculateHotelPrices(month,numberOfStays);
    cout<<studio;
    
}
string calculateHotelPrices(string month, int numberOfStays)
{
    if ((7<numberOfStays<=14)&&((month=="May")||(month=="October"))){
        float studio = (50*numberOfStays)-(50*numberOfStays)/5;
        return "Studio: "+ to_string(studio)+"$.";
    }
    if ((numberOfStays>14)&&((month=="May")||(month=="October"))){
        float studio = (50*numberOfStays)-(50*numberOfStays)/30;
        return "Studio: "+ to_string(studio)+"$.";
    }
    if ((numberOfStays>14)&&((month=="June")||(month=="September"))){
        float studio = (75.20*numberOfStays)-(75.20*numberOfStays)/20;
        return "Studio: "+ to_string(studio)+"$.";
    }
    if ((numberOfStays<=14)&&((month=="June")||(month=="September"))){
        float studio = (75.20*numberOfStays);
        return "Studio: "+ to_string(studio)+"$.";
    }
    if(month=="July"||month=="August"){
        float studio = (76*numberOfStays);
        return "Studio: "+ to_string(studio)+"$.";
    }
}

string apartment(int numberOfStays, string month){
    if(numberOfStays>14&&((month=="May")||(month=="October"))){
        float apartment = (65.0*numberOfStays)-(65.0*numberOfStays)/10;
        return "Apartment: "+to_string(apartment)+"$.";
    }
    if(numberOfStays>14&&((month=="June")||(month=="September"))){
        float apartment = (68.7*numberOfStays)-(68.7*numberOfStays)/10;
        return "Apartment: "+to_string(apartment)+"$.";
    }
        if(numberOfStays<=14&&((month=="June")||(month=="September"))){
        float apartment = (68.7*numberOfStays);
        return "Apartment: "+to_string(apartment)+"$.";
    }
    if(numberOfStays>14&&((month=="July")||(month=="August"))){
        float apartment = (77.0*numberOfStays)-(77.0*numberOfStays)/10;
        return "Apartment: "+to_string(apartment)+"$.";
    }


else if (numberOfStays<=14)
{
        float apartment = (65*numberOfStays)-(65*numberOfStays);
        return "Apartment: "+ to_string(apartment) +"$.";
}

}

