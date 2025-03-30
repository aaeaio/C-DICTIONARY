#include <iostream>
#include <string>

using namespace std;
int main(){
	string a;
	
	cout<<"What is the meaning of ";
	cin>>a;
	
	if (a== "BEAM"){
		cout<<"A horizontal structural element that supports loads.";
	}else if (a== "CEMENT"){ 
		cout<<"A binding material used in concrete.";
	}else if (a== "CONCRETE"){ 
		cout<<"A composite marrial made of cement aggregate, and water.";
	}else if (a== "CULVERT"){ 
		cout<<"A structure that allows water to pass under a road or railway.";
	}else if (a== "DAM"){ 
		cout<<"A barrier that restricts the flow of water.";
	}else if (a== "EARTHQUAKE"){ 
		cout<<"A natural shaking of the ground caused by tectonic movements.";
	}else if (a== "EMBANKMENT"){ 
		cout<<"A raised structure made of earth or stone.";
	}else if (a== "FOOTING"){ 
		cout<<"The foundation element that spread the load of structure.";
	}else if (a== "FOUNDATION"){ 
		cout<<"The lowest part of a building that transfers loads to the ground.";
	}else if (a== "GEOTECHNICS"){ 
		cout<<"The study of soil and rock behavior under engineering conditions.";
	}else if (a== "HYDRAULICS"){ 
		cout<<"The study of fluid behavior in motion.";
	}else if (a== "LOAD"){ 
		cout<<"Forces or weights supported by a structure.";
	}else if (a== "MORTAR"){ 
		cout<<"A mixture used to bond bricks or stones.";
	}else if (a== "PAVEMENT"){ 
		cout<<"A hard surface for roads, walkways, or runaways.";
	}else if (a== "PILE"){ 
		cout<<"A long, slender column driven into the ground for foundation support.";
	}else{
		cout<<"Word not found";
	}
	
	return 0;
}
						
						