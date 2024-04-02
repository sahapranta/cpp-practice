#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    std::vector<int> nums(2);
    nums[0] = 10;
    nums[1] = 23;
    nums.push_back(30);

    std::cout << "Last index: " << nums[nums.size() - 1] << "\n";

    std::string sentence = "This is a random string";

    std::vector<std::string> words;
    std::stringstream ss(sentence);
    std::string str;
    char cSpace = ' ';

    while (getline(ss, str, cSpace))
    {
        words.push_back(str);
    }

    std::stringstream ssr;

    for (int i = 0; i < words.size(); i++)
    {
        std::cout << words[i] << "\n";
        ssr << words[i];
        if (i != words.size() - 1)
        {
            ssr << " ";
        }
    }

    std::cout << ssr.str() << "\n";

    return 0;
}
