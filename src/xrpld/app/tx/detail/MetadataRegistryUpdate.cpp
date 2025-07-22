#include <xrpld/app/tx/detail/MetadataRegistryUpdate.h>

namespace ripple {

NotTEC
MetadataRegistryUpdate::preflight(PreflightContext const& ctx)
{
    // TODO: Ajouter la validation des champs d'entrée
    return tesSUCCESS;
}

TER
MetadataRegistryUpdate::preclaim(PreclaimContext const& ctx)
{
    // TODO: Ajouter la logique de pré-validation
    return tesSUCCESS;
}

TER
MetadataRegistryUpdate::doApply()
{
    // TODO: Implémenter la logique de création/mise à jour du MetadataRegistry
    JLOG(j_.info()) << "doApply MetadataRegistryUpdate appelé !";
    return tesSUCCESS;
}

} // namespace ripple 