#include <iostream>
#include <vector>
#include <cstring>
#include "Node.h"

using namespace std;

Node::Node(char* newVal, int newWeight, Node* newSecond) { //Generates a new node for the graph with a value weight and what its connected to
  val = new char[sizeof(newVal)];
  strcpy(val, newVal);
  weight = newWeight;
  second = newSecond;
}

Node::~Node(){

}
int Node:: getWeight(){ //Returns the weight of the edge
  return weight;
}
Node* Node:: getSecond(){ //Returns the node that its connected to
  return second;
}
char* Node:: getVal(){ //Returns the value of the vertex
  return val;
}
vector<Node*> Node::getEdges(){ //Returns the edges of the vertex
  return edges;
}
