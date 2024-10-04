
#include <stdio.h>
#include <string.h>

#define MAX_ELEMENTS 118

// Define a structure for an element
struct Element {
    int atomicNumber;
    char symbol[3];
    char name[20];
    float atomicWeight;
};

// Function to initialize the periodic table
void initializePeriodicTable(struct Element periodicTable[]) {
    // Sample initialization for the first 10 elements
    periodicTable[0] = (struct Element){1, "H", "Hydrogen", 1.008};
    periodicTable[1] = (struct Element){2, "He", "Helium", 4.0026};
    periodicTable[2] = (struct Element){3, "Li", "Lithium", 6.94};
    periodicTable[3] = (struct Element){4, "Be", "Beryllium", 9.0122};
    periodicTable[4] = (struct Element){5, "B", "Boron", 10.81};
    periodicTable[5] = (struct Element){6, "C", "Carbon", 12.011};
    periodicTable[6] = (struct Element){7, "N", "Nitrogen", 14.007};
    periodicTable[7] = (struct Element){8, "O", "Oxygen", 15.999};
    periodicTable[8] = (struct Element){9, "F", "Fluorine", 18.998};
    periodicTable[9] = (struct Element){10, "Ne", "Neon", 20.180};
    
    // Additional elements can be added similarly...
}

// Function to display the periodic table
void displayPeriodicTable(struct Element periodicTable[], int numElements) {
    printf("%-15s %-5s %-20s %-15s\n", "Atomic Number", "Symbol", "Name", "Atomic Weight");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < numElements; i++) {
        printf("%-15d %-5s %-20s %-15.3f\n", 
               periodicTable[i].atomicNumber, 
               periodicTable[i].symbol, 
               periodicTable[i].name, 
               periodicTable[i].atomicWeight);
    }
}

int main() {
    struct Element periodicTable[MAX_ELEMENTS];
    initializePeriodicTable(periodicTable);
    
    // Display the periodic table
    displayPeriodicTable(periodicTable, 10); // Change the second argument to display more elements

    return 0;
}