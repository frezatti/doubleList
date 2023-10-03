#ifndef LLDE_H
#define LLDE_H
#include<no.h>
#include<QString>

namespace adf {


class LLDE
{
public:
    LLDE();
     bool isEmpty()const;

     void insertFirst(int element);
     int accessFirst()const;
     int removeFirst();

     void insertLast(int element);
     int accessLast()const;
     int removeLast();

     void insertPosition(int element, int posicao);
     int accessPosition(int position)const;
     int removePosition(int position);

     void insertOrder(int element);
     int getnumberElements()const;


     QString accessAll()const;
private:
    No* first;
    No* last;
    int numberElements;
};
}
#endif // LLDE_H
