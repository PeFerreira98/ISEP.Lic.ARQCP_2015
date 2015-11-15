int menor_data_c (int data1, int data2){
	int ano1, mes1, dia1, ano2, mes2, dia2;
	
		ano1= data1 & 65535;	//corresponde a 16 bits ligados a direita
		ano2 = data2 & 65535;
		mes1 = data1 >> 24;		//24 porque queremos so os ultimos 8 bits
		mes2 = data2 >> 24;
		dia1 = data1 << 8;		//"perde-se" o mês para depois deslocar 24 e termos só o dia
		dia1= dia1 >> 24;
		dia2 = data2 << 8;
		dia2= dia2 >> 24;
		
	if (ano1 == ano2){
		if(mes1 == mes2){
			if(dia1<dia2){
				return data1;
			}
			return data2;
		}
		if(mes1<mes2) return data1;
		return data2;
	}	
	else if (ano1<ano2) return data1;
	
	return data2;	

}
