#include <core/logger.h>
#include <core/asserts.h>
int main() {
    KFATAL("A test message: %f", 3.13f);
    KERROR("A test message: %f", 3.13f);
    KWARN("A test message: %f", 3.13f);
    KINFO("A test message: %f", 3.13f);
    KDEBUG("A test message: %f", 3.13f);
    KTRACE("A test message: %f", 3.13f);
    KASSERT(1==0);

    return 0;
}