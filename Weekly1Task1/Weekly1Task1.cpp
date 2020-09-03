

#include <iostream>
#include <string>

#define MAX_LENGTH 100

int age;
int number;
//int birthday;

int main()
{
    char name[MAX_LENGTH] = { 0 };
    char birthday[MAX_LENGTH] = { 0 };

    std::cout << "What is your full name: ";
    std::cin.getline(name, MAX_LENGTH);
    std::cout << "What is your age: ";
        std::cin >> age;
    std::cout << "What is your phone number: ";
        std::cin >> number;
    std::cout << "When is your birthday dd/mm/yyyy: ";
   // std::cin >> day >> month >> year;
        std::cin.getline(birthday, MAX_LENGTH);
    //std::cin >> birthday;
    
        std::cout << "Name - " << name << std:: endl;
        std::cout << "Age - " << age << std::endl;
        std::cout << "Number - " << number << std::endl;
       // std::cout << "Birthday - " << day << month << year << std::endl;
        std::cout << "Birthday - " << birthday << std::endl;



}
