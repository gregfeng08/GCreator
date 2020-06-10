#include <iostream>
#include <vector>
#include <cstring>
#include <math.h>
#include <iterator>
#include "Node.h"

//Graph Creator Program
//Made by Gregory Feng


using namespace std;

void addEdge(vector<Node*>&, char*, char*, int);
void print(vector<Node*>);
void removeVertex(vector<Node*>&, char*);
int main(){
  vector<Node*> vect;
  cout<<"Welcome to graph creator, a program that creates a graph that can be manipulated by either adding a vertex, (WIP) deleting a vertex, (WIP) adding an edge, or deleting an edge."<<endl; 
  cout<<endl;
  while(true){
    char input[80];
    
    cout<<"Input ADDVERTEX to add a vertex, (WIP) ADDEDGE to add a edge, PRINT to print, (WIP) DELETE to delete a vertex, and QUIT to exit the program."<<endl;
    cout<<endl;
    cin.getline(input, sizeof(input));
    for(int i = 0; i<sizeof(input); i++){
      input[i] = toupper(input[i]);
    }
    if(strcmp(input, "ADDVERTEX") == 0){
      char* val = new char();
      cout<<"What value would you like to add?"<<endl;
      cout<<endl;
      cin.getline(val, sizeof(val));
      vect.push_back(new Node(val, 0, NULL)); //Pushes the value to be added
    }
    else if(strcmp(input, "PRINT") == 0){
      print(vect);
    }
    
    else if(strcmp(input, "QUIT") == 0){
      break;
    }
  }
  return 0;
}
void print(vector<Node*>vect){ //Prints in text what the graph looks like
  vector<Node*>::iterator iterator; //Iterates through the nodes to print the vertexes
  for(iterator = vect.begin(); iterator != vect.end(); ++iterator){
    vector<Node*> edges = (*iterator)->getEdges(); //looks at the edges to see what its connected to
    cout<<"The vertex with a value of "<<(*iterator)->getVal()<<" is connected to the vertex with a value of ";
    cout<<endl;
  }
}
