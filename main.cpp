#include "hospital.h"

int main()
{
    Hospital Alex("Alex Qwert", "Lin Jenn", "Therapist", "17.09.2024", "14:00", "Actual");

    Alex.Print();

    Alex.addToArchiv();
    Alex.showArchiv();

    Alex.updateStatus("Used");
    Alex.addToArchiv();

    Alex.showArchiv();
}
