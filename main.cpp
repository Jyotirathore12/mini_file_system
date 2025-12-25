#include "FileSystem.h"

int main() {
    FileSystem fs;
    fs.createDirectory("/home");
    fs.createDirectory("/home/user");
    fs.display();
    return 0;
}
