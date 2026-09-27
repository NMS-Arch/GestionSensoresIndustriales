#pragma once

using namespace System;

namespace Model {
	public ref class SensorIndustrial{
		
	public:

		property int id; property String^ nombre; String^ tipo; property double rango_maximo; property String^ estado;


		SensorIndustrial() {}

		SensorIndustrial(int id, String^ nombre, String^ tipo, double rango_maximo, String^ estado) {

			this->id = id;
			this->nombre = nombre;;
			this->tipo = tipo;
			this->rango_maximo = rango_maximo;
			this->estado = estado;
		}


	};
}
