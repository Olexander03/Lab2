#ifndef LIST_H
#define LIST_H

#include <assert.h> 

template <class T, size_t N>

class List
{
private:
    size_t m_size;
    size_t m_currentSize;
    T* m_data;

public:
    List()
    {
        m_size = N;
        m_currentSize = 0;
        m_data = new T[m_size];
    }

    ~List()
    {
        delete[] m_data;
    }
    
    T& operator[](int index)
    {
        assert(index >= 0 && index < m_size);
        return m_data[index];
    }

    void operator += (const T& element)
    {
        if (m_currentSize < m_size)
        {
            m_data[m_currentSize] = element;
            m_currentSize++;
        }
    }

    
    size_t size () const
    {
        return m_currentSize;
    }
};

#endif