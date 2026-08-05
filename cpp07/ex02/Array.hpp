#pragma once
#include <iostream>

template <typename T>
class Array
{
private:
    T * array;
    unsigned int length;
public:
    Array()
    {
        array = new T[0];
        length = 0;
    }
    Array(unsigned int n)
    {
        array = new T[n];
        length = n;
    }
    Array(const Array& other)
    {
        array = new T [other.length];
        int i = 0;
        while (i < other.length)
        {
            array[i] = other.array[i];
            i++;
        }
        this->length = other.length;
    }
    Array& operator=(const Array& other)
    {
        if (this != &other)
        {
            delete[] array;
            array = new T [other.length];
            int i = 0;
            while (i < other.length)
            {
                array[i] = other.array[i];
                i++;
            }
            this->length = other.length;
        }
        return (*this);
    }
    T& operator[](unsigned int a)
    {
        if (a < length)
            return (this->array[a]);
        else
        {
            throw std::out_of_range("value is bigger than size");
        }
    }
    const T& operator[](unsigned int a) const
    {
        if (a < length)
            return (this->array[a]);
        else
        {
            throw std::out_of_range("value is bigger than size");
        }
    }
    unsigned int size() const
    {
        return(this->length);
    }
    ~Array(){
        delete[] array;
    }
    
};
