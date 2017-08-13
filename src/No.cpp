#include "No.h"
#include <iostream>
void No::addConnection(int column){
    edges = edges | (1 << column);
}
void No::removeConnection(int column){
    edges = edges & ~(1 << column);
}
bool No::hasConnection(int column){
    return (edges & (1 << column)) != 0;
}