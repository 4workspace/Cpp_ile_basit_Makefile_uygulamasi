#include <iostream>
#include "kutuphane.hpp"

kutuphane::kutuphane(int sayi)
{
    m_sayi = sayi;
}

void kutuphane::yazdir()
{

    std::cout << "Sayi: " << m_sayi << std::endl;

}
