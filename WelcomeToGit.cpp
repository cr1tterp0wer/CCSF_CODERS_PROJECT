/*
** Compile this with `g++ WelcomeToGit.cpp -o welcome`
** then, execute it with `./welcome`
*/

#include <iostream>

int main(int argc, char *argv[])
{
    std::string msg = "Welcome to Git";

    for(int loop = 0; loop < 50; loop++)
    {
        for(int i = 0; i < msg.length(); i++)
        {
            for(int j = 0; j < i; j++)
                std::cout << ' ';
            std::cout << msg.substr(i, 1) << std::endl;
        }
        for(int i = msg.length(); i >= 0; i--)
        {
            int k = 1;
            for(int j = 0; j < i; j++)
                std::cout << ' ';
            std::cout << msg.substr(i, k) << std::endl;
        }
    }

    return 0;
}
