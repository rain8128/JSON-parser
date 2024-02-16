#include <stdint.h>

enum {
    JSON_NULL = 0,
    JSON_BOOL,
    JSON_STRING,
    JSON_INTEGER,
    JSON_REAL,
    JSON_ARRAY,
    JSON_OBJECT
};

typedef struct json_array json_array;
typedef struct json_object json_object;

typedef struct {
    int type;
    union value{
        int64_t num_int;
        double num_real;
        char* string;
        json_array* array;
        json_object* object;
    };
};