#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int choice;
    char code[100000];

    printf("Which type of project do you want?\n");
    printf("1. Calculator\n");
    printf("2. Unit Converter\n");
    printf("3. Library System\n");
    printf("4. Student Management System\n");
    printf("5. Quadratic Equation Solver\n");
    printf("6. Hospital Management System\n");
    printf("7. movie ticket and food managment system\n");
    printf("8. learn c language\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
           strcpy(code, "/* #include <stdio.h>\nint main() {\nchar operator;\ndouble num1, num2;\nprintf(\"Enter an operator (+, -, *, /): \");\nscanf(\"%c\", &operator);\nprintf(\"Enter two numbers: \");\nscanf(\"%lf %lf\", &num1, &num2);\nswitch(operator) {\ncase '+':\nprintf(\"%.2lf + %.2lf = %.2lf\\n\", num1, num2, num1 + num2);\nbreak;\ncase '-':\nprintf(\"%.2lf - %.2lf = %.2lf\\n\", num1, num2, num1 - num2);\nbreak;\ncase '*':\nprintf(\"%.2lf * %.2lf = %.2lf\\n\", num1, num2, num1 * num2);\nbreak;\ncase '/':\nif (num2 == 0) {\nprintf(\"Error: division by zero\\n\");\n} else {\nprintf(\"%.2lf / %.2lf = %.2lf\\n\", num1, num2, num1 / num2);\n}\nbreak;\ndefault:\nprintf(\"Error: invalid operator\");\nbreak;\n}\nreturn 0;\n}\n*/");

            break;
        case 2:
            strcpy(code, "/* #include <stdio.h>\nint main() {\nfloat temp, converted;\nint option;\nprintf(\"Enter the temperature you want to convert: \");\nscanf(\"%f\", &temp);\nprintf(\"Select an option:\\n\");\nprintf(\"1. Convert from Celsius to Fahrenheit.\\n\");\nprintf(\"2. Convert from Fahrenheit to Celsius.\\n\");\nscanf(\"%d\", &option);\nswitch (option) {\ncase 1:\nconverted = (temp * 9/5) + 32;\nprintf(\"%.2f Celsius is equal to %.2f Fahrenheit.\", temp, converted);\nbreak;\ncase 2:\nconverted = (temp - 32) * 5/9;\nprintf(\"%.2f Fahrenheit is equal to %.2f Celsius.\", temp, converted);\nbreak;\ndefault:\nprintf(\"Invalid option selected.\");\nbreak;\n}\nreturn 0;\n}\n*/");

            break;
        case 3:
           char code[] = "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n#define MAX_BOOKS 100\n#define MAX_TITLE_LEN 50\n#define MAX_AUTHOR_LEN 30\n#define MAX_ISBN_LEN 13\ntypedef struct {\nchar title[MAX_TITLE_LEN];\nchar author[MAX_AUTHOR_LEN];\nchar isbn[MAX_ISBN_LEN];\nint is_available;\n} Book;\nBook library[MAX_BOOKS];\nint num_books = 0;\nvoid add_book() {\nif (num_books >= MAX_BOOKS) {\nprintf(\"Error: Library is full\\n\");\nreturn;\n}\nBook new_book;\nprintf(\"Enter book title: \");\nfgets(new_book.title, MAX_TITLE_LEN, stdin);\nprintf(\"Enter book author: \");\nfgets(new_book.author, MAX_AUTHOR_LEN, stdin);\nprintf(\"Enter book ISBN: \");\nfgets(new_book.isbn, MAX_ISBN_LEN, stdin);\nnew_book.is_available = 1;\nlibrary[num_books++] = new_book;\nprintf(\"Book added successfully\\n\");\n}\nvoid display_books() {\nprintf(\"Title\\t\\tAuthor\\t\\tISBN\\t\\tAvailability\\n\");\nfor (int i = 0; i < num_books; i++) {\nprintf(\"%s\\t%s\\t%s\\t%s\\n\", library[i].title, library[i].author, library[i].isbn, library[i].is_available ? \"Available\" : \"Not available\");\n}\n}\nvoid search_book() {\nchar search_str[MAX_TITLE_LEN];\nprintf(\"Enter book title to search: \");\nfgets(search_str, MAX_TITLE_LEN, stdin);\nint found = 0;\nfor (int i = 0; i < num_books; i++) {\nif (strstr(library[i].title, search_str) != NULL) {\nprintf(\"Book found:\\nTitle: %sAuthor: %sISBN: %sAvailability: %s\\n\", library[i].title, library[i].author, library[i].isbn, library[i].is_available ? \"Available\" : \"Not available\");\nfound = 1;\n}\n}\nif (!found) {\nprintf(\"Book not found\\n\");\n}\n}\nint main() {\nint choice;\ndo {\nprintf(\"\\n1. Add book\\n2. Display all books\\n3. Search book\\n4. Exit\\nEnter your choice: \");\nscanf(\"%d\", &choice);\nswitch (choice) {\ncase 1:\nadd_book();\nbreak;\ncase 2:\ndisplay_books();\nbreak;\ncase 3:\nsearch_book();\nbreak;\ncase 4:\nprintf(\"Exiting program\\n\");\nbreak;\ndefault:\nprintf(\"Invalid choice\\n\");\nbreak;\n}\n} while (choice != 4);\nreturn 0;\n}";

            printf("%s", code);
            break;
        case 4:
            
             printf("/*#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n#define MAX_STUDENTS 100\ntypedef struct {\nchar name[50];\nint age;\nfloat grade;\n} Student;\nStudent students[MAX_STUDENTS];\nint num_students = 0;\nvoid add_student() {\nif (num_students >= MAX_STUDENTS) {\nprintf(\"Error: Maximum number of students reached\\n\");\nreturn;\n}\nStudent new_student;\nprintf(\"Enter student name: \");\nfgets(new_student.name, 50, stdin);\nprintf(\"Enter student age: \");\nscanf(\"%%d\", &new_student.age);\nprintf(\"Enter student grade: \");\nscanf(\"%%f\", &new_student.grade);\nstudents[num_students++] = new_student;\nprintf(\"Student added successfully\\n\");\n}\nvoid display_students() {\nprintf(\"Name\\t\\tAge\\tGrade\\n\");\nfor (int i = 0; i < num_students; i++) {\nprintf(\"%%s\\t%%d\\t%%.2f\\n\", students[i].name, students[i].age, students[i].grade);\n}\n}\nvoid search_student() {\nchar search_str[50];\nprintf(\"Enter student name to search: \");\nfgets(search_str, 50, stdin);\nint found = 0;\nfor (int i = 0; i < num_students; i++) {\nif (strstr(students[i].name, search_str) != NULL) {\nprintf(\"Student found:\\nName: %%sAge: %%dGrade: %%f\\n\", students[i].name, students[i].age, students[i].grade);\nfound = 1;\n}\n}\nif (!found) {\nprintf(\"Student not found\\n\");\n}\n}\nint main() {\nint choice;\ndo {\nprintf(\"\\n1. Add student\\n2. Display all students\\n3. Search student\\n4. Exit\\n\");\nprintf(\"Enter your choice: \");\nscanf(\"%%d\", &choice);\ngetchar(); // consume newline character left in buffer\nswitch (choice) {\ncase 1:\nadd_student();\nbreak;\ncase 2:\ndisplay_students();\nbreak;\ncase 3:\nsearch_student();\nbreak;\ncase 4:\nprintf(\"Exiting program...\\n\");\nbreak;\ndefault:\nprintf(\"Invalid choice\\n\");\nbreak;\n}\n} while (choice != 4);\nreturn 0;\n}\n");
             break;
        case 5:
             printf("#include <stdio.h>\n#include <math.h>\n\nint main() {\n double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;\n    printf(\"Enter coefficients a, b and c: \");\n    scanf(\"%lf %lf %lf\", &a, &b, &c);\n    discriminant = b * b - 4 * a * c;\n    // real and different roots\n    if (discriminant > 0) {\n        root1 = (-b + sqrt(discriminant)) / (2 * a);\n        root2 = (-b - sqrt(discriminant)) / (2 * a);\n        printf(\"Root1 = %.2lf and Root2 = %.2lf\", root1, root2);\n    }\n    // real and equal roots\n    else if (discriminant == 0) {\n        root1 = root2 = -b / (2 * a);\n        printf(\"Root1 = Root2 = %.2lf\", root1);\n    }\n    // complex roots\n    else {\n        realPart = -b / (2 * a);\n        imaginaryPart = sqrt(-discriminant) / (2 * a);\n        printf(\"Root1 = %.2lf + %.2lfi and Root2 = %.2lf - %.2lfi\", realPart, imaginaryPart, realPart, imaginaryPart);\n    }\n    return 0;\n}");
            break;
        case 6:
             printf("/* #include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n#define MAX_PATIENTS 100\n#define MAX_NAME_LEN 50\n#define MAX_ADDRESS_LEN 100\n#define MAX_SYMPTOMS_LEN 200\ntypedef struct {\nchar name[MAX_NAME_LEN];\nchar address[MAX_ADDRESS_LEN];\nint age;\nchar gender;\nchar symptoms[MAX_SYMPTOMS_LEN];\n} Patient;\nPatient patients[MAX_PATIENTS];\nint num_patients = 0;\nvoid add_patient() {\nif (num_patients >= MAX_PATIENTS) {\nprintf(\"Error: Hospital is full\\n\");\nreturn;\n}\nPatient new_patient;\nprintf(\"Enter patient name: \");\nfgets(new_patient.name, MAX_NAME_LEN, stdin);\nprintf(\"Enter patient address: \");\nfgets(new_patient.address, MAX_ADDRESS_LEN, stdin);\nprintf(\"Enter patient age: \");\nscanf(\"%d\", &new_patient.age);\nprintf(\"Enter patient gender (M/F): \");\nscanf(\" %c\", &new_patient.gender);\nprintf(\"Enter patient symptoms: \");\nfgets(new_patient.symptoms, MAX_SYMPTOMS_LEN, stdin);\npatients[num_patients++] = new_patient;\nprintf(\"Patient added successfully\\n\");\n}\nvoid display_patients() {\nprintf(\"Name\\t\\tAge\\tGender\\tAddress\\t\\t\\tSymptoms\\n\");\nfor (int i = 0; i < num_patients; i++) {\nprintf(\"%s\\t%d\\t%c\\t%s\\t%s\\n\", patients[i].name, patients[i].age, patients[i].gender, patients[i].address, patients[i].symptoms);\n}\n}\nvoid search_patient() {\nchar search_str[MAX_NAME_LEN];\nprintf(\"Enter patient name to search: \");\nfgets(search_str, MAX_NAME_LEN, stdin);\nint found = 0;\nfor (int i = 0; i < num_patients; i++) {\nif (strstr(patients[i].name, search_str) != NULL) {\nprintf(\"Patient found:\\nName: %sAge: %dGender: %cAddress: %sSymptoms: %s\\n\", patients[i].name, patients[i].age, patients[i].gender, patients[i].address, patients[i].symptoms);\nfound = 1;\n}\n}\nif (!found) {\nprintf(\"Patient not found...\\n\");\n}\n}\n*/"); 
            break;


        case 7:
              printf("#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n\nint ticketPrice = 10;\nint popcornPrice = 5;\nint sodaPrice = 3;\nint ticketsSold = 0;\nint popcornSold = 0;\nint sodaSold = 0;\nint totalRevenue = 0;\n\nvoid displayMenu() {\n    printf(\"Welcome to the Movie Theater!\\n1. Buy movie ticket\\n2. Buy popcorn\\n3. Buy soda\\n4. View sales report\\n5. Exit\\n\");\n}\n\nvoid buyTicket() {\n    int quantity;\n    printf(\"Movie ticket price is $%d\\nHow many tickets do you want to buy? \", ticketPrice);\n    scanf(\"%d\", &quantity);\n    if (quantity <= 0) {\n        printf(\"Invalid quantity!\\n\");\n        return;\n    }\n    ticketsSold += quantity;\n    totalRevenue += quantity * ticketPrice;\n    printf(\"You bought %d tickets for a total of $%d\\n\", quantity, quantity * ticketPrice);\n}\n\nvoid buyPopcorn() {\n    int quantity;\n    printf(\"Popcorn price is $%d\\nHow many popcorns do you want to buy? \", popcornPrice);\n    scanf(\"%d\", &quantity);\n    if (quantity <= 0) {\n        printf(\"Invalid quantity!\\n\");\n        return;\n    }\n    popcornSold += quantity;\n    totalRevenue += quantity * popcornPrice;\n    printf(\"You bought %d popcorns for a total of $%d\\n\", quantity, quantity * popcornPrice);\n}\n\nvoid buySoda() {\n    int quantity;\n    printf(\"Soda price is $%d\\nHow many sodas do you want to buy? \", sodaPrice);\n    scanf(\"%d\", &quantity);\n    if (quantity <= 0) {\n        printf(\"Invalid quantity!\\n\");\n        return;\n    }\n    sodaSold += quantity;\n    totalRevenue += quantity * sodaPrice;\n    printf(\"You bought %d sodas for a total of $%d\\n\", quantity, quantity * sodaPrice);\n}\n\nvoid viewSalesReport() {\n    printf(\"Tickets sold: %d\\nPopcorn sold: %d\\nSoda sold: %d\\nTotal revenue: $%d\\n\", ticketsSold, popcornSold, sodaSold, totalRevenue);\n}\n\nint main() {\n    int choice;\n    while (1) {\n        displayMenu();\n        printf(\"Enter your choice: \");\n        scanf(\"%d\", &choice);\n        switch (choice) {\n            case 1:\n                buyTicket();\n                break;\n            case 2:\n                buyPopcorn();\n                break;\n            case 3:\n                buySoda();\n                break;\n            case 4:\n                viewSalesReport();\n                break;\n            case 5:\n                printf(\"Thank you for visiting the Movie Theater!\\n\");\n                exit(0);\n            default:\n                printf(\"Invalid choice!\\n\");\n                break;\n        }\n    }\n    return 0;\n}");
            break;

        case 8:
            printf("1.C Flow Control\n");
            printf("2.C Functions\n");
            printf("3.C Arrays\n");
            printf("4.C Pointers\n");
            printf("5.C Strings\n");
            printf("6.Structure And Union\n");
            printf("7.C Files\n");

             int too;
             scanf("%d", &too);
             switch (too)
             {
        case 1:
             printf("C Flow Control is a set of statements and constructs in the C programming language that allows programmers to control the flow of program execution. These statements include if-else statements, switch statements, loops (such as for loops, while loops, and do-while loops), and jump statements (such as break, continue, and goto). \n");
              break;
        case 2:
             printf("C Functions are blocks of code that perform a specific task.\nThey are called by name and can take inputs as arguments and optionally return a value.\nFunctions allow code reusability and help in modular programming.\n");
              break;
         case 3:
              printf("In C programming, an array is a collection of elements of the same data type, declared in the following format:\n\n<datatype> <array_name>[<size_of_array>];\n");

              break;
         case 4:
               printf("In C programming, a pointer is a variable that stores the memory address of another variable.\nPointers are used to manipulate memory and create more efficient code by passing memory addresses instead of large data structures.\nThey can be used to dynamically allocate and deallocate memory, as well as access data structures such as arrays and structures.\n");
                 break;
         case 5:
                printf("C strings are arrays of characters terminated by a null character, denoted by the '\\0' character.\n");

                break;
         case 6:
               printf("Structure And Union are used to group different types of variables under a single name.\n");
              break;
         case 7:
             printf("C Files are used to read from and write to files in C programming. They allow you to store and access data outside of your program's memory space. File operations include opening, reading, writing, and closing files. These operations can be performed on text files, binary files, or both. \n");
              break;
        default:
              printf("Invalid choice! Please enter a number between 1 and 7.\n");
              break;

             }
             

    }

    printf("Code:\n%s\n", code);
    printf("thanks for using program");

    return 0;
}
