#include <iostream>
using namespace std;
int main()
{
int num,win_num=67;
cout<<"WELOCOME TO THE GUESS NUMBER GAME ";
cout<<endl<<"GUESS THE NUMBER BETWEEN 0 TO 100 : ";
cout<<endl<<"---------------------------------------"<<endl;
cin>>num;
while(!(num == win_num))
{
if(num>=20 && num<=40)
{
cout<<endl<<"you give the low number please try again ";
cin>>num;
}
else if (num>40 && num <=60)
{
cout<<endl<<"you are close please try again : ";
cin>>num;
}
else if (num>60 && num<=70 )
{
cout<<endl<<"you are so close please try again ";
cin>>num;
}
else if (num>70 && num<=80)
{
cout<<endl<<"you are so close please try again ";
cin>>num;
}
else if (num>80 && num<=100)
{
cout<<endl<<"you give the high number please try again ";
cin>>num;
}
else
{cout<<endl<<"you give the low number";
cin>>num;
}
}
cout<<endl<<"WOW! YOU PUT CORRECT NUMBER ";
return 0;
}
