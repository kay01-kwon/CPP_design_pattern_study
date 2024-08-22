#ifndef SCOPED_PTR_HPP
#define SCOPED_PTR_HPP

#include <assert.h>

template <typename T>
class scoped_ptr
{
    public:

    explicit scoped_ptr(T* ptr = nullptr): ptr_(ptr){};

    ~scoped_ptr()
    {
        delete ptr_;
    }

    T* operator->()
    {
        assert(ptr_ != nullptr);
        return ptr_;
    }

    private:

    T* ptr_;
};



#endif