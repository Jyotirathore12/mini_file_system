#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <string>
#include <unordered_map>

class Node {
public:
    std::string name;
    std::unordered_map<std::string, Node*> children;

    Node(std::string name);
};

class FileSystem {
private:
    Node* root;

public:
    FileSystem();
    void createDirectory(const std::string& path);
    void display();
};

#endif
