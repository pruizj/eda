#include "ElementoListaSimple.h"

class Stack {
    public:
        std::shared_ptr<ElementoListaSimple> front = nullptr;

    public:
        Stack();

        void push(const TipoDato& datos);
        void pop();
        TipoDato& top() const;

        int size() const;
};