#pragma once

#include <xrpld/app/tx/detail/Transactor.h>

namespace ripple {

class MetadataRegistryClaim : public Transactor
{
public:
    static constexpr ConsequencesFactoryType ConsequencesFactory{Normal};

    explicit MetadataRegistryClaim(ApplyContext& ctx)
        : Transactor(ctx)
    {
    }

    static NotTEC
    preflight(PreflightContext const& ctx);

    static TER
    preclaim(PreclaimContext const& ctx);

    TER
    doApply() override;
};

} // namespace ripple 