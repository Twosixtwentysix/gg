#include <iostream>
#include <cmath>
#include <iomanip>

// Function to print the detailed steps of Binet's formula calculation
void printBinetFormulaDetails(int n, double phi, double psi, double sqrt5, double phi_pow_n, double psi_pow_n, double diff, double fibN) {
    std::cout << "Using Binet's formula for Fibonacci calculation:\n";
    std::cout << "F(n) = (phi^n - psi^n) / sqrt(5)\n";
    std::cout << "Where:\n";
    std::cout << "  sqrt(5) = " << std::fixed << std::setprecision(3) << sqrt5 << "\n";
    std::cout << "  phi = (1 + sqrt(5)) / 2\n";
    std::cout << "    sqrt(5) = " << sqrt5 << "\n";
    std::cout << "    1 + sqrt(5) = " << (1 + sqrt5) << "\n";
    std::cout << "    (1 + sqrt(5)) / 2 = " << phi << "\n";
    std::cout << "  psi = (1 - sqrt(5)) / 2\n";
    std::cout << "    1 - sqrt(5) = " << (1 - sqrt5) << "\n";
    std::cout << "    (1 - sqrt(5)) / 2 = " << psi << "\n";
    std::cout << "\nIntermediate Steps:\n";
    std::cout << "  phi^" << n << " = " << std::fixed << std::setprecision(15) << phi_pow_n << "\n";
    std::cout << "  psi^" << n << " = " << std::fixed << std::setprecision(15) << psi_pow_n << "\n";
    std::cout << "  phi^" << n << " - psi^" << n << " = " << phi_pow_n << " - " << psi_pow_n << " = " << diff << "\n";
    std::cout << "  (phi^" << n << " - psi^" << n << ") / sqrt(5) = " << diff << " / " << sqrt5 << " = " << fibN << "\n";
}

double fibonacciBinet(int n) {
    const double sqrt5 = std::sqrt(5);
    const double phi_numerator = 1 + sqrt5; 
    const double psi_numerator = 1 - sqrt5;   

    const double phi = phi_numerator / 2;     
    const double psi = psi_numerator / 2;     

    double phi_pow_n = std::pow(phi, n);
    double psi_pow_n = std::pow(psi, n);

 
    double diff = phi_pow_n - psi_pow_n;
    double fibN = diff / sqrt5;

   
    printBinetFormulaDetails(n, phi, psi, sqrt5, phi_pow_n, psi_pow_n, diff, fibN);

    return fibN;
}

int main() {
    int n = 15; 
    double fibNumber = fibonacciBinet(n);

   
    std::cout << "\nThe " << n << "th Fibonacci number using Binet's formula is: " << std::round(fibNumber) << std::endl;

    return 0;
}
