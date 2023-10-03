#ifndef NO_H
#define NO_H


namespace adf {

    class No
    {
    public:
        No();
        No(int elemento);

        int getData() const;
        void setData(int newData);

        No* getNext() const;
        void setNext(No *newNext);

        No* getPrevious()const;
        void setPrevious(No *newPrevious);

    private:
        int data;
        No *next;
        No *previous;
    };
}

#endif // NO_H
