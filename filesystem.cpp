#include "FileSystem.h"
#include <iostream>

Node::Node(std::string name) : name(name) {}

FileSystem::FileSystem() {
    root = new Node("/");
}

void FileSystem::createDirectory(const std::string& path) {
    // IMPLEMENT NEXT
}

void FileSystem::display() {
    // IMPLEMENT NEXT
}
