cmake_minimum_required(VERSION 4.1)
project(inventario)

set(CMAKE_CXX_STANDARD 20)

add_executable(inventario main.cpp
        Producto.cpp
        Producto.h
        Provedor.cpp
        Provedor.h
        Precio.cpp
        Precio.h)
