#include <iostream>

int main()
{
    std::string questions[] = {"1. What year was the C++ created?",
                               "2. Who invented C++?",
                               "3. What is the predecessor of C++?",
                               "4. Is the Earth flat?"};

    std::string options[][4] = {
        {"A. 1969", "B. 1979", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
        {"A. C", "B. Python", "C. C#", "D. B++"},
        {"A. yes", "B. no", "C. sometimes", "D. What's earth"},
    };

    char answers[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "****************************\n";
        std::cout << questions[i] << std::endl;
        std::cout << "****************************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << "  " << options[i][j] << std::endl;
        }
        std::cin >> guess;

        guess = toupper(guess);

        if (guess == answers[i])
        {
            std::cout << "\033[1;32mCORRECT\033[0m\n";
            score++;
        }
        else
        {
            std::cout << "\033[1;31mWRONG\033[0m\n";
            std::cout << "Answer: " << answers[i] << "\n";
        }
    }

    std::cout << "\033[1;33m****************************\n";
    std::cout << "*         RESULTS          *\n";
    std::cout << "****************************\n";
    std::cout << "CORRECT GUESS: " << score << " out of " << size << "\n";
    std::cout << "SCORE        : " << (score / (double)size) * 100 << "% \033[0m\n";

    return 0;
}
