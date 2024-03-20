#include <iostream>
using namespace std;

main() {
	
	
	
	//arreglos bidimensionales, matriz, tabla.
	int matriz[2][3]={{10,20,30},{40,50,60}};
	cout<<matriz[0][0]<<endl;
	cout<<matriz[0][1]<<endl;
	cout<<matriz[0][2]<<endl;
	cout<<matriz[1][0]<<endl;
	cout<<matriz[1][1]<<endl;
	cout<<matriz[1][02]<<endl;

	for (int i=0; i<2; i++){
		for (int ii=0; ii<3; ii++){
			cout<<i<<""<<"0,0: "<<matriz[i][ii]<<endl;
			
		}
	}


	system("pause");
}