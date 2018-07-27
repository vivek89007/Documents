/*
 * test.cpp
 *
 *  Created on: Jul 27, 2018
 *      Author: vshukla1
 */
#include <pybind11/pybind11.h>
namespace py = pybind11;
int add(int i, int j) {
    return i + j;
}

PYBIND11_MODULE(test, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function which adds two numbers");
}




