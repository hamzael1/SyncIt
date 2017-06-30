#include <fstream>
#include <string>

// Quick and Simple Logger for my daemon
class Logger
{
    private:
        Logger();
        static void CheckLogFileIsOpen();
        static std::string GetCurrentDate();
        static std::string GetCurrentTime();
        static std::ofstream s_logfile;
        static const std::string LOG_FILE_NAME ;


    public:
//        static Logger& GetInstance();

        static void LogError(std::string p_msg);

        static void LogInfo(std::string p_msg);
        
        static void CloseLogFile();

        ~ Logger();

};