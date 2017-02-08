DAY 1

Variables and types
    Identifiers
    Fundamental data types
    Declaration of variables
    Initialization of variables
    * Type deduction: auto and decltype
    Introduction to strings

Constants
    Literals
        Integer Numerals
        Floating Point Numerals
        Character and string literals
        Other literals (null, true, false, nullptr)
    Typed constant expressions

Operators
    Assignment operator (=)
    Arithmetic operators ( +, -, *, /, % )
    Compound assignment (+=, etc.)
    Increment and decrement
    Relational and comparison operators
    Logical operators (!, &&, ||)
    Conditional ternary operator
    Comma operator
    Bitwise operators (&, |, ^, ~, <<, >>)
    Explicit type casting operator
    sizeof
    Precedence of operators

Basic Input/Output
    cout, cin
    cerr, clog
    cin and strings
    * stringstream

Statements and flow control
    Selection statements: if and else
    Iteration statements (loops)
        The while loop
        The do-while loop
        The for loop
        * Range-based for loop
    Jump statements
        break
        continue
        goto
    switch

Arrays
    Accessing the values of an array
    Multidimensional arrays
    * Arrays as parameters

Character sequences
    Initialization of null-terminated character sequences
    Strings and null-terminated character sequences


DAY 2

Associativity
    left-to-right (-)
    right-to-left (=)
        = and bool

Ternary operator

Enums
    declare enums
        start with non-1
    scoped and unscoped enums
    enum : type (C++11)

Functions
    signature
    return
    void
    The return value of main
    Arguments passed by value and by reference
        const references
    Inline functions
    Default values in parameters
        More than one arguments
    static variables
    functions with no arguments
        f(void)
    main(int argc, char* argv[]) arguments
    Recursive functions

Compiling and linking
    * Declaring functions and *.h
        function prototypes
        compile multiple files
        link object libraries
    * inline and optimization (-S -O3)

Overloads and templates
    Overloaded functions
    * Function templates
    * auto and nullptr

Name visibility
    Scopes
    Namespaces
    using
    Namespace aliasing
    The std namespace
    Global variables (static storage)

* Pointers
    Address-of operator (&)
    Dereference operator (*)
    Declaring pointers
    Pointers and arrays
    Pointer arithmetics
    * Pointers and const
    Pointers and string literals
    Pointers to pointers
    void pointers
    Pointers to functions
    Dynamic memory
        int *p = new int[5];
        delete[] p;    

C strings
    input/output <stdio.h>
        printf
        int puts ( const char * str );
        putchar(c)
        int getchar ( void );
        char * gets ( char * str );
    operations with strings <string.h> <cstring>
        int strcmp ( const char * str1, const char * str2 );
        char * strcat ( char * destination, const char * source );
        char * strcpy ( char * destination, const char * source );


DAY 3

Flashback
    itoa => sprintf (80.cpp)

Structs
    Structs
    unions
    access using pointers
    pointers to structures (->)
    initializing struct fields
    struct and variable at one go
    anonymous struct
    array of structs
    

Classes
    class definitions
        create objects        
        T t;
        //T t();
        T t = T();

    data members
    member functions
        double getVolume(void);//
        scope (resolution) operator ::
        get/set values
    access modifiers
        public
        private
        protected
        class vs struct
    constructor
        T::T()
        Parameterized Constructor
            Default is not created
        Initialization Lists
        delegating constructors (C++11)
    destructor
    copy constructor
        T(const T&) // cannot take T but can T&
        example: class with char*
    friend functions
        friend classes
    inline functions
    this
    
    Pointer to classes
    static members
        static data member
            counter
            with [] (031.cpp)
        static functions
            call as C::f()
    Templates


    static data members
        static counter
        X[10] (031.cpp)
    static functions
        call as C::f()

    constructor(s)
        default constructor
        : () initialisers
        copy constructor T::T(const T&)
        constructor T cannot take T as argument but can as T&

    ~destructor() // no void, no return

    this
        T * const this = &current_obj
        this->arg vs arg
        ext_f(this)


    friend functions
    overloading operators


DAY 4


STL

strings

io
iomanips
files


DAY 5

Dynamic libraries


MISC
    files

    typedef
    namespace {}
    namespace alias
    pass array to f()
    extern variables
    static_cast/dynamic_cast
    typeid
