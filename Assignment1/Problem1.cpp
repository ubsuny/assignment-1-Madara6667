#include <iostream>
#include <bitset>

void printTwosComplement(int num) {
    std::bitset<16> binary(num); // Convert to 16-bit binary representation
    std::cout << "Decimal: " << num << " -> Two's Complement (16-bit): " << binary << std::endl;
}

int main() {
    int numbers[] = {10, 436, 1024, -13, -1023, -1024}; // Given numbers
    
    std::cout << "16-bit Two's Complement Representations:\n";
    for (int num : numbers) {
        printTwosComplement(num);
    }

    return 0;
}
