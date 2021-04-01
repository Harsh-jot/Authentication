//authentication console

#include <iostream>
#include <conio.h>
#include<windows.h>

using namespace std;

int ,aim()
{
  string user,psw, User="folks", Pass="lhdmlh";
  int i=0;
  cout<< "Please enter your Username & Password." <<endl;
  cout<< "Username:";
  cin>>user;
  cout<< "passsword-";
  cin>>psw;
  
  cout<<endl;
  while(user!=User || psw!=Pass)
  {
    cout<< "INVALID username or password!" <<endl;
    cout<< "Please enter your Username & Password." <<endl;
    cout<< "Username:";
    cin>>user;
    cout<< "Password-";
    cin>>psw;
    i++;
    cout<<endl;
    if(i>4)
    {
      cout<<"Too many incorrect Attempts. Try again Later." <<endl;
      return 0;
    }
   } 
  cout<< "Access Granted! WELCOME" <<user<<endl;
  return 0;
}  
