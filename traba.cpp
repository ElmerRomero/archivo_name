
#include <iostream>
#include "list.h"
using namespace std;
typedef int ItemType;
bool Delete(ItemType SomeItem,list oldList, list newList)
{
bool val=false;
if(SomeItem==oldList&&SomeItem!=newList){
val=true;
}
return val;
};
