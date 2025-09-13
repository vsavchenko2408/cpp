// Правило нуля
// Правило трьох
// Правило п'яти

#include <iostream>
class Data
{
private:
  int *m_data;

public:
  Data() : m_data(new int(0))
  {
  }
  Data(int data) : m_data(new int(data))
  {
  }
  ~Data()
  {
    std::cout << "destructor" << std::endl;
    delete m_data;
  }
  Data(const Data &obj) : m_data(new int(*obj.m_data))
  {
    std::cout << "constr copy" << std::endl;
  }
  Data &operator=(const Data &obj)
  {
    std::cout << "Operator copy" << std::endl;
    if (this != &obj)
    {
      delete m_data;
      m_data = new int(*obj.m_data);
    }

    return *this;
  }

  Data(Data &&obj) noexcept : m_data(obj.m_data)
  {
    std::cout << "Move constr" << std::endl;
    obj.m_data = nullptr;
  }
  Data &operator=(Data &&obj) noexcept
  {
    std::cout << "Move operator" << std::endl;
    if (this != &obj)
    {
      delete m_data;
      m_data = obj.m_data;
      obj.m_data = nullptr;
    }
    return *this;
  }
};
int main()
{
  Data a(15);
  Data b;
  b = std::move(a);

  return 0;
}
