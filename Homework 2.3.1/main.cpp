#include <iostream>

class Calculator {
private:
    double num1=7;
    double num2=7;

public:
    bool set_num1(double num1) {
        if (num1 == 0) {
            
            return true;
        }
        else { this->num1 = num1; return false; }
    }
    bool set_num2(double num2) {
        if (num2 == 0) {
           
            return true;
        }
        else { this->num2 = num2; return false; }
    }
    double add() {
        double sum = num1 + num2;
        return sum;
    }
    double multiply() {
        double sum = num1 * num2;
        return sum;
    }
    double subtract_1_2() {
        double sum = num1 - num2;
        return sum;
    }
    double subtract_2_1() {
        double sum = num2 - num1;
        return sum;
    }
    double divide_1_2() {
        double sum = num1 / num2;
        return sum;
    }
    double divide_2_1() {
        double sum = num2 / num1;
        return sum;
    }

   Calculator(double num1, double num2) {
        if (num1 != 0) {
            this->num1 = num1;
        }
        else { num1 = 1; this->num1 = 1;}
        
    if (num2 !=0){ this->num2 = num2; }
        else { num2 = 1; this->num2 = num2;}
    }
};


void calc_num(Calculator general) {
        double number = 1;
        double num1 = 2;
        double num2 = 2;
      
        for (;;) {
            do {
                std::cout << "Введите num1:";
        
                std::cin >> num1;
                if (!std::cin) {
                    std::cin.clear();
                    std::cin.get();
                }
                number = general.set_num1(num1);
                if (number) { std::cout << "Неверный ввод!" << std::endl; }
            } while (number);

            do {
                std::cout << "Введите num2:";
                
                std::cin >> num2;
                if (!std::cin) {
                    std::cin.clear();
                    std::cin.get();
                }
             number = general.set_num2(num2);
                if (number) { std::cout << "Неверный ввод!" << std::endl; }
            } while (number);

            std::cout << general.add() << std::endl;
            std::cout << general.multiply() << std::endl;
            std::cout << general.subtract_1_2() << std::endl;
            std::cout << general.subtract_2_1() << std::endl;
            std::cout << general.divide_1_2() << std::endl;
            std::cout << general.divide_2_1() << std::endl;
            std::cout << std::endl;
        }
    }



int main() {
    setlocale(LC_ALL, "Russian");
    double num1 = 1;
    double num2 = 1;
    Calculator first(num1, num2);
    calc_num(first);
    return 0;
}