#include <iostream>
#include "clip/clip.h"

int main() {
    std::string value;
    while (clip::has(clip::text_format())) {
        clip::get_text(value);
        std::cout << value << std::endl;
    }
    return 0;
}
