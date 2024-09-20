#include <iostream>
#include <string>
#include <vector>


using std::cout;
using std::endl;

using std::string;
using std::vector;

class Logger{

    public:

    // Retrieve the single instance of the object
    // created, and we will enforce only one instance
    // objects get created in our code logic

    static Logger* getInstance()
    {
        if(s_logger_instance == nullptr)
        {
            s_logger_instance = new Logger();
        }
        return s_logger_instance;
    }

    void printLogMessages()
    {
        cout << "Accessing the messages: "<< endl;

        for(auto& message : m_messages)
        {
            cout << message << endl;
        }
    }

    void addMessage(const string& message)
    {

        m_messages.push_back(message);

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

    vector<string> m_messages;

};

// Initialize the static logger instance
Logger* Logger::s_logger_instance = nullptr;

int main()
{
    Logger* logger  = Logger::getInstance();
    Logger::getInstance()->addMessage("First message");
    logger->addMessage("Second message");

    logger->printLogMessages();


    return 0;
}