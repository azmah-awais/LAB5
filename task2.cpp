#include <iostream>
using namespace std;
class Employee {
public:
    virtual float calcSalary() = 0;   
};

class Fulltimeemp : public Employee {
private:
    float fixed;

public:
    Fulltimeemp(float salary) {  
        fixed = salary;
    }

    float calcSalary() {         
        return fixed;
    }
};

class Parttimeemp : public Employee {
private:
    int hours;
    float rate;

public:
    Parttimeemp(int h, float r) {
        hours = h;
        rate = r;
    }

    float calcSalary() {         
        return hours * rate;
    }
};

int main() {
    Fulltimeemp full(60000);      
    Parttimeemp part(9, 5000);    
    
    cout << "full time salary " << full.calcSalary() << endl;
    cout << "part time salary " << part.calcSalary() << endl;

    return 0;
}