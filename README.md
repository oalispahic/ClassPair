This project is licensed under the [MIT License](LICENSE).

# ClassPair

A very simple lightweight alternative to `std::pair` in C++

---

I really like the built-in types in C++ like `std::tuple` or `std::pair`,  
but I don’t like some of their syntax. So I'm building **ClassPair**,  
which is a clean, fun, and flexible take on the pair data structure.

---

## ✨ Features

- Simple readable syntax  
- No need to specify types explicitly  
- More user friendly  
- Cool methods not originally found in `std::pair`  

---

## 📚 Overview

Working on the library to expand it with a lot of methods  
which are not a part of the built-in `std::pair`.  

Right now `pair.h` supports a few methods.

### To declare a pair variable:

```cpp
pair yourPairName;
pair yourPairName("first variable", "second variable");
```

he beauty of it is that you can mix types without writing
the types explicitly in the declaration like with ```tuple``` or ```pair```.

**To access the components:**

You can use the ```.component()``` method on a ```pair ```object.

---

## 🚧 Work in progress:

- **Indexing and being able to use ```[]``` like an alternative to ```.component()```**
- **Support for iteration and linking multiple pairs with a ```SuperArray```**
- **Safe ```.at()``` method like in ```std::vector```**
- **Fun extras and exotic features**

---

## 🙋‍♂️ Who am I?

I'm Omar, a software engineering student working on cool micro-libraries
and low-level C++ experiments. This is a part of my learning journey and
portfolio, and I'm having a blast building it.





  
