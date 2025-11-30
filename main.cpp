#include<iostream>
#include<string.h>
using namespace std;
struct ticket
{
    string name;
    string time;
    float price;
    int seat;
};
int main()
{
    int sc,sn;
    int tm;
    char ch;
    ticket booking;
    ticket n[3]={{"Barbie"},{"Jawan"},{"OM Shanti OM"}};
    ticket t[3]={{"","6"},{"","8"},{"","11"}};
    string snacks[5]={{"Popcorn=₹100"},{"Thumps-up=₹100"},{"Water bottle=₹20"},{"Caremel Popcorn=₹155"},{"Samosa=100"}};
    cout<<"------------Welcome to DBKI Multiplex--------------\n";
    cout<<"Today's shows\n";

    for(int i=0;i<3;i++)
    {
        cout<<i+1<<"."<<n[i].name<<endl;
    }
    cout<<"Please select the movie:";
    cin>>sc;

    cout<<"Available showtime\n";
    for(int i=0;i<3;i++)
    {
        cout<<i+1<<"."<<t[i].time<<":00PM"<<endl;
    }
    cout<<"Please select the movie timing:";
    cin>>tm;
    
    cout<<"Total available seat=40\n";
    cout<<"Price for one seat is ₹170\n";
    cout<<"Please enter the total seat:";
    cin>>booking.seat;
    booking.price=booking.seat*170;

    cout<<"Would you like to see some option for the snack:(y/n):";
    cin>>ch;
    int snackc;
    int selectsc[5];
    if(ch=='y'||ch=='Y')
    {
        cout<<"Menu of snacks\n";
        for(int i=0;i<5;i++)
        {
            cout<<i+1<<"."<<snacks[i]<<endl;
        }
        cout<<"Please no of snacks:";
        cin>>snackc;

        cout<<"Enter the snack number:";
        for(int i=0;i<snackc;i++)
        {
            cin>>selectsc[i];
        }
    }
    cout<<"--------------DBKI Multiplex--------------"<<endl;
    cout<<"Movie:"<<n[sc-1].name<<endl;
    cout<<"Timing:"<<t[tm-1].time<<":00 PM"<<endl;
    cout<<"Total seat booked:"<<booking.seat<<endl;
    cout<<"Total Price:"<<booking.price<<endl;
    cout<<"Total seat reaming:"<<40-booking.seat<<endl;
    if(ch=='y'||ch=='Y')
    {
         cout<<"Snacks:";
            for(int i=0;i<snackc;i++)
        {
            cout<<"-"<<snacks[selectsc[i]-1];
        }       

    }
}