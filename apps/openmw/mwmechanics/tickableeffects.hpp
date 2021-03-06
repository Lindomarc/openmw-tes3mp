#ifndef MWMECHANICS_TICKABLEEFFECTS_H
#define MWMECHANICS_TICKABLEEFFECTS_H

namespace MWWorld
{
    class Ptr;
}

namespace MWMechanics
{
    class CreatureStats;
    struct EffectKey;

    /// Apply a magic effect that is applied in tick intervals until its remaining time ends or it is removed
    /// @return Was the effect a tickable effect with a magnitude?
    bool effectTick(CreatureStats& creatureStats, const MWWorld::Ptr& actor, const EffectKey& effectKey, float magnitude);
}

#endif
