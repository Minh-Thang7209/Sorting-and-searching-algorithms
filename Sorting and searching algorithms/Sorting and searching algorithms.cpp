#include <iostream>


int main()
{
    //1
    /*const int USERS = 3;
    long long PhoneNumbers[USERS] = {380671234567, 380682345678, 38096456789 };
    int HomePhoneNumbers[USERS] = {2314567, 2456789, 2789012};
    int choice; 
    do
    {
        std::cout << "Menu for user:\n";
        std::cout << "1 - Sort by phone numbers\n"; 
        std::cout << "2 - Sort by home phone numbers\n";
        std::cout<< "3 - Display a list of users\n";
        std::cout << "Your choice: ";
        std::cin >> choice;
        if (choice == 1)
        {
            for (int i = 0; i < USERS - 1; i++) {
                for (int j = i; j < USERS; j++)
                {
                    if (PhoneNumbers[i] > PhoneNumbers[j]) {
                        long long temp = PhoneNumbers[i];
                        PhoneNumbers[i] = PhoneNumbers[j];
                        PhoneNumbers[j] = temp;

                        int t = PhoneNumbers[i];
                        PhoneNumbers[i] = PhoneNumbers[j];
                        PhoneNumbers[j] = t;
                    }
                }
            }
            std::cout << "Sort by phone numbers" << std::endl;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < USERS - 1; i++) {
                for (int j = i + 1; j < USERS; j++) {
                    if (HomePhoneNumbers[i] > HomePhoneNumbers[j]) {
                        int t = HomePhoneNumbers[i];
                        HomePhoneNumbers[i] = HomePhoneNumbers[j];
                        HomePhoneNumbers[j] = t;

                        long long temp = HomePhoneNumbers[i];
                        HomePhoneNumbers[i] = HomePhoneNumbers[j];
                        HomePhoneNumbers[j] = temp;
                    }
                }
            }
            std::cout << "Sort by home phone numbers" << std::endl;
        }
        else if (choice == 3) {
            std::cout << "\nDisplay a list of users:" << std::endl;
            for (int i = 0; i < USERS; i++) {
                std::cout << i + 1 << ". Phone number: " << PhoneNumbers[i]
                    << " | Home phone number: " << HomePhoneNumbers[i] << std::endl;
            }
            std::cout << std::endl;
        }
        else if (choice == 4) {
            std::cout << "END." << std::endl;
        }
        else {
            std::cout << "Incorrect choice! Try again." << std::endl;
        }

    } while (choice != 4);*/
    //2
    /*const int N = 6;
    int arr[N] = { 5, 1, 4, 2, 8, 3 };
    std::cout << "Initial array: ";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < N - 1; i++) {
        int swaps = 0; 

    for (int j = 0; j < N - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
           int temp = arr[j];
           arr[j] = arr[j + 1];
           arr[j + 1] = temp;

           swaps++;
        }
    }
    if (swaps == 0) {
         break;
    }
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;*/
}