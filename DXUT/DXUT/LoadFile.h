#ifndef LOAD_FILE_H
#define LOAD_FILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <functional>

class LoadFile {
protected:
    /** 
        implement in the class you are going to use
    */
     virtual void ProcessFileStream(std::ifstream& fileStream) = 0;
public:
    // Método puramente virtual (abstrato)
    static bool LoadFromFile(const std::string& filePath, std::function<void(std::ifstream&)>);
};
#endif