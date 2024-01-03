#include "properties_calculator.h"
#include <stdio.h>
#include <stdlib.h>

int nComponents = 0;
Component* ListOfComponents = NULL;

bool InitComponents(int n)
{
    nComponents = n;

    ListOfComponents = malloc(sizeof(Component) * nComponents);

    return true;
}

float MolarMassMixture()
{
    return 0.0f;
}

float MolarFractionFromMolar(float MolarFraction, float MolarMassComp, float MolarMassMisture)
{
    return MolarFraction * MolarMassComp / MolarMassMisture;
}

float MolarFractionFromMass(float MassFraction, float MolarMassComp, float MolarMassMisture)
{
    return (MassFraction / MolarMassComp) / (1 / MolarMassMisture);   
}

float MixtureDensity()
{
    float sum = 0.f;
    if (ListOfComponents != NULL)
    {
        for (int i = 0; i < nComponents; i++)
        {
            sum += (ListOfComponents[i].Density / ListOfComponents[i].MassFraction);
        }
    }

    return sum;
}

void Finish()
{
    free(ListOfComponents);
}
