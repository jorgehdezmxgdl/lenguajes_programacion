cmake_minimum_required(VERSION 4.1)
project(empresa)

set(CMAKE_CXX_STANDARD 17)

add_executable(empresa main.cpp
        Persona.h
        Persona.cpp
        Departamento.cpp
        Departamento.h
        Empleado.cpp
        Empleado.h)
