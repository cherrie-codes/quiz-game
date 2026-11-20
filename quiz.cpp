#include <iostream>

int main(){
    
    std::string questions[] = {
        "1. Who invented C programming language?",
        "2. Which is used to print output in C++?",
        "3. Which symbol is for modulus operator?",
        "4. Which loop executes atleast once?",
        "5. Index of first element in an array is ?",
        "6. Which header file is required for sqrt?",
        "7. Which data type stores single character?",
        "8. Which statement breaks the loop?",
        "9. correct syntax for a pointer is?",
        "10. Size of bool in C++?"
    };

    std::string options[][4] = {{"A. Dennis Ritchie", "B. Ken thompson", "C. George thomas", "D. Goldstein"},
    {"A. cin", "B. cout", "C. printf", "D. scanf"},
    {"A. ?", "B. /", "C. *", "D. %"},
    {"A. for", "B. do while", "C. while", "D. goto"},
    {"A. 1", "B. 7", "C. 0", "D. -1"},
    {"A. math.h", "B. string,h", "C. lit.h", "D. stdio.h"},
    {"A. float", "B. char", "C. int", "D. array"},
    {"A. continue", "B. finish", "C. switch", "D. break"},
    {"A. int p*", "B. int *p", "C. pointer int p", "D. int **p"},
    {"A. 1 byte", "B. 4 byte", "C. 8 byte", "D. 16 byte"},
    };

    char answers[] = {'A','C','D','B','C','A','B','D','B','A'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "------------------------------------------------\n";
        std::cout << questions[i] << '\n';
        std::cout << "------------------------------------------------\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answers[i]){
            std::cout << "CORRECT!!\n";
            score++;
        }
        else {
            std::cout << "WRONG :(\n";
            std::cout << "Answer is : " << answers[i] << '\n';
        }
    }

    std::cout << "------------------------------------------------\n";
    std::cout <<"                    RESULTS                      \n";
    std::cout << "------------------------------------------------\n";
    std::cout << "Correct guesses : " << score << '\n';
    std::cout << " Total no. of questions : " << size << '\n';
    std::cout << "SCORE : " << (score/(double)size)*100 << "%";
    
    return 0;
}