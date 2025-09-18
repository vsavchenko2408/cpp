#include <iostream>
#include <fstream>

class File
{
    std::fstream m_file;

public:
    File(const std::string &Filename)
    {
        m_file.open(Filename, std::fstream::out);
        if (!m_file.is_open())
        {
            throw std::runtime_error("File dont open!");
        }
        std::cout << "File is open!" << std::endl;
    }
    void write(const std::string &text)
    {
        m_file << text << "\n";
    }
    ~File()
    {
        if (m_file.is_open())
        {
            m_file.close();
        }
    }
};
int main()
{
    try
    {
        File f("My File.txt");
        f.write("This automatic text");
        f.write("Files must be close automatic!");
    }
    catch (std::exception &err)
    {
        std::cerr << "Error!" << err.what();
    }
    std::cout << "End program" << std::endl;
    return 0;
}