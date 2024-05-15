class Complex
{
  public:

Complex();
Complex(int _real);
Complex(int _real, int _imag);

Complex operator+(Complex& obj);
Complex operator-(Complex& obj);
Complex operator*(Complex& obj);
Complex operator/(Complex& obj);

  private:
  int real;
  int imag;
};