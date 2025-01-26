#include<iostream>
#include<string> 
using namespace std; 
class Teacher{
private:
int salary;
public:
string name;
string department;
int employeeid;  


void set_salary(int salary) // setter function
{
    this->salary = salary; 
}

int get_salary() // getter function
{
    return salary; 
}

void changedepartment(string newdepartment)
{
    department = newdepartment;
}

};

int main()
{
    Teacher Geeta; 

    Geeta.name = "Geeta"; 
    Geeta.department = "Economics"; 
    Geeta.employeeid = 23;
    Geeta.set_salary(25000); 

    cout<<Geeta.get_salary(); 


    Teacher Babita; 

    Babita.name = "Babita"; 
    Babita.department = "Economics"; 
    Babita.employeeid = 24;
    Babita.set_salary(27000); 

    cout<<Babita.get_salary(); 
    
}