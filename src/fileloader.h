#ifndef __FILELOADER_H_INCL__
#define __FILELOADER_H_INCL__

#include <string>
#include <fstream>

class CFileLoader
{
public:
    /**
     * Loading a file fills the cache array containing the file modified timestamp and the filename
     * 
     * @param filename The name of the file
     * 
     * @return True or false
     */
    bool loadFile(const std::string& filename, bool useCache);
private:
    void cacheFile();
    void saveCache();
private:
    std::ifstream _fs;
};

#endif // __FILELOADER_H_INCL__

