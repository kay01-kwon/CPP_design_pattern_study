#include <iostream>

using std::cout;
using std::endl;

class Logger{

    public:

    // Retrieve the single instance of the object
    // created, and we will enforce only one instance
    // objects get created in our code logic

    static Logger* getInstance()
    {
        return s_logger_instance;
    }

    void printLogMessage()
    {
        cout << "This is a log message " << endl;
    }

    private:
    
    Logger()
    {
        cout << "Logger was created " << endl;
    }

    ~Logger()
    {
        cout << "Logger was destroyed" << endl;
    }

    static Logger* s_logger_instance;

};

// Initialize the static logger instance
Logger* Logger::s_logger_instance = nullptr;

int main()
{
    Logger* logger  = Logger::getInstance();
    logger->printLogMessage();


    return 0;
}