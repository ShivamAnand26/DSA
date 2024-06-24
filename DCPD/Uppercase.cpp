#include <iostream>
#include <cctype>

int main()
{
    char arr[] = "hello world";
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        arr[i] = toupper(arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }

    std::cout << std::endl;

    return 0;
}