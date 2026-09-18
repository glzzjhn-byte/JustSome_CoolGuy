#define FMT_HEADER_ONLY

#include <iostream>
#include <fmt/core.h>
#include <fmt/color.h>
#include "JustSome_CoolGuy/version.h"

int main() {
    fmt::print(fg(fmt::color::cyan) | fmt::emphasis::bold, "Version: {}\n", JustSome_CoolGuy::kVersion);
    fmt::print(fg(fmt::color::lawn_green), "Hello, {}! Dependencies are working.\n", "Player");

    return 0;
}