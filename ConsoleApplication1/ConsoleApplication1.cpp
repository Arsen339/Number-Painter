#define _CRT_SECURE_NO_WARNINGS //for using ctrcpy
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#define M 80



using namespace std;


int line_is_num(char* q, int length) {
    /*Checking if the line is num*/
    for (int i = 0; q[i] != 0; i++)
    {
        if (isdigit(q[i]) == 0) {


            return 0;
        }
        else {
            return 1;
        }
    }
}
int line_size(int length){
    /*Checks size of line*/
    if (length < 1 or length > 10) {
        cout << length << endl;
        return 0;
       
    }
    else {
        return 1;
    }

    }
int num_size(int amount) {
    /*checks num size*/
    if (amount < 6 or amount > 9) {
        return 0;
    }
    else {
        return 1;
    }
}

// array processing funcs
void reload_mass(char** mass, int mass_size) {
    /* Rewrites the array cells to empty spaces*/
    for (int i = 0; i < mass_size; i++) {
        {
            for (int j = 0; j < mass_size; j++) {
                mass[i][j] = ' ';
            }
        }

    }




}
void print_mass(char** mass, int mass_size) {
    /*Prints the array*/
    for (int i = 0; i <mass_size; i++) {
        {
            for (int j = 0; j < mass_size; j++) {
                cout << mass[i][j];
            }
            cout << endl;
        }

    }

}

// number painting funcs
void draw_1(int number, char** arr, int arr_size) {
    /*Draws 1 in array*/

    // Drawing a vertical stick
    reload_mass(arr, arr_size);
    int j = arr_size / 2 + 1;
    for (int i = 0; i < arr_size; i++) {
        {
            arr[i][j] = 'o';


        }

    }
    // Drwaing an inclined stick
    for (int i = 0; i < arr_size / 2 + 1; i++)
    {
        arr[i][j] = 'o';
        j--;
    }


    print_mass(arr, arr_size);
    cout << endl;
  

}
void draw_2(int number, char** arr, int arr_size) {
    /*Draws 2 in array*/

    // Draws the lower horizontal stick
    reload_mass(arr, arr_size);
    int i = arr_size - 1;
    for (int j = 0; j < arr_size; j++) {
        {
            arr[i][j] = '*';
        }

    }
    int edge_point = round(0.4 * arr_size);
   
    // Draws  an inclined stick
    int j = 1;
    for (int i = arr_size - 2; i >= edge_point; i--)
    {
        arr[i][j] = '*';
        j++;
    }

    // Draws a point between inclined and upper skicks
    i = edge_point -1;
    j = j - 2;
    int j_edge = j;
    arr[i][j] = '*';

    // Draws upper horizontal stick
    for (int j = j_edge; j > 0; j--)
    {
        arr[i][j] = '*';
        
    }
    arr[i + 1][0] = '*';

   
    print_mass(arr, arr_size);
    cout << endl;
    
}
void draw_3(int number, char** arr, int arr_size) {
    /*Draws 3 in array*/
    reload_mass(arr, arr_size);

    // Draws the lower horizontal stick
    int i = arr_size - 1;
    for (int j = 0; j < arr_size; j++) {
        {
            arr[i][j] = 'o';
        }

    }

    if (arr_size % 2 == 0) {
        // Draws the upper horizontal stick
        i = 0;
        for (int j = 0; j < arr_size - 2; j++) {
            {
                arr[i][j] = 'o';
            }

        }
    }
    else {
        // Draws the upper horizontal stick
        i = 0;
        for (int j = 0; j < arr_size - 1; j++) {
            {
                arr[i][j] = 'o';
            }

        }

    }

    // Draws inclined lines
    int edge_point = round(0.5 * arr_size)-1;
    int j = arr_size - 2;
    for (int i = arr_size - 2; i >= edge_point; i--)
    {
        arr[i][j] = 'o';
        j--;
    }

    j ++;
    
    for (int i = edge_point; i > 0; i--)
    {
        arr[i][j] = 'o';
        j++;
    }

    print_mass(arr, arr_size);
    cout << endl;

}
void draw_4(int number, char** arr, int arr_size) {
    /*Draws 4 in array*/

    // Drawing a vertical stick
    reload_mass(arr, arr_size);
    int j = arr_size  - 1;
    for (int i = 0; i < arr_size; i++) {
        {
            arr[i][j] = 'o';


        }

    }

    int edge_point = round(arr_size / 2) - 1;




    // Drwaing an horizontal stick
    int i = edge_point;
    for (int j = arr_size - 1; j >= arr_size / 2 ; j--)
    {
        arr[i][j] = 'o';
        
    }


    // Drwaing an vertical stick
    j = arr_size / 2 - 1;
    for (int i = edge_point; i >= 0; i--)
    {
        arr[i][j] = 'o';

    }


    print_mass(arr, arr_size);
    cout << endl;


}
void draw_5(int number, char** arr, int arr_size) {
    /*Draws 5 in array*/
    reload_mass(arr, arr_size);



    // Drwaing an horizontal stick
    int i = 0;
    for (int j = arr_size - 1; j >= arr_size / 2 -2; j--)
    {
        arr[i][j] = 'o';

    }

    // Drawing a vertical stick
    int j = arr_size/2 -2;
    for (int i = 0; i < arr_size/2 -1; i++) {
        {
            arr[i][j] = 'o';
        }

    }
    
    // Drwaing an horizontal stick
    i = arr_size / 2 - 1;
    for (int j = arr_size /2 -2; j <= arr_size -2; j++)
    {
        arr[i][j] = 'o';

    }
    
    // Drwaing a vertical stick
    j = arr_size -2;
    for (int i = arr_size /2 -1 ; i <= arr_size - 2; i++)
    {
        arr[i][j] = 'o';

    }
    
    // Drwaing an horizontal stick
    i = arr_size - 1;
    for (int j = arr_size / 2 - 2; j <= arr_size - 2; j++)
    {
        arr[i][j] = 'o';

    }
    
    

   

    print_mass(arr, arr_size);
    cout << endl;


}
void draw_6(int number, char** arr, int arr_size) {
    /*Draws 6 in array*/
    reload_mass(arr, arr_size);



    // Drwaing an horizontal stick
    int i = 0;
    for (int j = 1; j <= round(arr_size / 2) + 1; j++)
    {
        arr[i][j] = 'o';

    }

    // Drawing a vertical stick
    int j = 1;
    for (int i = 0; i < arr_size; i++) {
        {
            arr[i][j] = 'o';
        }

    }

    // Drwaing an horizontal stick
    i = arr_size - 1;
    for (int j = 1; j < arr_size - 1; j++)
    {
        arr[i][j] = 'o';

    }

    // Drwaing a vertical stick
    j = arr_size - 2;
    for (int i = arr_size - 1; i >= arr_size / 2 ; i--)
    {
        arr[i][j] = 'o';

    }

    // Drwaing an horizontal stick
    i = arr_size /2 -1;
    for (int j = arr_size  - 2; j > 1; j--)
    {
        arr[i][j] = 'o';

    }





    print_mass(arr, arr_size);
    cout << endl;


}
void draw_7(int number, char** arr, int arr_size) {
    /*Draws 7 in array*/
    reload_mass(arr, arr_size);

    // Drawing a inclined stick
    
    int j = arr_size  -1 ;
    for (int i = 0; i < arr_size; i++) {
        
            arr[i][j] = 'o';
            j--;
    }
    // Drwaing horizontal stick
    int i = 0;
    for (int j = 0; j < arr_size; j++)
    {
        arr[i][j] = 'o';
        
    }


    print_mass(arr, arr_size);
    cout << endl;


}
void draw_8(int number, char** arr, int arr_size) {
    /*Draws 8 in array*/
    reload_mass(arr, arr_size);

    // Drawing a horizontal line

    int i = 0;
    for (int j = 0; j < arr_size; j++) {

        arr[i][j] = 'o';
  
    }


    // Drawing a horizontal line

    i = arr_size -1;
    for (int j = 0; j < arr_size; j++) {

        arr[i][j] = 'o';

    }


    // Drwaing a vertical stick
    int j = 0;
    for (int i = 0; i < arr_size; i++)
    {
        arr[i][j] = 'o';

    }

    // Drwaing a vertical stick
     j = arr_size -1;
    for (int i = 0; i < arr_size; i++)
    {
        arr[i][j] = 'o';

    }



    // Drawing a horizontal line

    i = arr_size / 2 -1;
    for (int j = 0; j < arr_size; j++) {

        arr[i][j] = 'o';

    }


    print_mass(arr, arr_size);
    cout << endl;


}
void draw_9(int number, char** arr, int arr_size) {
    /*Draws 9 in array*/
    reload_mass(arr, arr_size);

    // Drawing a horizontal line

    int i = 0;
    for (int j = 0; j < arr_size; j++) {

        arr[i][j] = 'o';

    }


    // Drawing a horizontal line

    i = arr_size - 1;
    for (int j = 0; j < arr_size; j++) {

        arr[i][j] = 'o';

    }


    // Drwaing a vertical stick
    int j = 0;
    for (int i = 0; i < arr_size / 2; i++)
    {
        arr[i][j] = 'o';

    }

    // Drwaing a vertical stick
    j = arr_size - 1;
    for (int i = 0; i < arr_size; i++)
    {
        arr[i][j] = 'o';

    }



    // Drawing a horizontal line

    i = arr_size / 2 - 1;
    for (int j = 0; j < arr_size; j++) {

        arr[i][j] = 'o';

    }


    print_mass(arr, arr_size);
    cout << endl;


}
void draw_0(int number, char** arr, int arr_size) {
    /*Draws 0 in array*/
    reload_mass(arr, arr_size);

    // Drawing a horizontal line

    int i = 0;
for (int j = 0; j < arr_size; j++) {

    arr[i][j] = 'o';

}


// Drawing a horizontal line

i = arr_size - 1;
for (int j = 0; j < arr_size; j++) {

    arr[i][j] = 'o';

}


// Drwaing a vertical stick
int j = 0;
for (int i = 0; i < arr_size; i++)
{
    arr[i][j] = 'o';

}

// Drwaing a vertical stick
j = arr_size - 1;
for (int i = 0; i < arr_size; i++)
{
    arr[i][j] = 'o';

}

print_mass(arr, arr_size);
cout << endl;


}

// number defining func
void def_number(char number, char** arr, int arr_size) {
    /*Inputs the number*/
    switch (number) {
    case '1':
        draw_1(number, arr, arr_size);
        break;
    case '2':
        draw_2(number, arr, arr_size);
        break;
    case '3':
        draw_3(number, arr, arr_size);
        break;
    case '4':
        draw_4(number, arr, arr_size);
        break;
    case '5':
        draw_5(number, arr, arr_size);
        break;
    case '6':
        draw_6(number, arr, arr_size);
        break;
    case '7':
        draw_7(number, arr, arr_size);
        break;
    case '8':
        draw_8(number, arr, arr_size);
        break;
    case '9':
        draw_9(number, arr, arr_size);
        break;
    case '0':
        draw_0(number, arr, arr_size);
        break;
    default:
        cout << "Error! You had to input a number!" << endl;
        break;







    }
}


int main()


{
    string exit_code("0");
    string one("1");
    
    while (exit_code != one) {
        // language set
        setlocale(LC_ALL, "Russian");
        int N;
        cout << "Введите размер цифр (от 6 до 9 включительно)" << endl;
        cin >> N;
        int check_var = num_size(N);
        
        if (check_var == 0){
            cout << "Ошибка! Размер должен быть от 6 до 9 включительно!" << endl;
        continue;
        }
        // creating the matrix
        int size;
        int rows = N;
        int cols = N;
        char** array = new char* [rows];
        for (int i = 0; i < rows; i++) {
            array[i] = new char[cols];
        }
        for (int i = 0; i < rows; i++) {

                for (int j = 0; j < cols; j++) {
                    array[i][j] = ' ';
                }
        }

        // creating the dinamic string
        cout << "Введите строку из цифр, которую надо нарисовать(максимум 10 символов)! " << endl;
        char* din_str;
        char buff[M] = { 'q' };
        //gets_s(buff);
        cin >> buff;
        check_var = line_size(strlen(buff)+1);
        
        if (check_var == 0) {
            cout << "Ошибка!Размер строки должен быть меньше 10 и больше 1!" << endl;
            continue;
        }

        din_str = (char*)malloc(strlen(buff) + 1);
        strcpy(din_str, buff);
        check_var = line_is_num(din_str, strlen(buff) + 1);
        if (check_var == 0) {
            cout << "Ошибка! Строка должна состоять ТОЛЬКО из чисел!" << endl;
            continue;
        }

        for (int i = 0; i < strlen(buff); i++) {
            def_number(din_str[i], array, N);
        }



        // cleaning the memory
        for (int i = 0; i < rows; i++) {
            delete array[i];
        }
        delete[] array;
        free(din_str);

           
        
        cout << " Чтобы выйти из программы, введите 1, чтобы продолжить - любое число" << endl;
        cin >> exit_code;

    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
