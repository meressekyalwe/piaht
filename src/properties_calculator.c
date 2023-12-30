#include "properties_calculator.h"
#include <stdio.h>
#include <stdlib.h>

int nComponents = 0;
Component* listOfComponents = NULL;

bool initComponents(int n)
{
    nComponents = n;

    listOfComponents = malloc(sizeof(Component) * nComponents);

    return true;
}

float molarFractionFromMolar(float molarFraction, float molarMassComp, float molarMassMisture)
{
    return molarFraction * molarMassComp / molarMassMisture;
}

float molarFractionFromMass(float massFraction, float molarMassComp, float molarMassMisture)
{
    return (massFraction / molarMassComp) / (1 / molarMassMisture);   
}

float mixtureDensity()
{
    float sum = 0.f;
    if (listOfComponents != NULL)
    {
        for (int i = 0; i < nComponents; i++)
        {
            sum += (listOfComponents[i].density / listOfComponents[i].massFraction);
        }
    }

    return sum;
}

void finish()
{
    free(listOfComponents);
}
