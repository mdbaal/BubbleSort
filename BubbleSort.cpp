#include "Bubblesort.h"

std::vector<double> Bubblesort::bubblesort(std::vector<double> list){
    int temp = 0;

    for(int j = 0; j < list.size();j++){
      for(int i = 1; i < list.size();i++){
        if(list[i-1] > list[i]){
          temp = list[i];
          list[i] = list[i-1];
          list[i-1] = temp;
        }
      }
    }
    return list;
}
