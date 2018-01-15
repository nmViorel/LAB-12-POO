#include <iostream>

using namespace std;

class Stiva{

public:
    int peak;
    int len;
    int *p;

public:
    Stiva(int dim){
        this->peak = -1;
        this->len = dim;
        if(dim == 0)
            p = 0;
        else
            p= new int[len];
    }

    Stiva(){
        this->peak = -1;
        this->len= 100;
        p = new int[len];
    }

    void push(int elem){
        if(p == 0){
            cout << "Dimension is 100 by default" << endl;
            p = new int[100];
        }
        if(peak == (len - 1)){
            cout << "The stack is full" << endl;
            return;
        } else {
            peak++;
            p[peak] = elem;
        }
    }


    int pop(){
        if(p == 0 || peak == -1){
            cout<<"The stack is empty"<<endl;
            return -1;
        }
        int x = p[peak];
        peak--;
        return x;
    }

    bool isEmpty(){
        if((this->peak) == -1){
            return true;
        } else {
            return false;
        }
    }

    void display(){
        for(int i = 0; i <= peak; i++)
            cout << p[i] <<" ";
        cout << endl;
        }
};

int main()
{
    int dim;
    Stiva *stiva;
    cout << "What is the dimension of the stack?(for default press 0)";
    cin >> dim;
    if(dim > 0){
        stiva = new Stiva(dim);
    }
    else {
        if (dim == 0)
            {
            stiva = new Stiva(100);
            dim = 100;
            }
    }

    for (int i=1; i<=dim; i++)
    {
        stiva->push(i);
        cout<< i << " was added by push method" << endl;
        stiva->display();
    }

    cout<<"===================== POP ====================="<<endl;

    for (int i=1; i<=dim; i++)
    {
        cout<< stiva->pop() << " was removed by pop method"<<endl;
        stiva->display();
    }
    stiva->pop();

    return 0;
}
