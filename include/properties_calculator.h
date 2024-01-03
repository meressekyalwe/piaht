#ifndef PROPERTIES_CALCULATOR_H
#define PROPERTIES_CALCULATOR_H

#define bool int
#define false 0
#define true 1


/// @brief 
typedef struct 
{
    int id;
    char* name;
    float molarMass;
    float temperature;
    float density;
    float massFraction;
    float viscosity;
    float heatConductance;
} Component;

bool InitComponents(int n);


/// @brief 
/// @return 
float MolarMassMixture();


/// @brief Пересчёт мольного доля компонента в массовый, многокомпонентной смеси
/// @param molarFraction молярная долия компонента
/// @param molarMassComp молярная масса компонента
/// @param molarMassMisture молярная масса смесь
/// @return массовый доль
float MassFractionFromMolar(float molarFraction, float molarMassComp, float molarMassMisture);


/// @brief Пересчёт массовых долей в мольные, многокомпонентной смеси
/// @param massFraction массовая долия компонента
/// @param molarMassComp молярная масса компонента
/// @param molarMassMisture молярная масса смесь
/// @return молярная доля
float MolarFractionFromMass(float massFraction, float molarMassComp, float molarMassMisture);



/// @brief 
/// @return 
float MixtureDensity();



/// @brief 
void Finish();

#endif