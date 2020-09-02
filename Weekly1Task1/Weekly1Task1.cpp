

#include <iostream>
#include <string>

int name;
int age;
int number;
int birthday;

int main()
{
    std::cout << "What is your full name: ";
    getline( cin, name);
        //std::cin >> name;
    std::cout << "What is your age: ";
        std::cin >> age;
    std::cout << "What is your phone number: ";
        std::cin >> number;
    std::cout << "When is your birthday: ";
        std::cin >> birthday;
    
        std::cout << "Name - " << name << std:: endl;

}
