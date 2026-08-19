#include <stdio.h>
#include <stdbool.h> // Required for 'bool', 'true'

// Make sure ALL 4 members are declared here:
struct student_CSE {
    int roll_no;    // 1st element
    char name[20];  // 2nd element
    char symbol;    // 3rd element
    bool status;    // 4th element
};

int main() {
    // Now 4 values match the 4 struct members perfectly!
    struct student_CSE st = {24, "ram", 'A', true};

    printf("roll_no = %d\n", st.roll_no);
    printf("name = %s\n", st.name);
    printf("symbol = %c\n", st.symbol);
    printf("status = %d\n", st.status);

    return 0;
}