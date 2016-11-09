#include <iostream>

#ifndef UNTITLED_TRACER_H
#define UNTITLED_TRACER_H

#endif //UNTITLED_TRACER_H


template <class T>
class Tracer {


public:

    static int counter;

    Tracer(T value) {
        this->value = value;
        counter++;
        std::cout << "Ich bin ein Konstruktor!" << std::endl;
    }
    Tracer(const Tracer& x);
    Tracer& operator=(const Tracer&);
    T getValue() {
        return value;
    }
    ~Tracer();

private:
    T value;

};

template <class T>
Tracer<T>::Tracer(const Tracer& x){
    std::cout << "Ich bin ein Kopierkonstruktor!" << std::endl;
    value = x.value;
    
}

template <class T>
Tracer<T>& Tracer<T>::operator=( const Tracer<T>& r){ //Operatorueberladung
    value = r.value;
    std::cout << "Ich bin ein Kopierkonstruktor!" << std::endl;
    return *this;
}

template <typename T>
int Tracer<T>::counter = 0;

template <class T>
Tracer<T>::~Tracer(){
    std::cout << "Ich bin ein Destruktor!" << std::endl;
}
