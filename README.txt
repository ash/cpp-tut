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
    name-mangling

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
        out-of-line definitions
        get/set values
    access modifiers
        public
        private
        protected
        class vs struct
    constructor
        T::T()
        default constructor
        Parameterized Constructor
            Default is not created
        Initialization Lists
        delegating constructors (C++11)
    destructor
        no void, no return
    copy constructor
        T(const T&) // cannot take T but can T&
        example: class with char*
    friend functions
        friend classes
        friends are not members (-S)
    inline functions
    this
        T * const this = &current_obj
        this->arg vs arg
        ext_f(this)    
    Pointer to classes
    static members
        static data member
            counter
            with [] (031.cpp)
        static functions
            call as C::f()
    const member functions
    intreface and implementation (.h)
        static data members


DAY 4

    inheritance
        base, derived classes
        type of inheritance
        access control
        multiple inheritance
    overloading operators (034.cpp)
        unary (-, ++, --, !)
        binary (+, -)
        relational (<, ==, etc.)
        assignment (=)
        function call ()
        subscripting []
        member access ->
    polymorphism
        virtual functions // shape
    abstract classes (interfaces)

    Templates    

STL
    Containers
        array (037.cpp)
            fixed size, not expandable
            size()
            operator[]
            at()
            iterating using range-based for loop
        vector (038.cpp)
            push_back
            size
            empty
            capacity
            max_size
            resize
            pop_back
            clear        
        deque
            push_back
            push_front
        pair <utility>
            first, second
    Iterators
        list
            list<int>::iterator
            const_reverse_iterator
            rbegin
            rend     


DAY 5

    Algorithms
        find
            isert in vector (042.cpp)
            delete
        sort
            as member of container (list.sort, 043.cpp)
            as std::sort(begin, begin+4)
        min_element, max_element        
    Container adaptors
        queue
            push
            front
            back (not end)
            pop
        stack
            push
            top
            pop
        priority queue (046.cpp)
            top
            pop
    Associative containers
        set
            insert
            erase
            find
        map
            iter->first, iter->second
    <string>
        iterators (and rbegin, begin, end, rend)
        auto instead of iterators
        for (auto x : s)
        size, length
        [], at
        +, +=
        c_str
        find, string::npos
    <iomanip>
        setw
        setfill
        setbase
        setprecision
        > exersise: print table
        hex
        setiosflags/resetiosflags (std::ios::showbase | std::ios::uppercase);
    <sstream>
        <<
        str(), c_str()
        >>
    
    ifstream
        http://www.cplusplus.com/reference/ios/
        open
        close
        char c = f.get()
        eof
        getline(f, s)
    ofstream
        ofstream::out, ofstream::app

    *input/output (<<, >>) overloading for classes
        ostream& operator<<(ostream& o, C& c)

    <typeinfo>
        typeid(...).name()

    exceptions
        try/throw/catch
        throw int, throw string
        catch(...)
        <exception>, virtual const char* what() const throw()
        bad_alloc
        catch divide by zero

Dynamic libraries
    extern "C"


MISC
    cstdlib vs stdlib.h
    
    typedef
    namespace {}
    namespace alias
    pass array to f()
    extern variables
    static_cast/dynamic_cast
    typeid

    fortran linking



(...)