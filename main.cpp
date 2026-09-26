#include <iostream>

int main() {
    int number;
for (int i = 0; i < 3; i++) {
    std::cout << "Please enter a number: ";
    std::cin >> number;

    std::cout << "You entered: " << number << std::endl;
}

return 0;

}
