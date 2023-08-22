#include "LoadFile.h"

bool LoadFile::LoadFromFile(const std::string& filePath, std::function<void(std::ifstream&)> processFileStream) {
    std::ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        return false;
    }

    processFileStream(inputFile);

    inputFile.close();
    return true;
}