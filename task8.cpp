
#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main(){
    string yearType;
    int holidays, hometownWeekends;
    cout<<"Enter year type: ";
    cin>>yearType;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>hometownWeekends;
    int result = calculateVolleyballGames(yearType,holidays,hometownWeekends);
    cout<<result;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{

    float num_1= (hometownWeekends) - (hometownWeekends-1)*(3/4);
    float num_2 = holidays-(holidays*(2/3));
    int final_playtime = (num_1+num_2);
    if (yearType=="leap"){
        return final_playtime*0.15;
    }
    else {
        return final_playtime;
    }
}
