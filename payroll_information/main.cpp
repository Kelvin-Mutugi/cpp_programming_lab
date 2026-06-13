#include <iostream>
#include <string>
using namespace std;

struct Employee{
    std::string employee_name;
    double hours_worked;
    double hourly_rate;
};

int main(){
   Employee Employee_payroll[3]{
    {"Kelvin", 10, 10.4},
    {"Stevo", 20, 11.4},
    {"Victor", 15, 12.4},
   };

   double total_pay = 0.00;
   for (int i = 0; i < 3; i++){
    if (Employee_payroll[i].hours_worked < 0 || Employee_payroll[i].hourly_rate < 0){
        std::cout << "Hours worked or hourly rate cannot be negative";
    }
    else{
        total_pay = Employee_payroll[i].hours_worked * Employee_payroll[i].hourly_rate;
        std::cout << "Total pay for " << Employee_payroll[i].employee_name << " " << "is: " << total_pay << "\n";
    };

   }

    return 0;
}