#include <iostream>
using namespace std;

int arr[15];
int n; //Masok jumlah data

void InputData()
{
    while (true)
    {
        cout << "masukan jumlah data: ";
        cin >> n;
        
        if (n < 15){
            break;
        }
        else
        {
            cout << "jumlah data maksimal 15" << endl;
        }
    }

    cout << "===================" << endl;
    cout << "masukan data" << endl;
    cout << "===================" << endl;
    cout << endl;


    for (int i = 0; i < n; i++)
    {
        cout << "masukan data ke-" << i + 1 << "=";
        cin >> arr[i];
    }
}

void BubbleSort()
{
    int pass = 1; //Langkah 1 cuy
    do
    {
    
        for (int  j = 0; j <= n - 1 - pass; j++) //Langkah 2 cuy
        {
            if(arr[j] > arr[j + 1]) //Langkah 3 cuy
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    
        pass = pass + 1;
        
    } while (pass <= n - 1); //Langkah 6 cuy
    
}

void DisplayData(){
    cout << endl;
    cout << "===============================" << endl;
    cout << "Data setelah diurutkan" << endl;
    cout << "===============================" << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << "=" << arr[i] << endl;
    }
    
}

int main ()
{
    InputData();
    BubbleSort();
    DisplayData();
    return 0;
}