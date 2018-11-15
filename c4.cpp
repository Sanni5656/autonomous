#include<iostream>
#include<conio.h>
using namespace std;
class mobile
{
      public:
             char manuf[30];
             int model;
             int year;
             char color[20];
             int sim; 
      public:
             void input()
             {
                  cin>>manuf>>model>>year>>color>>sim;
                  }
                  
             void issinglesim()
             {
                  if(sim==1)
                  {
                            cout<<"\nSingle sim mobile";
                            }
                  else if(sim==2)
                  {
                                cout<<"\nDual sim phone";
                                }
                                }
                  void display()
                  {
                       cout<<"\n Manufacturer is "<<manuf;
                       cout<<"\n Model no is"<<model;
                       cout<<"\n year of manuf "<<year;
                       cout<<"\n no of sim"<<sim;
                       }
                       };
int main()
{
    mobile m1;
    m1.input();
    m1.issinglesim();
    m1.display();
getch();
}
