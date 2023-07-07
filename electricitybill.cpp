/*This is a c++ program for displaying the amount of the electricity bill as per
user enters the unit of the electricity that they have consumed*/

#include<iostream>
using namespace std;
int main(){
    
    int mw;
cout<<"Enter the Kilowatt per hour"<<'\n';
cin>>mw;

if(mw>=0 && mw==10){
    cout<<"The minumum demand is: Rs.30"<<'\n';
    cout<<"The energy charge per hour is: Rs.0";
}
else if(mw>10 && mw==20){
    cout<<"The minumum demand is: Rs.30"<<'\n';
    cout<<"The energy charge per hour is: Rs.3.00";
}
else if(mw>20 && mw==30){
    cout<<"The minumum demand is: Rs.50"<<'\n';
    cout<<"The energy charge per hour is: Rs.6.50";
}

else if(mw>30 && mw==50){
    cout<<"The minumum demand is: Rs.50"<<'\n';
    cout<<"The energy charge per hour is: Rs.8";
}

else if(mw>50 && mw==100){
    cout<<"The minumum demand is: Rs.75"<<'\n';
    cout<<"The energy charge per hour is: Rs.9.50";
}

else if(mw>100 && mw==150){
    cout<<"The minumum demand is: Rs.100"<<'\n';
    cout<<"The energy charge per hour is: Rs.9.50";
}

else if(mw>150 && mw==250){
    cout<<"The minumum demand is: Rs.125"<<'\n';
    cout<<"The energy charge per hour is: Rs.10";
}

else if(mw>250 && mw>400){
    cout<<"The minumum demand is: Rs.150"<<'\n';
    cout<<"The energy charge per hour is: Rs.11";
}

else if(mw>400){
    cout<<"The minumum demand is: Rs.175"<<'\n';
    cout<<"The energy charge per hour is: Rs.12";
}

else{
    cout<<("Please enter the valid unit\n");
}

return 0;

}

