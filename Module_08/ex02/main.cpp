

#include "MutantStack.hpp"

void p()
{
    system("leaks MutantStack");
}

int main()
{
    // atexit(p);

    MutantStack<int> ds;
    MutantStack<int> ls(ds);

    ds.push(10);
    ds.push(20);
    ds.push(30);
    ds.push(40);

    // ls(ds);
    ls = ds;
    return 0;
}