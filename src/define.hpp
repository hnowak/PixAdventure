#include <map>
#include <string>

struct ScreenResolution
{
    int width;
    int height;
};

std::map<std::string, ScreenResolution> resolution {
    {"VGA", {640, 480}},
    {"SVGA", {800, 600}},
    {"XGA", {1024, 768}},
    {"WXGA", {1280, 720}},
    {"HD", {1366, 768}},
    {"FHD", {1920,1080}},
    {"QHD", {2560,1440}}
};

enum class WindowResolutions {
    HD = 0,
    FHD,
    QHD,
    UHD
};


