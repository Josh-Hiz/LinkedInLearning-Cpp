# Section  1: Modern C++
## New C++ features:
- C++ 11 added lambdas, auto type deduction, list initialization, smart pointers, and move semantics 
- C++ 14 gave return type deduction, binary literals, and generic lambda expressions
- C++ 17 gave structured binding, nested namespaces, inline variables, and constexpr lambda

# Section 2: Tools and Build-chains for C++
## Modern compilers:
- GCC/Clang/LLVM (-std=c++11, -std=c++14, -std=c++17)
- MSVC (/std:c++14, /std:c++17)
- GCC/Clang warning flags: Wall, Wextra, Wpedantic, Wunused
- MSVC warning flags: /W4, /W14640, /permissive

## Static Analyzers:
- Tool that automatically examines C++ for issues
- Analysis is much slower than compilation 
- Can be open source or commercial 
- Occasional false positives (like Clang in Clion)
- Usually added to program's build chain

# Section 3/4: Libraries such as boost, STL, and common functions

## Map, Filter, and Reduce:
- Many languages have map, filter, and reduce methods
- C++ lacks them
- std::transform, std::for_each --> replaces map
- std::copy_if, std::remove_if --> replaces filter
- std::accumulate --> replaces reduce 

## String view:
- string_view is a non owning reference to a string
- It represents a view of a sequence of characters (including c strings)
- It should not live longer than the source string
- It may not be NULL terminated
- Could offer a big performance boost
## Size_t and Auto
- size_t is a basic unsigned integer; size depends on system (mac, windows, etc)
- size_t can improve your code's portability and efficiency
- For indexing containers, you should use size_type/size_t

# Section 5: Managing objects

## Smart pointers:
- std::shared_ptr: Have reference counters, each time it is copied, that reference counter increases, when count = 0, it is deleted
- std::unique_ptr: Single ownership over resource, copying is not allowed but can be moved
- std::weak_ptr
- std::unique_ptr should be used mostly 

## Rule of Zero, Three, and Five:
- Copy constructor, copy assignment operator, move constructor, move assignment operator, and the destructor
- If you create any of these functions, you should create them all
- Best practice is to leave the compiler to do it

## RAII:
### Resource Acquisition Is Initialization
- RAII is about writing safer C++ code 
- The destructors of stack objects are always called 
- Stack objects are trashed in reverse order of their creation
- Critical resources should be created on the stack
- They should be written to destroy themselves properly