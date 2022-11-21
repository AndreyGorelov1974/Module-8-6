/*Задание 6. Маятник
Что нужно сделать
Известно, что амплитуда качающегося маятника с каждым разом затухает на 8,4% от амплитуды прошлого колебания. 
Если качнуть маятник, он, строго говоря, никогда не остановится: его амплитуда будет уменьшаться до тех пор, пока мы не сочтём такой маятник остановившимся.
Напишите программу, определяющую, сколько раз качнётся маятник, прежде чем он, по нашему мнению, остановится. 
Программа получает на вход начальную амплитуду колебания в сантиметрах и конечную амплитуду его колебаний, которая считается остановкой маятника. Обеспечьте контроль ввода.

Рекомендации по выполнению
Считаем, что затухание происходит на каждое качание.

Что оценивается
Программа правильно считает количество затуханий.
Цикл не бесконечный.*/

#include <cmath>
#include <iostream>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //затухание маятника
    float attenuation = 0.084f;

    std::cout << "Введите начальную амплитуду маятника в сантиметрах: ";
    float startAmplitude;
    std::cin >> startAmplitude;
    while (startAmplitude <= 0) {
        std::cout << "Амплитуда должна быть больше 0. Введите снова: ";
        std::cin >> startAmplitude;
    }

    std::cout << "Введите конечную амплитуду маятника в сантиметрах: ";
    float stopAmplitude;
    std::cin >> stopAmplitude;
    while (stopAmplitude <= 0) {
        std::cout << "Амплитуда должна быть больше 0. Введите снова: ";
        std::cin >> stopAmplitude;
    }
       
    float currentAmplitude = startAmplitude;
    int numberSwings = 0;

    while (currentAmplitude > stopAmplitude) {
        currentAmplitude *= attenuation;
        std::cout << currentAmplitude << std::endl;
        numberSwings++;
    }

    std::cout << "До остановки маятник качнётся: " << numberSwings << "раз.";
}