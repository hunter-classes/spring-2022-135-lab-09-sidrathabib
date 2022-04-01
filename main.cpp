#include <iostream>
#include "coord3d.h"
#include "funcs.h"
#include <iomanip>

int main() {
  
  //Task A
  Coord3D pointP = {10, 20, 30};
    std::cout << "Part A" << std::endl;
    std::cout << "The length is: " << length(&pointP)<< std::endl << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl; 

  //Task B
  Coord3D pointQ = {-20, 21, -22};
    std::cout << "\nPart B" << std::endl;
    std::cout << "Point P: (10, 20, 30)" << std::endl;
    std::cout << "Point Q: (-20, 21, -22)" << std::endl;
  std::cout << "Address of P: " << &pointP << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl;

  Coord3D * farther = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "Farther from origin: " << farther << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl; 


  //Task C
  std::cout << "\nPart C" << std::endl;
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
  std::cout << "-------------------------------------------------------------" << std::endl; 


  //Task D
  std::cout << "\nTask D" << std::endl;
  std::cout << "x: " << std::setw(6) << pos.x << " y: " << std::setw(6) << pos.y << " z: " << std::setw(6) << pos.z << std::endl;
    move(&pos, &vel, 2.0); 

  std::cout << "Position after move: " << std::endl;
  std::cout << "x: " << std::setw(6) << pos.x << " y: " << std::setw(6) << pos.y << " z: " << std::setw(6) << pos.z << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl; 

  //Task E
  std::cout << "\nPart E" << std::endl;
    Coord3D * ppos = createCoord3D(13, 23, 65);
    Coord3D * pvel = createCoord3D(1, -5, 0.2);

  std::cout << "Creating Position and Velocity" << std::endl;
  std::cout << "Original position: " << std::endl;
  std::cout << "x: " << std::setw(6) << (*ppos).x << " y: " << std::setw(6) << (*ppos).y << " z: " << std::setw(6) << (*ppos).z << std::endl;
    move(ppos, pvel, 2.0);

  std::cout << "Position after move: " << std::endl;
  std::cout << "x: " << std::setw(6) << (*ppos).x << " y: " << std::setw(6) << (*ppos).y << " z: " << std::setw(6) << (*ppos).z << std::endl;
    deleteCoord3D(ppos);
    deleteCoord3D(pvel);
  std::cout << "Status of Position and Velocity: Deleted" << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl; 

  return 0;
}