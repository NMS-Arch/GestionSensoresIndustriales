#pragma once

using namespace System;
using namespace Model;
using namespace System::Collections::Generic;

namespace Controller {
	public ref class Controlador{

    private:
        // Cambiamos List por Dictionary. La Clave es el ID (int) y el Valor es el Sensor^
        static Dictionary<int, SensorIndustrial^>^ dicSensores;
        static int contadorId;

    public:
        static Controlador() {
            dicSensores = gcnew Dictionary<int, SensorIndustrial^>();
            contadorId = 1;
        }

        static void Agregar(SensorIndustrial^ nuevoSensor);
        static SensorIndustrial^ ConsultarPorId(int id);
        static List<SensorIndustrial^>^ ObtenerTodos(); // Mantenemos List aquí porque el DataGridView lo necesita para dibujarse
        static void Modificar(SensorIndustrial^ sensorModificado);
        static void Eliminar(int id);
    };
}
