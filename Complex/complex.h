class Complex
{
  public:

//Complex(){};
Complex();
Complex(int _real);
Complex(int _real, int _imag);
Complex(Complex& obj);
~Complex();

void show() const;

Complex operator+(Complex& obj);
Complex operator-(Complex& obj);
Complex operator*(Complex& obj);
Complex operator/(Complex& obj);
Complex operator=(Complex& obj);
  private:
  int real;
  int imag;
};