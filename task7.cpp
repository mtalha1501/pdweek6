#include<iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
main()
{
    int examHour,examMinute, studentHour, studentMinute;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examHour;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>examMinute;
    cout<<"Enter Student hour of arrival: ";
    cin>>studentHour;
    cout<<"Enter Student minutes of arrival: ";
    cin>>studentMinute;
    string result = checkStudentStatus(examHour,examMinute,studentHour,studentMinute);
    cout<<result;
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    int examtime = (examHour*60) + examMinute;
    int st_time = (studentHour*60) + studentMinute;
    if (examtime==st_time){
        return "On time";
    }
    if (examtime>st_time){
        int remaining_time = examtime-st_time;
        int remaining_hours = remaining_time/60;
        if (remaining_time>=60){
            int rem_mins = remaining_time%60;
            return "Early\n""Test: "+to_string(remaining_time)+"\n"+to_string(remaining_hours)+":"+to_string(rem_mins)+" hours before the start";
        }
        else if (remaining_time<60){
            return "Early\n""Test: "+to_string(remaining_time)+"\n"+to_string(remaining_time)+" minutes before the start";
        }
    }
    if (examtime<st_time){
        int remaining_time = st_time-examtime;
        int remaining_hours = remaining_time/60;
        if (remaining_time>=60){
            int rem_mins = remaining_time%60;
            return "Late\n""Test: "+to_string(remaining_time)+"\n"+to_string(remaining_hours)+":"+to_string(rem_mins)+" hours after the start";
        }
        else if (remaining_time<60){
            return "Late\n""Test: "+to_string(remaining_time)+"\n"+to_string(remaining_time)+" minutes after the start";
        }
    }

}

