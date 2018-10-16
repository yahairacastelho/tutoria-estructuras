#include "StdAfx.h"
#include "APLICACION.h"



APLICACION::APLICACION(void)
{

}

APLICACION APLICACION::Match_listas(APLICACION dos, DataGridView^  grilla)
{
  
	
	//int p=Primero();
	//int fin_q=Proximo(Ultimo());
	//int i=dos.Primero();
	//int fin_j=dos.Proximo(dos.Ultimo());
	int despues=-1;
	ELEMENTO e;
	NODO nodito, nodito1;
	int con=0;
	LISTA x;
	if(Lista_vacia()==false) {Eliminar(nodito,-1);}
	
	if(dos.Lista_vacia()==false) {dos.Eliminar(nodito1,-1);}

	while((Lista_vacia()==false) && (dos.Lista_vacia()==false))
	{
	    
		if((nodito.Get_inf().Get_nombre()+nodito.Get_inf().Get_apellido())==
			(nodito1.Get_inf().Get_nombre()+nodito1.Get_inf().Get_apellido()))
		{
		    
		    e.Set_sexo(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[con]->Cells[3]->Value)));
		    e.Set_edad(System::Convert::ToInt32(grilla->Rows[con]->Cells[2]->Value));
			e.Set_nombre(nodito.Get_inf().Get_nombre());
			e.Set_apellido(nodito.Get_inf().Get_apellido());
			nodito.Set_inf(e);
			x.Insertar(nodito,-1);
			con++;
			Eliminar(nodito,-1);
			dos.Eliminar(nodito1,-1);
			if(Lista_vacia()==true)
			{
				
				 e.Set_sexo(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[con]->Cells[3]->Value)));
				 e.Set_edad(System::Convert::ToInt32(grilla->Rows[con]->Cells[2]->Value));
				 e.Set_nombre(nodito.Get_inf().Get_nombre());
				 e.Set_apellido(nodito.Get_inf().Get_apellido());
				 nodito.Set_inf(e);
				 x.Insertar(nodito,-1);
			} 
		}
		else
		{
			if((nodito.Get_inf().Get_nombre()+nodito.Get_inf().Get_apellido())>
			(nodito1.Get_inf().Get_nombre()+nodito1.Get_inf().Get_apellido()))
			{
			    x.Insertar(nodito1,-1);
				dos.Eliminar(nodito1,-1);
				if(dos.Lista_vacia()==true) {x.Insertar(nodito1,-1);}

			}
			else
			{
		    e.Set_sexo(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[con]->Cells[3]->Value)));
		    e.Set_edad(System::Convert::ToInt32(grilla->Rows[con]->Cells[2]->Value));
			e.Set_nombre(nodito.Get_inf().Get_nombre());
			e.Set_apellido(nodito.Get_inf().Get_apellido());
			nodito.Set_inf(e);
			x.Insertar(nodito,-1);
			con++;
			Eliminar(nodito,-1);
	        if(Lista_vacia()==true) 
			{  
			   e.Set_sexo(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[con]->Cells[3]->Value)));
			   e.Set_edad(System::Convert::ToInt32(grilla->Rows[con]->Cells[2]->Value));
			   e.Set_nombre(nodito.Get_inf().Get_nombre());
			   e.Set_apellido(nodito.Get_inf().Get_apellido());
			   nodito.Set_inf(e);
			   x.Insertar(nodito,-1);
			}
			}

		
		}
	}

	while(Lista_vacia()==false)
	{
		 	e.Set_sexo(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[con]->Cells[3]->Value)));
			e.Set_edad(System::Convert::ToInt32(grilla->Rows[con]->Cells[2]->Value));
			e.Set_nombre(nodito.Get_inf().Get_nombre());
			e.Set_apellido(nodito.Get_inf().Get_apellido());
			nodito.Set_inf(e);
			x.Insertar(nodito,-1);
			con++;
			Eliminar(nodito,-1);

			if(Lista_vacia()==true) {
					e.Set_sexo(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[con]->Cells[3]->Value)));
					e.Set_edad(System::Convert::ToInt32(grilla->Rows[con]->Cells[2]->Value));
					e.Set_nombre(nodito.Get_inf().Get_nombre());
					e.Set_apellido(nodito.Get_inf().Get_apellido());
					nodito.Set_inf(e);
					x.Insertar(nodito,-1);
			}
	}
	
	while(dos.Lista_vacia()==false)
	{
	   
	   x.Insertar(nodito1,-1);
	   dos.Eliminar(nodito1,-1);
	   if(dos.Lista_vacia()==true) {x.Insertar(nodito1,-1);}
	}

	this->This(x);
	return *this;
}

void APLICACION::Insertar_lista_dos(VECTORES &dato2, DataGridView^  grilla)
 { int i=0;

  DATOS s;

	while((i<dato2.Get_tamano())&&(grilla->Rows[i]->Cells[0]->Value!=""))
     {
		s.Set_nombre(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[0]->Value)));
	    s.Set_apellido(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[1]->Value)));
	    s.Set_edad(System::Convert::ToInt32(grilla->Rows[i]->Cells[2]->Value));
	    s.Set_sexo(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[3]->Value)));
	    dato2.Set_vector(i,s);
		i++;
	}
	dato2.Set_tamano(i);

}
void APLICACION::Insertar_lista_vector_dos(VECTORES dato2)
{
int i=0;
	DATOS s;
	NODO nodito;
	int despues=-1;
	ELEMENTO e;
	e.Set_nombre(dato2.Get_vector(i).Get_nombre());
	e.Set_apellido(dato2.Get_vector(i).Get_apellido());
	e.Set_sexo(dato2.Get_vector(i).Get_sexo());
	e.Set_edad(dato2.Get_vector(i).Get_edad());
	nodito.Set_ap(-1);
	nodito.Set_inf(e);
	Insertar(nodito,-1);
    despues=Primero();
	i++;
	while(i<dato2.Get_tamano())
	{
	  
	  e.Set_nombre(dato2.Get_vector(i).Get_nombre());
	  e.Set_apellido(dato2.Get_vector(i).Get_apellido());
	  e.Set_sexo(dato2.Get_vector(i).Get_sexo());
	  e.Set_edad(dato2.Get_vector(i).Get_edad());
	  nodito.Set_ap(-1);
	  nodito.Set_inf(e);
	  Insertar(nodito,despues);
      despues=Proximo(despues);
	  i++;
	}


}
void APLICACION::Guardar_lista_vector_dos(VECTORES &ve)
{
   DATOS d;
   int con=0;
   int p=Primero();
   int fin=Proximo(Ultimo());
   while(p!=fin)
   {
    d.Set_nombre(Get_lista(p).Get_inf().Get_nombre());
	d.Set_apellido(Get_lista(p).Get_inf().Get_apellido());
	d.Set_edad(Get_lista(p).Get_inf().Get_edad());
	d.Set_sexo(Get_lista(p).Get_inf().Get_sexo());
	ve.Set_vector(con,d);
	p=Proximo(p);
	con++;
   }
   ve.Set_tamano(con);


}
void APLICACION::Guardar_vector_grilla_dos(VECTORES ve,DataGridView^  grilla)
{
	int i=0;
	grilla->ColumnCount=5;
	grilla->RowCount=ve.Get_tamano();
	 while(i<ve.Get_tamano())
	{
	  grilla->Rows[i]->Cells[0]->Value=marshal_as<System::String^>(ve.Get_vector(i).Get_nombre());
	  grilla->Rows[i]->Cells[1]->Value=marshal_as<System::String^>(ve.Get_vector(i).Get_apellido());
	  grilla->Rows[i]->Cells[2]->Value=System::Convert::ToString(ve.Get_vector(i).Get_edad()); 
	  grilla->Rows[i]->Cells[3]->Value=marshal_as<System::String^>(ve.Get_vector(i).Get_sexo());
	  grilla->Rows[i]->Cells[4]->Value=marshal_as<System::String^>(ve.Get_vector(i).Get_estado());
	  i++;
	}

}

void APLICACION::Insertar_lista(VECTOR &dato, DataGridView^  grilla)
{
	int i=0;

	DATOS s;

	while((i<dato.Get_tamano())&&(grilla->Rows[i]->Cells[0]->Value!=""))
     {
	    s.Set_nombre(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[0]->Value)));
	    s.Set_apellido(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[1]->Value)));
	    dato.Set_vector(i,s);
		i++;
	}
	dato.Set_tamano(i);

}
void APLICACION::Insertar_lista_vector(VECTOR dato)
{
	int i=0;
	DATOS s;
	NODO nodito;
	int despues=-1;
	ELEMENTO e;
	e.Set_nombre(dato.Get_vector(i).Get_nombre());
	e.Set_apellido(dato.Get_vector(i).Get_apellido());
	nodito.Set_ap(-1);
	nodito.Set_inf(e);
	Insertar(nodito,-1);
    despues=Primero();
	i++;
	while(i<dato.Get_tamano())
	{
	  
	  e.Set_nombre(dato.Get_vector(i).Get_nombre());
	  e.Set_apellido(dato.Get_vector(i).Get_apellido());
	  nodito.Set_ap(-1);
	  nodito.Set_inf(e);
	  Insertar(nodito,despues);
      despues=Proximo(despues);
	  i++;
	}

}

void APLICACION::Guardar_lista_vector(VECTOR &ve)
{
   DATOS d;
   int con=0;
   int p=Primero();
   int fin=Proximo(Ultimo());
   while(p!=fin)
   {
    d.Set_nombre(Get_lista(p).Get_inf().Get_nombre());
	d.Set_apellido(Get_lista(p).Get_inf().Get_apellido());
	ve.Set_vector(con,d);
	p=Proximo(p);
	con++;
   }
   ve.Set_tamano(con);
}
void APLICACION::Guardar_vector_grilla(VECTOR ve, DataGridView^  grilla)
{
  int i=0;
  grilla->ColumnCount=4;
  grilla->RowCount=ve.Get_tamano();
  while(i<ve.Get_tamano())
  {
	  grilla->Rows[i]->Cells[0]->Value=marshal_as<System::String^>(ve.Get_vector(i).Get_nombre());
	  grilla->Rows[i]->Cells[1]->Value=marshal_as<System::String^>(ve.Get_vector(i).Get_apellido());
	  i++;
  }



}
void APLICACION::Intercambiar(int p,int q)
{
	NODO aux2;
	NODO aux1;
	aux1.Set_inf(Get_lista(p).Get_inf());
	aux1.Set_ap(Get_lista(q).Get_ap());
	aux2.Set_inf(Get_lista(q).Get_inf());
	aux2.Set_ap(Get_lista(p).Get_ap());
	Set_lista(p,aux2);
	Set_lista(q,aux1);

}
void APLICACION::Ordenar_lista()
{
	int p,q;
	p=Primero();
	int fin=Proximo(Ultimo());
	while(p!=fin)
	{
		q=Proximo(p);
		while(q!=fin)
		{
	      if((Get_lista(p).Get_inf().Get_nombre() + Get_lista(p).Get_inf().Get_apellido())>
			 (Get_lista(q).Get_inf().Get_nombre() + Get_lista(q).Get_inf().Get_apellido()))
		 {
		   Intercambiar(p,q);
		 }
		
		 q=Proximo(q);
		}
	 p=Proximo(p);
	}
}