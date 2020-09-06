
#include <iostream>
#include <string>

#define MAX_LENGTH 100



std::string s;
int age;
int number;
int day;
int month;
int year;

int main()
{
    char fullname[MAX_LENGTH] = { 0 };
    

    std::cout << "What is your full name: ";
    std::cin.getline(fullname, MAX_LENGTH);
    
    std::cout << "What is your age: ";
        std::cin >> age;
    std::cout << "What is your phone number: ";
        std::cin >> number;
    std::cout << "When is your birthday dd/mm/yyyy: " << std::endl;
    std::cout << "Day: ";
    std::cin >> day;
    std::cout << "Month: ";
    std::cin >> month;
    std::cout << "Year: ";
    std::cin >> year;
    

        std::cout << "Name - " << fullname << std:: endl;
        std::cout << "Age - " << age << std::endl;
        std::cout << "Number - " << number << std::endl;
        std::cout << "Birthday - " << day << "/" << month << "/" << year << std::endl;



}
