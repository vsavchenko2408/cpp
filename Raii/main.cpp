#include <iostream>
#include <fstream>
class File
{
    std::fstream m_file;
    std::string m_filename;

public:
    File(const std::string &filename) : m_filename(filename)
    {
        m_file.open(m_filename, std::fstream::out);
        if (!m_file.is_open())
        {
            throw std::runtime_error("File is not open!");
        }
    }
    void write(const std::string &text)
    {
        if (m_file.is_open())
        {
            m_file << text;
            std::cout << "Text is write!" << std::endl;
        }
        else
        {
            throw std::runtime_error("File not write!");
        }
    }
    File(const File &) = delete;
    File &operator=(const File &) = delete;
    File(File &&moved) noexcept : m_file(std::move(moved.m_file)), m_filename(std::move(moved.m_filename))
    {
    }
    File &operator=(File &&moved) noexcept
    {
        if (this != &moved)
        {
            if (m_file.is_open())
            {
                m_file.close();
            }
            m_file = std::move(moved.m_file);
            m_filename = std::move(moved.m_filename);
        }
        return *this;
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
        File f("MyFile.txt");
        f.write("Some text\n");
    }
    catch (const std::exception &ex)
    {
        std::cerr << "Error! " << ex.what() << std::endl;
    }
}