#ifndef PROPERTIES_CALCULATOR_H
#define PROPERTIES_CALCULATOR_H

#define bool int
#define false 0
#define true  1


/// @brief 
typedef struct 
{
    int Id;
    char* Name;
    float MolarMass;
    float Temperature;
    float Density;
    float MassFraction;
    float Viscosity;
    float HeatConductance;
} Component;

bool InitComponents(int n);


/// @brief 
/// @return 
float MolarMassMixture();


/// @brief Пересчёт мольного доля компонента в массовый, многокомпонентной смеси
/// @param molarFraction молярная долия компонента
/// @param MolarMassComp молярная масса компонента
/// @param MolarMassMisture молярная масса смесь
/// @return массовый доль
float MassFractionFromMolar(float molarFraction, float MolarMassComp, float MolarMassMisture);


/// @brief Пересчёт массовых долей в мольные, многокомпонентной смеси
/// @param massFraction массовая долия компонента
/// @param MolarMassComp молярная масса компонента
/// @param MolarMassMisture молярная масса смесь
/// @return молярная доля
float MolarFractionFromMass(float massFraction, float MolarMassComp, float MolarMassMisture);



/// @brief 
/// @return 
float MixtureDensity();



/// @brief 
void Finish();

#endif