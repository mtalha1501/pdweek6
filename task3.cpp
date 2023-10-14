#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);

main()
{
    int day;
    string month;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of birth(e.g., January, February): ";
    cin>>month;
    cout<<"Zodiac Sign: "<<findZodiacSign(day,month);
}
string findZodiacSign(int day, string month){
    if((21<=day<=31&&month=="March")||((1<=day<=19)&&(month=="April"))){
        return "Aries";
    }
    else if ((20<=day<=31&&month=="April")||((1<=day<=20)&&(month=="May"))){
        return "Taurus";
    }
    else if ((21<=day<=31&&month=="May")||((1<=day<=20)&&(month=="June"))){
        return "Gemini";
    }
    else if ((21<=day<=31&&month=="June")||((1<=day<=22)&&(month=="July"))){
        return "Cancer";
    }
    else if ((23<=day<=31&&month=="July")||((1<=day<=22)&&(month=="August"))){
        return "Leo";
    }
    else if((23<=day<=31&&month=="August")||((1<=day<=22)&&(month=="September"))){
        return "Virgo";
    }
    else if((23<=day<=31&&month=="September")||((1<=day<=22)&&(month=="October"))){
        return "Libra";
    }
    else if ((23<=day<=31&&month=="October")||((1<=day<=21)&&(month=="November"))){
        return "Scorpio";
    }
    else if((22<=day<=31&&month=="November")||((1<=day<=21)&&(month=="December"))){
        return "Sagittarius";
    }
    else if ((22<=day<=31&&month=="December")||((1<=day<=19)&&(month=="January"))){
        return "Capricorn";
    }
    else if ((20<=day<=31&&month=="January")||((1<=day<=18)&&(month=="February"))){
        return "Aquarius";
    }
    else if((19<=day<=31&&month=="February")||((1<=day<=20)&&(month=="March"))){
        return "Pisces";
    }
    



} 