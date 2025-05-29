This project is licensed under the [MIT License](LICENSE).

# ClassPair
A very simple lightweight alternative to std::pair in C++

I really like the built in types in c++ like std::tuple or std::pair 
but i dont like some of their syntax. So im building ClassPair which is 
a clean, fun and flexible take on the pair data structure.

Features:

-Simple readable syntax
-No need to specify types explicitly 
-More user friendly 
-Cool methods not originally found in std::pair

Overview: 

Working on the library to expand it with a lot of methods which are not a 
part of the built in std::pair. 

Right now pair.h supports a few methods.

To declare a pair variable you simply write 

pair "name of your pair";

To initialise the pair you can do it like 

pair "name of your pair"("first variable", "second variable");

The beauty of it is that you can mix it by type without writing the types
explicitly in the declaration like tuple or pair.

To acces the components you can use the "component" method which can be called
on a "pair" object.

Work in progress:

-Indexing and being able to use [] like an alternative to .component()
-Support for iteration and linking multiple pairs with a "SuperArray"
-Safe .at() method like in std::vector
-Fun extras and exotic fratures


Who am I?:

Im Omar, a software engineering student working on cool micro-libraries
and low level C++ experiments. This is a part of my learning journey and 
portofolio and I'm having a blast building it.  
