
#include <iostream>
using namespace std;


const int MAX_LENGTH =100; // N�mero posible m�ximo de
// componentes necesarios
typedef int ItemType; // Tipo de cada componente
// (un tipo simple o clase de cadena)
class List{
    public:
        bool IsEmpty() const;
    // Poscondici�n:
    // Valor de retorno == true, si la lista est� vac�a
    // == false, en caso contrario
        bool IsFull() const;
    // Poscondici�n:
    // Valor de retorno == true, si la lista est� llena
    // == false, en caso contrario
        int Length() const;
    // Poscondici�n:
    // Valor de retorno == longitud de la lista
        void Insert( /* in */ ItemType item );
    // Precondici�n:
    // NO est� completa ()
    // Poscondici�n:
    // el elemento est� en la lista
    // && Length() == Length()@entry + 1
        void Delete( /* in */ ItemType item );
    // Precondici�n:
    // NO est� vac�a()
    // Poscondici�n:
    // SI el elemento est� en la lista en la entrada
    // La primera aparici�n del elemento ya no est� en la lista
    // && Length() == Lenght()@entry � 1
    // ELSE
    // La lista permanece sin cambio
        bool IsPresent( /* in */ ItemType item );
    // Poscondici�n:
    // Valor de retorno == true, si el elemento est� en la lista
    // == false, en caso contrario
        void Reset();
    // Poscondici�n:
    // Se inicializa la iteraci�n
        ItemType GetNextItem();
    // Precondici�n:
    // La iteraci�n ha sido inicializada mediante llamada a Reset;
    // Ning�n transformador ha sido invocado desde la �ltima llamada
    // Poscondici�n:
    // El valor de retorno es el elemento en la posici�n actual
    // en la lista de la entrada;
    // Si ha sido devuelto el �ltimo elemento, la siguiente llamada
    // devolver� el primer elemento.
        void SelSort();
    // Poscondici�n:
    // Los componentes de la lista est�n en orden ascendente de valor
        List();
    // Constructor
    // Poscondici�n:
    // Se crea la lista vac�a
    private:
        int length;
        int currentPos;
        ItemType data[MAX_LENGTH];
};
