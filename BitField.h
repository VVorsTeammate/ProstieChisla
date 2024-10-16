#include <iostream>
#include <stdint.h>

class BitField {
private:
    size_t _sizeBit;
    uint16_t* _mem;
    size_t _memSize;

    size_t GetMemIndex(size_t n) const;
    uint16_t GetMask(size_t n) const;
public:
    // BitField(){
        
    // }
    BitField(size_t len);
    BitField(const BitField& tmp);
    BitField& operator=(const BitField& tmp);
    
    size_t GetLength() const{ // Получить количество бит
        return _sizeBit;
    }
    void SetBit(size_t n);
    void ClrBit(size_t n); // Настя
    uint8_t GetBit(size_t n) const; // Саша

    uint16_t* GetMem(){
        return _mem;
    }

    BitField operator|(const BitField& tmp); // Карина
    BitField operator&(const BitField& tmp); // Алина
    BitField operator^(const BitField& tmp); // Арина
    bool operator==(const BitField& tmp); // Даша
    BitField operator~(); // Все

    ~BitField(){
        delete [] _mem;
    } // Все
};