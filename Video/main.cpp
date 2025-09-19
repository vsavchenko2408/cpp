// Правило нуля
// Правило трьох c++ 11
// конструктор копіювання
// оператор копіювання
// деструктор

// Правило п'яти after C++ 11
// конструктор копіювання
// оператор копіювання
// конструктор переміщення
// оператор переміщення
// деструктор

#include <iostream>
class Data
{
private:
  int *m_data;

public:
  Data() : m_data(nullptr) {}
  Data(int data) : m_data(new int(data)) {}
  Data(const Data &copy) : m_data(new int(*copy.m_data)) { std::cout << __PRETTY_FUNCTION__ << std::endl; } // copy constr
  Data &operator=(const Data &copy)                                                                         // copy operator
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this != &copy)
    {
      delete m_data;
      m_data = new int(*copy.m_data);
    }
    return *this;
  }
  Data(Data &&move) noexcept : m_data(move.m_data) // move constr
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    move.m_data = nullptr;
  }
  Data &operator=(Data &&move) noexcept // move operator
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this != &move)
    {
      delete m_data;
      m_data = move.m_data;
      move.m_data = nullptr;
    }
    return *this;
  }
  int get_data()
  {
    if (m_data)
    {
      return *m_data;
    }
    throw std::runtime_error("Data is null!");
  }
  ~Data() // destructor
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    delete m_data;
  }
};
int main()
{
  try
  {
    Data a(15);
    Data b(a);
    Data c(std::move(a));
    c.get_data();
  }
  catch (const std::exception &ex)
  {
    std::cerr << ex.what() << "Error!" << std::endl;
  }
  return 0;
}
