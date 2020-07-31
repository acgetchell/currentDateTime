#include <iostream>
#include <date/tz.h>

[[nodiscard]] auto currentDateTime()
{
    using namespace date;
    using namespace std::chrono;
    auto time = make_zoned(current_zone(), system_clock::now());
    return format("%Y-%m-%d.%X%Z", time);
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << "The time is " << currentDateTime() << std::endl;
    return 0;
}
