#include"counter.h"
#include <iostream>
int main(int argc, char *argv[])
{
    Counter a, b;
    QObject::connect(&a, &Counter::valueChanged,
                     &b, &Counter::setValue);

    a.setValue(12); // a.value() == 12, b.value() == 12
    b.setValue(48); // a.value() == 12, b.value() == 48

    return 0;
}