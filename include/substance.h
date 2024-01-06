#ifndef SUBSTANCE_H
#define SUBSTANCE_H

#include <string>


/// @brief Агрегатное состояние вещества
enum State
{
    /// @brief 
    Unknow,
    /// @brief Твердое 
    Solid,
    /// @brief Жидкое 
    Liquid,
    /// @brief Газообразное
    Gas
};

/// @brief Структура, представляющая химическое вещество.
struct Details
{
    /// @brief Название
    std::string Name;
    /// @brief Молярная масса
    float MolarMass;
    /// @brief Темепература
    float Temperature;
    /// @brief Агрегатное состояние
    State AgregateState;
};


/// @brief Структура, представляющая физические свойства материала.
struct PhysicalProperties
{
    /// @brief Плотность
    float Density;
    /// @brief Вязкость
    float Viscosity;
    /// @brief Теплопроводность
    float Conductivity;
    /// @brief Массовая долия
    float MassFraction;
};

/// @brief Абстрактный класс, представляющий вещество.
class Substance
{
public:
    /// @brief Устанавливает физические свойства вещества.
    virtual void SetPhysicalProperties();

    /// @brief  Устанавливает детали вещества.
    virtual void SetSubtanceDetails();

    /// @brief Виртуальный деструктор.
    virtual ~Substance();

private:
    /// @brief Детали вещества.
    Details SubDetails;

    /// @brief Физические свойства вещества.
    PhysicalProperties SubPhysicalProperties;
};

#endif