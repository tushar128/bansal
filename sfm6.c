  #include <stdio.h>
    int x = 0;
    int main()
    {
        int i = (f() + g()) | g(); //bitwise or
        int j = g() | (f() + g()); //bitwise or
    }
    int f()
    {
        if (x == 0)
            return x + 1;
        else
            return x - 1;
    }
    int g()
    {
        return x++;
    }
