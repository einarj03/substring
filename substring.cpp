#include "substring.h"
using namespace std;

int substring_position(const char *substr, const char *str, int index) {
    if (is_prefix(substr, str))
        return index;

    if (str[0] == '\0')
        return -1;

    return substring_position(substr, str+1, index+1);
}

bool is_prefix(const char *substr, const char *str) {
    if (substr[0] == '\0')
        return true;

    if (str[0] == '\0' || substr[0] != str[0])
        return false;
    
    return is_prefix(substr+1, str+1);
}