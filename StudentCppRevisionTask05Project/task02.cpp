#include "tasks.h"

/*	Task 02. Palindrome Number (симметричное число или число-палиндром)
*
*	Дано четырехзначное число или меньше. Определите, является ли оно палиндромом.
*
*   Примечание
*   Отрицательное число физически не является палиндромом.
*   Не забудьте про "защиту от дурака": диапазон корректных значений должен быть от 0 до 9999
* 
*	Формат входных данных [input]
*	Функция принимает любое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Функция возвращает соответствующее значение булевского типа.
*
*	[ input 1]: 2002
*	[output 1]: true
*
*	[ input 2]: 2008
*	[output 2]: false
*
*	[ input 3]: 2
*	[output 3]: true
*
*	[ input 4]: -8
*	[output 4]: false
*
*	[ input 5]: 55255
*	[output 5]: false
*/

bool task02(int number) {
    if (number > -1 && number < 10) {
        return true;
    }
    else if(number<0 || number>9999){
        return false;
    }




    if (number < 100&&number>9) {
        int a = number % 10;
        int b = number / 10;
        if (a == b) {
            return true;
        }
    }

    if (number < 1000 && number>99) { //929
        int a = number % 10;
        int b = number / 100;
        if (a == b) {
            return true;
        }
    }

    if (number > 999 && number < 10000) {  // 8118
        int a = number % 10;
        int b = (number / 10)%10;
        int ab = a + b;
        int a1 = number / 1000;
        int b1 = (number / 100) % 10;
        int ab1 = a1 + b1;
        if (ab == ab1) {
            return true;
        }
    }




    return false;
}