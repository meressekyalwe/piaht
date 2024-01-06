#ifndef MIXTURE_H
#define MIXTURE_H

#include "substance.h"
#include <vector>
#include <memory>


class Mixture : public Substance
{
public:

    void SetMixtureComponents();

    void SetPhysicalProperties() override;

    void SetSubtanceDetails() override;

private:
    std::vector<std::shared_ptr<Substance>> MixtureComponents;
};

#endif