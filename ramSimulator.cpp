// write a ram simulator in C++ to simulate the working of a RAM

#include <iostream>
#include <vector>
#include <string>
#include <map>

class RAM {
    std::map<int, int> memory;

public:
    RAM() {
        memory[0] = 0;
        memory[1] = 1;
        memory[2] = 2;
        memory[3] = 3;
        memory[4] = 4;
        memory[5] = 5;
        memory[6] = 6;
        memory[7] = 7;
        memory[8] = 8;
        memory[9] = 9;
        memory[10] = 10;
        memory[11] = 11;
        memory[12] = 12;
        memory[13] = 13;
        memory[14] = 14;
        memory[15] = 15;
        memory[16] = 16;
        memory[17] = 17;
        memory[18] = 18;
        memory[19] = 19;
        memory[20] = 20;
        memory[21] = 21;
        memory[22] = 22;
        memory[23] = 23;
        memory[24] = 24;
        memory[25] = 25;
        memory[26] = 26;
        memory[27] = 27;
        memory[28] = 28;
        memory[29] = 29;
        memory[30] = 30;
    }

    void write(int address, int data) {
        memory[address] = data;
    }

    int read(int address) {
        return memory[address];
    }
};

int main() {
    RAM ram;
    ram.write(0, 10);
    ram.write(1, 20);
    ram.write(2, 30);
    ram.write(3, 40);
    ram.write(4, 50);
    ram.write(6, 10);
    ram.write(7, 20);
    ram.write(8, 30);
    ram.write(9, 40);
    ram.write(10, 50);
    ram.write(11, 10);
    ram.write(11, 20);
    ram.write(12, 30);
    ram.write(13, 40);
    ram.write(14, 50);
    ram.write(15, 10);
    ram.write(16, 20);
    ram.write(17, 30);
    ram.write(18, 40);
    ram.write(19, 50);
    ram.write(20, 10);
    ram.write(21, 20);
    ram.write(22, 30);
    ram.write(23, 40);
    ram.write(24, 50);
    ram.write(25, 10);
    ram.write(26, 20);
    ram.write(27, 30);
    ram.write(28, 40);
    ram.write(29, 50);
    ram.write(30, 10);


    std::cout << "Data at address 0: " << ram.read(0) << std::endl;
    std::cout << "Data at address 1: " << ram.read(1) << std::endl;
    std::cout << "Data at address 2: " << ram.read(2) << std::endl;
    std::cout << "Data at address 3: " << ram.read(3) << std::endl;
    std::cout << "Data at address 4: " << ram.read(4) << std::endl;
    std::cout << "Data at address 6: " << ram.read(6) << std::endl;
    std::cout << "Data at address 7: " << ram.read(7) << std::endl;
    std::cout << "Data at address 8: " << ram.read(8) << std::endl;
    std::cout << "Data at address 9: " << ram.read(9) << std::endl;
    std::cout << "Data at address 10: " << ram.read(10) << std::endl;
    std::cout << "Data at address 11: " << ram.read(11) << std::endl;
    std::cout << "Data at address 12: " << ram.read(12) << std::endl;
    std::cout << "Data at address 13: " << ram.read(13) << std::endl;
    std::cout << "Data at address 14: " << ram.read(14) << std::endl;
    std::cout << "Data at address 15: " << ram.read(15) << std::endl;
    std::cout << "Data at address 16: " << ram.read(16) << std::endl;
    std::cout << "Data at address 17: " << ram.read(17) << std::endl;
    std::cout << "Data at address 18: " << ram.read(18) << std::endl;
    std::cout << "Data at address 19: " << ram.read(19) << std::endl;
    std::cout << "Data at address 20: " << ram.read(20) << std::endl;
    std::cout << "Data at address 21: " << ram.read(21) << std::endl;
    std::cout << "Data at address 22: " << ram.read(22) << std::endl;
    std::cout << "Data at address 23: " << ram.read(23) << std::endl;
    std::cout << "Data at address 24: " << ram.read(24) << std::endl;
    std::cout << "Data at address 25: " << ram.read(25) << std::endl;
    std::cout << "Data at address 26: " << ram.read(26) << std::endl;
    std::cout << "Data at address 27: " << ram.read(27) << std::endl;
    std::cout << "Data at address 28: " << ram.read(28) << std::endl;
    std::cout << "Data at address 29: " << ram.read(29) << std::endl;
    std::cout << "Data at address 30: " << ram.read(30) << std::endl;

    return 0;
}