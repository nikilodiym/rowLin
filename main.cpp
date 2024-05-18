#include <iostream>
#include <string>
using namespace std;


int main() {
    int col = 5;
    int row = 5;
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (j >= i && j < col - i) {
                std::cout << "* ";
            }
            else {
                std::cout << "  ";
            }
        }
        cout << endl;
    }

	system("pause");
	return 0;
}