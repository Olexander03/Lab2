#ifndef PAIR_H
#define PAIR_H

template <typename A, typename B>
class Pair
{
private:
    A key;
    B value;

public:
    Pair()
        : key()
        , value()
    {
    }

    Pair(A fst, B snd)
        : key{ std::move(fst) }
        , value{ std::move(snd) }
    {
    }

    A getKey() const
    {
        return key;
    }

    B getValue() const
    {
        return value;
    }

    Pair<A, B>& operator = (const Pair<A, B>& other)
    
    {
        key = other.getKey();
        value = other.getValue();
        return *this;
    }

};

#endif