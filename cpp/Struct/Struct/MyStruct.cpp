
struct MyStruct
{
    int a;
    int b;
    void get(int inp_a, int inp_b)
    {
        a = inp_a;
        b = inp_b;
    }
    void show()
    {
        std::cout << "A = " << a << std::endl;
        std::cout << "B = " << b << std::endl;
    }

};