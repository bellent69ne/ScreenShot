#include "HeadShot.hpp"
#include <random>

HeadShot::HeadShot(): m_strScreenshotName("HelloWorld.png"),
                      m_strCommand("import ~/Pictures/")
{
}

void HeadShot::FuckShot() {
    std::random_device seed;
    std::mt19937 randomSeederIThink(seed());
    std::uniform_int_distribution<> doNotKnowWhatIsThis(63, 122);

    const auto numberOfChars(7);
    std::string additionToScreenName("");
    for(auto iii(0); iii < numberOfChars; ++iii) {
        auto character(static_cast<char>(doNotKnowWhatIsThis(
                                        randomSeederIThink)));
        additionToScreenName += character;
    }

    std::size_t locationToInsert(m_strScreenshotName.find('.'));

    m_strScreenshotName.insert(locationToInsert, additionToScreenName);

    system((m_strCommand + m_strScreenshotName).c_str());
}
