# Constructor-and-destructor-in-cpp

## Aim
To understand and implement different types of constructors and destructor in C++ using simple programs that demonstrate how objects are initialized and destroyed.

---

## Theory

In C++, **constructors** and **destructors** are special member functions of a class used to manage object lifecycle.

### 1. Constructor
- A **constructor** is automatically called when an object is created.
- It has the same name as the class and no return type.
- Used to initialize class members.

#### Types of Constructors:
- **Default Constructor**: Takes no parameters.
- **Parameterized Constructor**: Takes parameters to initialize objects with specific values.
- **Copy Constructor**: Creates a new object as a copy of an existing object.
- **Constructor Inside/Outside Class**: Constructors can be defined within the class body or outside using the scope resolution operator `::`.

### 2. Destructor
- A **destructor** is used to clean up memory/resources before an object is destroyed.
- It has the same name as the class prefixed with a tilde `~`, and it takes no arguments.
- Called automatically when the object goes out of scope or is explicitly deleted.

Understanding constructors and destructors is key to mastering **object-oriented programming**, as they manage how objects are created and destroyed.

---

## Algorithms

### 1. **Constructor inside the Class.cpp**
- Define a constructor inside the class.
- Automatically initializes data members when an object is created.

### 2. **Constructor outside the Class.cpp**
- Declare the constructor in the class.
- Define it outside the class using the scope resolution operator `::`.

### 3. **Copy Constructor.cpp**
- Define a copy constructor to create a new object by copying values from an existing object.
- Syntax: `ClassName(const ClassName &obj)`

### 4. **Destructor.cpp**
- Define a destructor using `~ClassName()`.
- Display a message when the object is destroyed to understand its lifecycle.

### 5. **Display Date using Parameterized Constructor.cpp**
- Create a class to hold day, month, and year.
- Use a parameterized constructor to initialize the date values.
- Display the date using a member function.

---

## Conclusion

These programs provide practical examples of how constructors and destructors work in C++. By learning default, parameterized, and copy constructors, along with destructors, learners gain better control over object creation and memory management. These concepts are fundamental to writing efficient and maintainable C++ code, especially in larger applications.

---
