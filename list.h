
#include <iostream>
using namespace std;


const int MAX_LENGTH =100; // Número posible máximo de
// componentes necesarios
typedef int ItemType; // Tipo de cada componente
// (un tipo simple o clase de cadena)
class List{
    public:
        bool IsEmpty() const;
    // Poscondición:
    // Valor de retorno == true, si la lista está vacía
    // == false, en caso contrario
        bool IsFull() const;
    // Poscondición:
    // Valor de retorno == true, si la lista está llena
    // == false, en caso contrario
        int Length() const;
    // Poscondición:
    // Valor de retorno == longitud de la lista
        void Insert( /* in */ ItemType item );
    // Precondición:
    // NO está completa ()
    // Poscondición:
    // el elemento está en la lista
    // && Length() == Length()@entry + 1
        void Delete( /* in */ ItemType item );
    // Precondición:
    // NO está vacía()
    // Poscondición:
    // SI el elemento está en la lista en la entrada
    // La primera aparición del elemento ya no está en la lista
    // && Length() == Lenght()@entry – 1
    // ELSE
    // La lista permanece sin cambio
        bool IsPresent( /* in */ ItemType item );
    // Poscondición:
    // Valor de retorno == true, si el elemento está en la lista
    // == false, en caso contrario
        void Reset();
    // Poscondición:
    // Se inicializa la iteración
        ItemType GetNextItem();
    // Precondición:
    // La iteración ha sido inicializada mediante llamada a Reset;
    // Ningún transformador ha sido invocado desde la última llamada
    // Poscondición:
    // El valor de retorno es el elemento en la posición actual
    // en la lista de la entrada;
    // Si ha sido devuelto el último elemento, la siguiente llamada
    // devolverá el primer elemento.
        void SelSort();
    // Poscondición:
    // Los componentes de la lista están en orden ascendente de valor
        List();
    // Constructor
    // Poscondición:
    // Se crea la lista vacía
    private:
        int length;
        int currentPos;
        ItemType data[MAX_LENGTH];
};
