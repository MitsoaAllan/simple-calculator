#include<iostream>

char askIfExit();

int main(){
    double first_number;
    double second_number;
    char operator_type;
    double result;

    while (true)
    {
        std::cout << "Enter the first number : ";
        std::cin >> first_number;
        std::cout << "Enter the operator : ";
        std::cin >> operator_type;
        std::cout << "Enter the second number : ";
        std::cin >>  second_number;

        switch (operator_type)
        {
        case '+':
            result = first_number + second_number;
            std::cout << result << std::endl; 
            break;
        case '-':
            result = first_number - second_number;
            std::cout << result << std::endl; 
            break;
        case '*':
            result = first_number * second_number;
            std::cout << result << std::endl; 
            break;
        case '/':
            result = first_number / second_number;
            std::cout << result << std::endl; 
            break;
        default:
        std::cout << "Syntax Error\n";
            break;
        }
        bool exit = (askIfExit() == 'y') ? true : false;
        if (exit == true){
            return false;
        }
    }
    
    return 0;
}

char askIfExit(){
    char ex;
    std::cout << "Do you want to exit ? (y/n) :";
    std::cin >> ex;
    return ex;
}