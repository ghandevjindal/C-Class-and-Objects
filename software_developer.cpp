using namespace std;

#include <iostream>
#include <cstdlib>

// Define a simple class to represent a software developer
class SoftwareDeveloper {
private:
    std::string name;
    std::string osExperience;

public:
    // Constructor
    SoftwareDeveloper(std::string n, std::string osExp) : name(n), osExperience(osExp) {}

    // Method to display developer information
    void displayInfo() {
        std::cout << "Developer Name: " << name << std::endl;
        std::cout << "OS Experience: " << osExperience << std::endl;
    }
};

int main() {
    // Create an instance of SoftwareDeveloper
    SoftwareDeveloper developer("John Doe", "QNX/Linux");

    // Display developer information
    developer.displayInfo();

    // Display a message indicating successful execution
    std::cout << "C++ project executed successfully!" << std::endl;

    return 0;
}
