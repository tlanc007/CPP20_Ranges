*en_manual/ -- Eric Neibler Range-v3 manual*

# Background
The **range** examples in this directory are from Eric Niebler's Range-v3 manual: [Range-v3](https://ericniebler.github.io/range-v3/).  

The purpose of the examples, in this folder, is to organize the examples that are compatible with C++20 Ranges.  There are several examples from the Range page, that aren't here.  Although, those  examples work fine for the Range-v3 library, they are not compatible with Ranges as they are defined for C++20.

To get more details about a particular example, please refer to Eric's [Range-v3 manual](https://ericniebler.github.io/range-v3/).

For the most part the examples have not been altered very much.  The most notible changes are:

* #include <range/v3/a.hpp
	* Replaced with **#include\<ranges\>**
		* In anticipation of C++20 standard header
* #include <rangeNamespace.hpp
	*  In anticipation of `std::ranges` and `std::view` namespace
	*  Adding namespace `rng = std::ranges`
		*  Personal preference in refering to Ranges namespace.
		*  For example the ranges foreach algorithm would be referred to as `rng::for_each`.
* `namespace view = std::view`
	* Personal preference
* `namespace action = rng::action`
	* Persona perference

