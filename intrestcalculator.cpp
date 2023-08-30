#include<iostream>
using namespace std;

float intrestcalc(int money, const float intrest=1.04){
    int totalgain= (money*intrest);
    return totalgain;
}



int main(){
int funds;
string ans;
cout<<"welcome into yp bank ltd"<<endl;
cout<<"are you intrested to fixed deposit in our bank "<<endl;
cin>>ans;
if (ans=="yes","Yes","YES")
{
 
cout<<"enter the amount of funds you want to fixed deposit "<<endl;
cin>>funds;
cout<<"your total amount after 1 year is "<<intrestcalc(funds)<<endl;
}
else if (ans!="yes"){
    cout<<"thank you for using our services ";
    return 0;
}


}