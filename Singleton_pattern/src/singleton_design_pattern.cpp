#include <iostream>

using std::cout;
using std::endl;

class Logger{

    public:

    // Retrieve the single instance of the object
    // created, and we will enforce only one instance
    // objects get created in our code logic


    // private:
    
    Logger()
    {
        cout << "Logger was created " << numberOfLoggers << endl;
        numberOfLoggers++;
    }

    ~Logger()
    {
        cout << "Logger was destroyed" << endl;
    }

    static int numberOfLoggers;

};

// Initialize the static number of loggers
int Logger::numberOfLoggers = 0;

int main()
{
    Logger logger1;
    Logger logger2;
    Logger logger3;
    Logger logger4;
    


    return 0;
}