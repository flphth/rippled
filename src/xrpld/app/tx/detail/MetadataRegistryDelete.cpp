#include <xrpld/app/tx/detail/MetadataRegistryDelete.h>

namespace ripple {

NotTEC
MetadataRegistryDelete::preflight(PreflightContext const& ctx)
{
    // TODO: Ajouter la validation des champs d'entrée
    return tesSUCCESS;
}

TER
MetadataRegistryDelete::preclaim(PreclaimContext const& ctx)
{
    // TODO: Ajouter la logique de pré-validation
    return tesSUCCESS;
}

TER
MetadataRegistryDelete::doApply()
{
    // TODO: Implémenter la logique de suppression du MetadataRegistry
    return tesSUCCESS;
}

} // namespace ripple 