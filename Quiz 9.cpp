#include	<iostream>
#include	<fstream>
#include	<string>
using namespace std;

struct employee
{
    int id;
    string fristname;
    string lastname;
    double salary;
    string department;
    int mon, day, year;
};
int		makingstructarray(employee []);
void	findemployee(employee, int);

//a function   read all lines and then, construct the structure array to store them.
int		makingstructarray(employee emp[])
{
    ifstream infile;
    infile.open("employee.txt");
    if(!infile)
    {
        cout<<"File open failed!"<<endl;
        return 0;
    }
    int i = 0;
    while(!infile.eof())
    {
        infile>>emp[i].id>>emp[i].
        fristname>>emp[i].
        lastname>>emp[i].salary>>emp[i].
        department>>emp[i].mon>>emp[i].day>>emp[i].year;
        i++;
    }
    infile.close();
    return i;
}
//a function to find salary geater than 100000 or works in the “Computer” department and print
void	findemployee(employee emp[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(emp[i].salary > 100000)
        {
           //print  salary geater than 100000 
          cout<<emp[i].id<<" "<<emp[i].fristname<<" "<<emp[i].
              lastname<<" "<<emp[i].salary<<" "<<emp[i].department<<" "<<emp[i].
              mon<<" "<<emp[i].day<<" "<<emp[i].year<<endl;

        }
        //find department is Computer and print them.
        if(emp[i].department == "Computer")
        {
          cout<<emp[i].id<<" "<<emp[i].fristname<<" "<<emp[i].
            lastname<<" "<<emp[i].salary<<" "<<emp[i].department<<" "<<emp[i].
            mon<<" "<<emp[i].day<<" "<<emp[i].year<<endl;
        }
    }
}
// main function to call the functions
int		main()
{
    employee emp[100];
    int n = makingstructarray(emp);
    findemployee(emp, n);
    return 0;
}