//
//  MyVector.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/24/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef MyVector_h
#define MyVector_h

#include <stdlib.h>

template <typename T>
class MyVector {
    
    
public:
    MyVector<T>() {
        m_data = nullptr;
        m_size = 0;
        m_capacity = 0;
    };
    
    ~MyVector<T>() {
        delete[] m_data;
        m_size = 0;
        m_capacity = 0;
    }
    
    // copy constructor
    MyVector(MyVector & vec) {
        m_size = 0;
        m_capacity = 0;
        size_t tsize = vec.size();
        reallocate(tsize);
        m_size = tsize;
        m_capacity = tsize;
        for (int i = 0; i < tsize; i++) {
            m_data[i] = vec[i];
        }
    }
    
    // operator =
    
    MyVector & operator=(MyVector & vec) {
        if (this != &vec) {
            m_size = 0;
            m_capacity = 0;
            size_t tsize = vec.size();
            reallocate(tsize);
            m_size = tsize;
            m_capacity = tsize;
            for (int i = 0; i < tsize; i++) {
                m_data[i] = vec[i];
            }
        }
        return *this;
    }
    
    T & operator[](size_t idx) {
        return *(m_data+idx);
    }
    
    void push_back(T one) {
        if (m_size == m_capacity) {
            reallocate(2*m_size);
            m_capacity = 2 * m_size;
        }
        m_data[m_size] = one;
        m_size++;
    };
    
private:
    
    void reallocate(size_t newcap) {
        T * newdata = (T*)malloc(sizeof(T) * newcap);
        for (size_t i = 0; i < m_size; i++) {
            *(newdata + i) = *(m_data+i);
        }
        if (m_size>0) delete[] m_data;

        m_data = newdata;
    };
    
public:
    
    size_t size() const { return m_size; };
    
    size_t capacity() const { return m_capacity; };
    
private:
    
    size_t m_size;
    size_t m_capacity;
    
    T * m_data;
};


#endif /* MyVector_h */
