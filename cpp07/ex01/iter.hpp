#pragma once

template <typename T, typename X>
void iter(T* array, const unsigned int len, X function)
{
    unsigned int i = 0;

    while (i < len)
    {
        function(array[i]);
        i++;
    }
}
// template <typename T>
// void iter(const T* array, const unsigned int len, void (*function)(const T&))
// {
//     unsigned int i = 0;
//     while (i < len)
//     {
//         function(array[i]);
//         i++;
//     }
// }