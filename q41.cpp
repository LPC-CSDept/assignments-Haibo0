#include <iostream>
using namespace std;

int main() 
{
 int selections;
  cout<<"Which formula do you want to see?\n\n";
  cout<<"1. Area of a circle\n";
  cout<<"2. Area of a rectangle\n";
  cout<<"3. Area of a Triangle\n";
  cout<<"4. None of them\n";
  cin>>selections;

  // Calculate the real area with the input value
  
  switch(selections)
    {
    case 1:
      cout<<"area=Pi times radius squared\n";
      break;
    case 2:
      cout<<"area=length times width\n";
      break;
    case 3:
      cout<<"area = base * height * 0.5\n";
      break;
      case 4:
      cout<<"Quit\n";
      break;
      default:
      cout<<"error\n";
      return 0;
    
      
      }  
  }
