#include <stdio.h>
#include "Warehouse.h"
#include "House.h" 
#include "Templo.h" 

int main(){
	Warehouse w("East Warehouse", 10, 20, 30);
	House h("Agripa's house", 2, 5, 10);
	Templo t("Mercury's Temple", "Mercury", 3);
	
	cout << "Werehouse name: " << w.
		getName() << endl << endl;

	w.printResources();
	h.printHouse();
	t.printTemple();

	system("pause");
	return 0;
}