cmake_minimum_required(VERSION 3.19)
project(gestionale_taxi)

set(CMAKE_CXX_STANDARD 14)

add_executable(gestionale_taxi main.cpp Corsa.cpp Corsa.h CorsaVariabile.cpp CorsaVariabile.h CorsaFissa.cpp CorsaFissa.h SOCOTA_DB.cpp SOCOTA_DB.h CorsaCotafi.cpp CorsaCotafi.h)