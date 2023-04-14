#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return false;
        }
        else { return true; }
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return false;
        }
        else { return true; }
    }
    double add(double num1, double num2) {
        double sum = num1 + num2;
        return sum;
    }
    double multiply(double num1, double num2) {
        double sum = num1 * num2;
        return sum;
    }
    double subtract_1_2(double num1, double num2) {
        double sum = num1 - num2;
        return sum;
    }
    double subtract_2_1(double num1, double num2) {
        double sum = num2 - num1;
        return sum;
    }
    double divide_1_2(double num1, double num2) {
        double sum = num1 / num2;
        return sum;
    }
    double divide_2_1(double num1, double num2) {
        double sum = num2 / num1;
        return sum;
    }
    Calculator(double num1, double num2) {
        this->num1 = num1;
        this->num2 = num2;
    }

    void calc_num(double num1, double num2) {
        for (;;) {
            do {
                std::cout << "Введите num1:";
                std::cin >> this->num1;
                if (!std::cin) {
                    std::cin.clear();
                    std::cin.get();
                }
                this->set_num1(this->num1);
                if (this->set_num1(this->num1)) { std::cout << "Неверный ввод!" << std::endl; }
            } while (this->set_num1(this->num1));

            do {
                std::cout << "Введите num2:";
                std::cin >> this->num2;
                if (!std::cin) {
                    std::cin.clear();
                    std::cin.get();
                }
                this->set_num2(this->num2);
                if (this->set_num2(this->num2)) { std::cout << "Неверный ввод!" << std::endl; }
            } while (this->set_num2(this->num2));

            std::cout << this->add(this->num1, this->num2) << std::endl;
            std::cout << this->multiply(this->num1, this->num2) << std::endl;
            std::cout << this->subtract_1_2(this->num1, this->num2) << std::endl;
            std::cout << this->subtract_2_1(this->num1, this->num2) << std::endl;
            std::cout << this->divide_1_2(this->num1, this->num2) << std::endl;
            std::cout << this->divide_2_1(this->num1, this->num2) << std::endl;
            std::cout << std::endl;
        }
    }
};


int main() {
    setlocale(LC_ALL, "Russian");
    double num1 = 0.0;
    double num2 = 0.0;
    Calculator first(num1, num2);
    first.calc_num(num1, num2);
    return 0;
}