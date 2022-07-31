#include <iostream>
using namespace std;

class simpCalc
{
    int num1, num2;

public:
    void setNum(int a, int b);
    void add(int a, int b);
    void subtract(int a, int b);
    void multiply(int a, int b);
    void divide(int a, int b);
    void display(int a, int b);
};

class ScientificCalc
{
    int num1, num2;
public:
    
    void setNumS(int a, int b);
    void ComplexS(int a, int b);
    void CompareS(int a, int b);
    void averageS(int a, int b);
    void displayS(int a, int b);
};

class HybridCalc : public simpCalc, public ScientificCalc
{
    public:
    void displayH(int a, int b);
};

void HybridCalc :: displayH(int a, int b)
{
    HybridCalc HC;
    HC.setNum(a, b);
    HC.add(a, b);
    HC.subtract(a, b);
    HC.multiply(a, b);
    HC.divide(a, b);
    HC.ComplexS(a, b);
    HC.CompareS(a, b);
    HC.averageS(a, b);
};

void simpCalc ::setNum(int a, int b)
{
    num1 = a;
    num2 = b;
};

void simpCalc ::add(int a, int b)
{
    cout << a + b << endl;
};
void simpCalc ::subtract(int a, int b)
{
    cout << a - b << endl;
};
void simpCalc ::multiply(int a, int b)
{
    cout << a * b << endl;
};
void simpCalc ::divide(int a, int b)
{
    cout << a / b << endl;
};

void simpCalc ::display(int a, int b)
{
    simpCalc SC;
    add(a, b);
    subtract(a, b);
    multiply(a, b);
    divide(a, b);
};

void ScientificCalc ::setNumS(int a, int b)
{
    num1 = a;
    num2 = b;
};

void ScientificCalc ::ComplexS(int a, int b)
{
    cout << "The Complex Number is : " << a << "+" << b << "i" << endl;
};

void ScientificCalc ::CompareS(int a, int b)
{
    if (a > b)
    {
        cout << "a>b" << endl;
    }
    if (a == b)
    {
        cout << "a=b" << endl;
    }

    else
        cout << "b>a" << endl;
};

void ScientificCalc ::averageS(int a, int b)
{
    cout << "The average is : " << (a + b) / 2 << endl;
};

void ScientificCalc ::displayS(int a, int b)
{
    ScientificCalc SC;
    SC.ComplexS(a, b);
    SC.averageS(a, b);
    SC.CompareS(a, b);
};

int main()
{
    int a, b;
    cout << "Enter the two numbers :" << endl;
    cin >> a >> b;
    simpCalc SC;
    ScientificCalc SfC;
    HybridCalc HC;
    SC.display(a, b);
    cout<<"Now the results are printed using Scientific Calculator Class!!"<<endl;
    SfC.displayS(a, b);
    cout<<"Now the results are printed using object of another Inherited Class Hybrid Calc!!"<<endl;
    HC.displayH(a ,b);

    cout<<"Multiple Inheritance is used in this program!";
}