#include <iostream>
#include <string>
using namespace std;

int main() {
    int names, choice;
    double price = 0;
    double total = 0;
    double totalRevenue = 0;
    int user_number = 0; 

    do {
        user_number++;

        std::cout << "               HIII, USER #" << user_number << "               " << std::endl;
        std::cout << std::endl;
        std::cout << "______________List Product________________" << std::endl;
        std::cout << "                                          |" << std::endl;
        std::cout << "1. Girlish -- 115 UAH" << "                     |" << std::endl;
        std::cout << "2. Christmas Tree Toy -- 60 UAH" << "           |" << std::endl;
        std::cout << "3. Christmas Tree -- 310 UAH" << "              |" << std::endl;
        std::cout << "4. Soft toy -- 150 UAH" << "                    |" << std::endl;
        std::cout << "5. Decorations -- 40 UAH" << "                  |" << std::endl;
        std::cout << "__________________________________________|" << std::endl;

        std::cout << "Enter the number of products you want to buy: ";
        std::cin >> names;

        switch (names) {
        case 1:
            price = 115;
            std::cout << "How much product do you want to buy?: ";
            std::cin >> total;
            break;
        case 2:
            price = 60;
            std::cout << "How much product do you want to buy?: ";
            std::cin >> total;
            break;
        case 3:
            price = 310;
            std::cout << "How much product do you want to buy?: ";
            std::cin >> total;
            break;
        case 4:
            price = 150;
            std::cout << "How much product do you want to buy?: ";
            std::cin >> total;
            break;
        case 5:
            price = 40;
            std::cout << "How much product do you want to buy?: ";
            std::cin >> total;
            break;
        default:
            std::cout << "Error" << std::endl;
            break;
        }

        if (total < 1) {
            std::cout << "Incorrect" << std::endl;
            break;
        }

        double finalPrice = price * total;
        totalRevenue += finalPrice;

        std::cout << "Added to cart " << total << " pcs of goods." << std::endl;
        std::cout << "That's all? (y/n): ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            std::cout << "Total amount of purchases: " << finalPrice << " UAH" << std::endl;
            break;
        }
        if (choice == 'n' || choice == 'N') {
            std::cout << "Enter the number of products you want to buy: ";
            std::cin >> names;
        }

    } while (true);

    std::cout << "The final profit of the store is " << totalRevenue << " UAH" << std::endl;

    system("pause");
    return 0;
}
