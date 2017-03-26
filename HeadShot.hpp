#ifndef HEADSHOT_HPP
#define HEADSHOT_HPP

#include <string>

class HeadShot {
private:
    std::string m_strScreenshotName;
    std::string m_strCommand;

public:
    HeadShot();

    void FuckShot();
};

#endif
