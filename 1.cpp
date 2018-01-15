#include <iostream>
using namespace std;

class Complex{

private:
    float r;
    float i;

public:
    Complex(){
        this->r = 0;
        this->i = 0;
    }

    Complex(float r, float i){
        this->r = r;
        this->i = i;
    }

    int getReal(){
        return this->r;
    }

    int getImaginary(){
        return this->i;
    }

    void setReal(float r){
        this->r = r;
    }

    void setImaginary(float i){
        this->i = i;
    }

    Complex sum(Complex a){
        Complex suma(this->r + a.getReal(), this->i + a.getImaginary());
        return suma;
    }

    Complex difference(Complex a){
        Complex diff(this->r - a.getReal(), this->i - a.getImaginary());
        return diff;
    }

    Complex multiplication(Complex a){
        Complex mlt(this->r * a.getReal() - this->i * a.getImaginary(), this->r * a.getImaginary() + this->i * a.getReal());
        return mlt;
    }

    void equalityChecker(Complex a){
        if((this->r == a.getReal()) && (this->i = a.getImaginary())){
            cout<<"The numbers are equal";
        }
        else {
            cout<<"Oh... This numbers are not equal";
        }
    }

    Complex power(int p){
        int i;
        Complex comp(this->r, this->i);
        Complex aux(this->r, this->i);
        for(i = 1; i < p; i++){
            comp = comp.multiplication(aux);
        }
        return comp;
    }

    void printComplex(){
        cout << this->r << " + " << this->i << "i" <<endl;
    }

};

int main(){
    int real, imaginar, putere;
    Complex a(5, 6);
    Complex b(6, 3);
    Complex suma, diferenta, produs;
    cout << "The chosen complex numbers are: " << endl;
    a.printComplex();
    b.printComplex();
    cout << "The sum is: " << endl;
    suma = a.sum(b);
    suma.printComplex();
    cout << "The difference is: " << endl;
    diferenta = a.difference(b);
    diferenta.printComplex();
    cout << "a x b is " << endl;
    produs = a.multiplication(b);
    produs.printComplex();
    cout << "Type the power for this two numbers: ";
    cin >> putere;
    cout << "a to the power " << putere << "is" << endl;
    a = a.power(putere);
    a.printComplex();
    cout << "b to the power " << putere << "is" << endl;
    b = b.power(putere);
    b.printComplex();
    cout << endl << "Checking if a and b are equal..." << endl;
    a.equalityChecker(b);
    return 0;
}
