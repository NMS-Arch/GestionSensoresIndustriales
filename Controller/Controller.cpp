#include "pch.h"

#include "Controller.h"

using namespace Model;






    // 1. CREATE
 void Controller::Controlador::Agregar(SensorIndustrial^ nuevoSensor) {
        if (nuevoSensor == nullptr) {
            throw gcnew Exception("El objeto sensor proporcionado no es válido.");
        }

        nuevoSensor->id = contadorId++;
        // Agregamos pasando la Clave (Id) y el Valor (El objeto entero)
        dicSensores->Add(nuevoSensor->id, nuevoSensor);
    }

    // 2. READ 
 SensorIndustrial^ Controller::Controlador::ConsultarPorId(int id) {
        // Búsqueda directa y sin bucles
        if (dicSensores->ContainsKey(id)) {
            return dicSensores[id];
        }
        throw gcnew Exception("Error: No se encontró ningún sensor con ID " + id + ".");
}

    // 3. READ ALL
    List<SensorIndustrial^>^ Controller::Controlador::ObtenerTodos() {
        // Extraemos solo los Valores del diccionario y los convertimos a Lista para la GUI
        return gcnew List<SensorIndustrial^>(dicSensores->Values);
    }

    // 4. UPDATE
    void Controller::Controlador::Modificar(SensorIndustrial^ sensorModificado) {
        if (sensorModificado == nullptr) {
            throw gcnew Exception("Los datos para la modificación no son válidos.");
        }

        // Reutilizamos ConsultarPorId. Si no existe, lanzará la excepción sola.
        SensorIndustrial^ existente = ConsultarPorId(sensorModificado->id);

        existente->nombre = sensorModificado->nombre;
        existente->tipo = sensorModificado->tipo;
        existente->rango_maximo = sensorModificado->rango_maximo;
        existente->estado = sensorModificado->estado;
    }

    // 5. DELETE
    void Controller::Controlador::Eliminar(int id) {
        if (dicSensores->ContainsKey(id)) {
            dicSensores->Remove(id); // Eliminación directa por ID
        }
        else {
            throw gcnew Exception("Error: No se puede eliminar. El sensor con ID " + id + " no existe.");
        }
    }


